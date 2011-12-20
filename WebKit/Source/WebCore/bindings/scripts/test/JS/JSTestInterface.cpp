/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(Condition1) || ENABLE(Condition2)

#include "JSTestInterface.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSTestSupplemental.h"
#include "TestInterface.h"
#include "TestSupplemental.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(Condition11) || ENABLE(Condition12)
#include "KURL.h"
#include <runtime/JSString.h>
#endif

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTestInterface);

/* Hash table */

static const HashTableValue JSTestInterfaceTableValues[] =
{
#if ENABLE(Condition11) || ENABLE(Condition12)
    { "str1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestInterfaceStr1), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(Condition11) || ENABLE(Condition12)
    { "str2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestInterfaceStr2), (intptr_t)setJSTestInterfaceStr2, NoIntrinsic },
#endif
#if ENABLE(Condition11) || ENABLE(Condition12)
    { "str3", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestInterfaceStr3), (intptr_t)setJSTestInterfaceStr3, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestInterfaceConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestInterfaceTable = { 8, 7, JSTestInterfaceTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSTestInterfaceConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestInterfaceConstructorTable = { 1, 0, JSTestInterfaceConstructorTableValues, 0 };
const ClassInfo JSTestInterfaceConstructor::s_info = { "TestInterfaceConstructor", &DOMConstructorObject::s_info, &JSTestInterfaceConstructorTable, 0, CREATE_METHOD_TABLE(JSTestInterfaceConstructor) };

JSTestInterfaceConstructor::JSTestInterfaceConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSTestInterfaceConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->globalData());
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSTestInterfacePrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSTestInterfaceConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTestInterfaceConstructor, JSDOMWrapper>(exec, &JSTestInterfaceConstructorTable, static_cast<JSTestInterfaceConstructor*>(cell), propertyName, slot);
}

bool JSTestInterfaceConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSTestInterfaceConstructor, JSDOMWrapper>(exec, &JSTestInterfaceConstructorTable, static_cast<JSTestInterfaceConstructor*>(object), propertyName, descriptor);
}

EncodedJSValue JSC_HOST_CALL JSTestInterfaceConstructor::constructJSTestInterface(ExecState* exec)
{
    JSTestInterfaceConstructor* jsConstructor = static_cast<JSTestInterfaceConstructor*>(exec->callee());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createTypeError(exec, "Not enough arguments"));
    ExceptionCode ec = 0;
    const String& str1(ustringToString(MAYBE_MISSING_PARAMETER(exec, 0, MissingIsUndefined).isEmpty() ? UString() : MAYBE_MISSING_PARAMETER(exec, 0, MissingIsUndefined).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& str2(ustringToString(MAYBE_MISSING_PARAMETER(exec, 1, MissingIsUndefined).isEmpty() ? UString() : MAYBE_MISSING_PARAMETER(exec, 1, MissingIsUndefined).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = jsConstructor->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "TestInterface constructor associated document is unavailable"));
    RefPtr<TestInterface> object = TestInterface::create(context, str1, str2, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, jsConstructor->globalObject(), object.get())));
}

ConstructType JSTestInterfaceConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSTestInterface;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSTestInterfacePrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSTestInterfacePrototypeTable = { 1, 0, JSTestInterfacePrototypeTableValues, 0 };
const ClassInfo JSTestInterfacePrototype::s_info = { "TestInterfacePrototype", &JSC::JSNonFinalObject::s_info, &JSTestInterfacePrototypeTable, 0, CREATE_METHOD_TABLE(JSTestInterfacePrototype) };

JSObject* JSTestInterfacePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSTestInterface>(exec, globalObject);
}

const ClassInfo JSTestInterface::s_info = { "TestInterface", &JSDOMWrapper::s_info, &JSTestInterfaceTable, 0 , CREATE_METHOD_TABLE(JSTestInterface) };

JSTestInterface::JSTestInterface(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<TestInterface> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSTestInterface::finishCreation(JSGlobalData& globalData)
{
    Base::finishCreation(globalData);
    ASSERT(inherits(&s_info));
}

JSObject* JSTestInterface::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSTestInterfacePrototype::create(exec->globalData(), globalObject, JSTestInterfacePrototype::createStructure(globalObject->globalData(), globalObject, globalObject->objectPrototype()));
}

bool JSTestInterface::getOwnPropertySlot(JSCell* cell, ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    JSTestInterface* thisObject = jsCast<JSTestInterface*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSTestInterface, Base>(exec, &JSTestInterfaceTable, thisObject, propertyName, slot);
}

bool JSTestInterface::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    JSTestInterface* thisObject = jsCast<JSTestInterface*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSTestInterface, Base>(exec, &JSTestInterfaceTable, thisObject, propertyName, descriptor);
}

#if ENABLE(Condition11) || ENABLE(Condition12)
JSValue jsTestInterfaceStr1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTestInterface* castedThis = static_cast<JSTestInterface*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TestInterface* imp = static_cast<TestInterface*>(castedThis->impl());
    JSValue result = jsString(exec, TestSupplemental::str1(imp));
    return result;
}

#endif

#if ENABLE(Condition11) || ENABLE(Condition12)
JSValue jsTestInterfaceStr2(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTestInterface* castedThis = static_cast<JSTestInterface*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    TestInterface* imp = static_cast<TestInterface*>(castedThis->impl());
    JSValue result = jsString(exec, TestSupplemental::str2(imp));
    return result;
}

#endif

#if ENABLE(Condition11) || ENABLE(Condition12)
JSValue jsTestInterfaceStr3(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTestInterface* castedThis = static_cast<JSTestInterface*>(asObject(slotBase));
    return JSTestSupplemental::str3(castedThis, exec);
}

#endif

JSValue jsTestInterfaceConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSTestInterface* domObject = static_cast<JSTestInterface*>(asObject(slotBase));
    return JSTestInterface::getConstructor(exec, domObject->globalObject());
}

void JSTestInterface::put(JSCell* cell, ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    JSTestInterface* thisObject = jsCast<JSTestInterface*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSTestInterface, Base>(exec, propertyName, value, &JSTestInterfaceTable, thisObject, slot);
}

#if ENABLE(Condition11) || ENABLE(Condition12)
void setJSTestInterfaceStr2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSTestInterface* castedThis = static_cast<JSTestInterface*>(thisObject);
    TestInterface* imp = static_cast<TestInterface*>(castedThis->impl());
    TestSupplemental::setStr2(imp, ustringToString(value.isEmpty() ? UString() : value.toString(exec)));
}

#endif

#if ENABLE(Condition11) || ENABLE(Condition12)
void setJSTestInterfaceStr3(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSTestSupplemental::setStr3(static_cast<JSTestInterface*>(thisObject), exec, value);
}

#endif

JSValue JSTestInterface::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestInterfaceConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSTestInterface* jsTestInterface)
{
    if (jsTestInterface->hasCustomProperties())
        return true;
    return false;
}

bool JSTestInterfaceOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSTestInterface* jsTestInterface = static_cast<JSTestInterface*>(handle.get().asCell());
    if (jsTestInterface->impl()->hasPendingActivity())
        return true;
    if (!isObservable(jsTestInterface))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSTestInterfaceOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSTestInterface* jsTestInterface = static_cast<JSTestInterface*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsTestInterface->impl(), jsTestInterface);
    jsTestInterface->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, TestInterface* impl)
{
    return wrap<JSTestInterface>(exec, globalObject, impl);
}

TestInterface* toTestInterface(JSC::JSValue value)
{
    return value.inherits(&JSTestInterface::s_info) ? static_cast<JSTestInterface*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(Condition1) || ENABLE(Condition2)
