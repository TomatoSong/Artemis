/*
 * Copyright 2012 Aarhus University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CONCOLICRUNTIME_H
#define CONCOLICRUNTIME_H

#include <QObject>

#include "concolic/executiontree/tracenodes.h"

#include "runtime/runtime.h"

namespace artemis
{

/*
 *  The main controller for the concolic execution.
 *
 *  Algorithm:
 *      Insert "default" input as next input
 *      While next input exists do:
 *          Execute WebKit using the next input
 *          Merge the last execution trace with the symbolic execution tree
 *          Search algorithm chooses a desired path
 *          Retrieve the coresponding path constraint (from path tree)
 *          Solve the constraint, returns a concrete input to test
 *              * Need to deal with cases where we can't solve (simplest implementation: mark as given up and move on)
 *          Set next input according to the result of the constraint solver
 *      od
 *
 *  Steps that needs to be added (formcrawl project):
 *
 *    Build an annotated trace of the path taken
 *    Classify the trace as a success/failure and add it to the tree
 *    Check that we took the intended path
 *      * Need to deal with cases where we did not (simplest implementation: just give up)
 *    Finish after some condition (coverage, timeout, ...)
 *
 *  We also have a demo mode which does not drive the execution but only records and prints out the information
 *  which would be collected during a run of concolic execution.
 *
 */
class ConcolicRuntime : public Runtime
{
    Q_OBJECT

public:
    ConcolicRuntime(QObject* parent, const Options& options, const QUrl& url);

    void run(const QUrl& url);

protected:
    void preConcreteExecution();

    QSharedPointer<ExecutableConfiguration> mNextConfiguration;
    TraceNodePtr mSymbolicExecutionGraph;

private slots:
    void postConcreteExecution(ExecutableConfigurationConstPtr configuration, QSharedPointer<ExecutionResult> result);

};

} // namespace artemis

#endif // CONCOLICRUNTIME_H