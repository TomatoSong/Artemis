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

 // AUTO GENERATED - DO NOT MODIFY

#ifndef SYMBOLIC_BOOLEANBINARYOPERATION_H
#define SYMBOLIC_BOOLEANBINARYOPERATION_H

#include <string>

#include "JavaScriptCore/wtf/ExportMacros.h"
#include "JavaScriptCore/runtime/UString.h"

#include "visitor.h"
#include "booleanexpression.h"

#ifdef ARTEMIS

namespace Symbolic
{

typedef enum {
	BOOL_EQ, BOOL_NEQ, BOOL_SEQ, BOOL_SNEQ
} BooleanBinaryOp;

const char* opToString(BooleanBinaryOp op);


class BooleanBinaryOperation : public BooleanExpression
{
public:
    explicit BooleanBinaryOperation(BooleanExpression* lhs, BooleanBinaryOp op, BooleanExpression* rhs);
    void accept(Visitor* visitor);

	inline BooleanExpression* getLhs() {
		return m_lhs;
	}
	inline BooleanBinaryOp getOp() {
		return m_op;
	}
	inline BooleanExpression* getRhs() {
		return m_rhs;
	}

private:
	BooleanExpression* m_lhs;
	BooleanBinaryOp m_op;
	BooleanExpression* m_rhs;

};
}

#endif
#endif // SYMBOLIC_BOOLEANBINARYOPERATION_H