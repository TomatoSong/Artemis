/*
 * Copyright 2012 Aarhus University
 *
 * Licensed under the GNU General Public License, Version 3 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *          http://www.gnu.org/licenses/gpl-3.0.html
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TRACE_H
#define TRACE_H

#include <QSharedPointer>
#include <QString>
#include <QList>
#include <QUrl>
#include <QMap>

#include <assert.h>

#include "JavaScriptCore/symbolic/expr.h"

#include "concolic/executiontree/tracevisitor.h"

#include "runtime/input/forms/formfieldrestrictedvalues.h"


namespace artemis
{

class TraceNode
{
    // Abstract
public:
    virtual void accept(TraceVisitor* visitor) = 0;
    virtual bool isEqualShallow(const QSharedPointer<const TraceNode>& other) = 0;
    virtual void setChild(int position, QSharedPointer<TraceNode> node) = 0; // Used only by TraceMerger to introduce new nodes inline in the trace. Should never be called otherwise.
    virtual ~TraceNode() {}
};

typedef QSharedPointer<TraceNode> TraceNodePtr;

class TraceAnnotation : public TraceNode
{
    // Abstract
public:
    TraceNodePtr next;

    virtual void setChild(int position, TraceNodePtr node) {
        assert(position == 0);
        next = node;
    }
};

typedef QSharedPointer<TraceAnnotation> TraceAnnotationPtr;


class TraceAlert : public TraceAnnotation
{

public:

    void accept(TraceVisitor* visitor)
    {
        visitor->visit(this);
    }

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        return !other.dynamicCast<const TraceAlert>().isNull();
    }

    ~TraceAlert() {}

    QString message;
};


class TraceConsoleMessage : public TraceAnnotation
{

public:

    void accept(TraceVisitor* visitor)
    {
        visitor->visit(this);
    }

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        return !other.dynamicCast<const TraceConsoleMessage>().isNull();
    }

    ~TraceConsoleMessage() {}

    QString message;
};


class TraceDomModification : public TraceAnnotation
{
public:

    void accept(TraceVisitor* visitor) {
        visitor->visit(this);
    }

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        return !other.dynamicCast<const TraceDomModification>().isNull();
    }

     ~TraceDomModification() {}

    double amountModified;
    QMap<int,int> words; // Mapping from index of TraceDomModDetector::indicators to the count of that word.
};


class TracePageLoad : public TraceAnnotation
{
public:
    QUrl url; // The NEW url being loaded.

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        return !other.dynamicCast<const TracePageLoad>().isNull();
    }

    void accept(TraceVisitor* visitor) {
        visitor->visit(this);
    }

    ~TracePageLoad(){}
};


class TraceMarker : public TraceAnnotation
{
public:
    QString label;
    QString index;
    bool isSelectRestriction;
    SelectRestriction selectRestriction;

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        // N.B. For trace markers we have a stricter matching rule that the nodes must have the same index and label.
        // This is stricter than for other nodes because it is an intentional divergence if the markers are different.
        QSharedPointer<const TraceMarker> otherMarker = other.dynamicCast<const TraceMarker>();
        return !otherMarker.isNull() && otherMarker->index == index && otherMarker->label == label;
    }

    void accept(TraceVisitor* visitor) {
        visitor->visit(this);
    }

    ~TraceMarker(){}
};

typedef QSharedPointer<TraceMarker> TraceMarkerPtr;


class TraceFunctionCall : public TraceAnnotation
{
public:
    QString name;

    void accept(TraceVisitor* visitor) {
        visitor->visit(this);
    }

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
         const QSharedPointer<const TraceFunctionCall> otherCasted = other.dynamicCast<const TraceFunctionCall>();

         return !otherCasted.isNull() && name.compare(otherCasted->name) == 0;
    }

    ~TraceFunctionCall(){}
};


class TraceEnd : public TraceNode
{
public:
    QSet<uint> traceIndices;

    virtual void setChild(int position, TraceNodePtr node) {
        assert(false); // We are asserting that position is in the empty range, which is why there is no warning instead.
        // Strictly, this could be implemented in TraceEndSuccess and TraceEndFailure but this is not needed and for simplicity we do not allow it.
    }
};

typedef QSharedPointer<TraceEnd> TraceEndPtr;


class TraceEndSuccess : public TraceEnd
{
    // Empty marker.
public:
    TraceNodePtr next;

    void accept(TraceVisitor* visitor) {
        visitor->visit(this);
    }

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        return !other.dynamicCast<const TraceEndSuccess>().isNull();
    }

    ~TraceEndSuccess(){}
};


class TraceEndFailure : public TraceEnd
{
    // Empty marker.
public:
    TraceNodePtr next;

    void accept(TraceVisitor* visitor) {
        visitor->visit(this);
    }

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        return !other.dynamicCast<const TraceEndFailure>().isNull();
    }

    ~TraceEndFailure(){}
};


class TraceEndUnknown : public TraceEnd
{
    // Empty placeholder.
public:

    void accept(TraceVisitor* visitor) {
        visitor->visit(this);
    }

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        return !other.dynamicCast<const TraceEndUnknown>().isNull();
    }

    ~TraceEndUnknown(){}
};



/*
 * This node type is used to lump together a sequence of (single-child) concrete branches and function calls.
 * It is a summary of concrete execution which occurred between two "interesting" node types.
 *
 * It is also possible for different traces to take different paths through a concrete summary.
 * To handle this case a TraceCopnctreteSummarisation contains a list of possible concrete executions and pointers to
 * the remaining subtree which that execution leads to.
 *
 * There must be at least one execution in each TraceConcreteSummarisation. This is handled by the TraceBuilder.
 *
 * If there are multiple executions, they should all agree on a certain prefix (possibly empty) and only diverge when
 * some take a BRANCH_FALSE and some take a BRANCH_TRUE. This is handled by the TraceMerger.
 *
 */
