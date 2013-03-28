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

#ifdef ARTEMIS

#include <iostream>

#include "JavaScriptCore/wtf/ExportMacros.h"
#include "JavaScriptCore/runtime/JSObject.h"
#include "JavaScriptCore/runtime/JSValue.h"
#include "JavaScriptCore/runtime/Identifier.h"

#include "forminputsource.h"

namespace Symbolic
{

FormInputSource::FormInputSource()
{
}

bool FormInputSource::domNodeTraversalCallback(JSC::CallFrame* callFrame, std::string path, JSC::JSValue jsBaseValue)
{
    std::string cname = "";
    if (jsBaseValue.isObject()) {
        cname = jsBaseValue.toObject(callFrame)->classInfo()->className;
    }

    //std::cout << path << " (object: " << jsBaseValue.isObject() << " " << cname << " " << jsBaseValue.toObject(callFrame) << ")" << std::endl;

    if (!jsBaseValue.isObject()) {
        return true;
    }

    JSC::JSObject* jsBaseObject = jsBaseValue.toObject(callFrame);

    if (strcmp(jsBaseObject->classInfo()->className, "HTMLInputElement") != 0) {
        return true;
    }

    std::cout << "HTMLInputElement Identified! -- " << jsBaseObject->toString(callFrame).ascii().data() << std::endl;

    JSC::Identifier valueIdentifier = JSC::Identifier(callFrame, "value");

    JSC::JSValue value = jsBaseValue.get(callFrame, valueIdentifier);
    value.makeSymbolic(std::string("<SYM ") + path + std::string(">"));

    ASSERT(value.isString());

    JSC::PutPropertySlot putProperty(false);
    jsBaseValue.put(callFrame, valueIdentifier, value, putProperty);

    ASSERT(jsBaseValue.get(callFrame, valueIdentifier).isSymbolic());

    return true;
}

}

#endif