class TraceConcreteSummarisation : public TraceNode
{
public:
    enum EventType {
        BRANCH_FALSE, BRANCH_TRUE, FUNCTION_CALL
    };

    typedef QPair<QList<EventType>, TraceNodePtr> SingleExecution;

    QList<SingleExecution> executions;

    void accept(TraceVisitor* visitor) {
        visitor->visit(this);
    }

    bool isEqualShallow(const QSharedPointer<const TraceNode>& other)
    {
        return !other.dynamicCast<const TraceConcreteSummarisation>().isNull();
    }

    virtual void setChild(int position, TraceNodePtr node) {
        assert(position >= 0 && position < executions.size());
        executions[position].second = node; // TODO: This will add another trace which may begin with a new concrete summary. The specific use in Tracemerger does not allow this but it may come up in future.
    }

    QList<int> numBranches()
    {
        QList<int> result;
        int i;
        foreach(SingleExecution execution, executions) {
            i = 0;
            foreach(EventType e, execution.first) {
                switch(e) {
                case BRANCH_FALSE:
                case BRANCH_TRUE:
                    i++;
                    break;
                case FUNCTION_CALL:
                    break;
                }
            }
            result.append(i);
        }
        return result;
    }

    QList<int> numFunctions()
    {
        QList<int> result;
        int i;
        foreach(SingleExecution execution, executions) {
            i = 0;
            foreach(EventType e, execution.first) {
                switch(e) {
                case BRANCH_FALSE:
                case BRANCH_TRUE:
                    break;
                case FUNCTION_CALL:
                    i++;
                    break;
                }
            }
            result.append(i);
        }
        return result;
    }

    ~TraceConcreteSummarisation(){}
};

typedef QSharedPointer<TraceConcreteSummarisation> TraceConcreteSummarisationPtr;


}


#endif // TRACE_H
