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
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#ifndef V8TestEventConstructor_h
#define V8TestEventConstructor_h

#include "TestEventConstructor.h"
#include "V8DOMWrapper.h"
#include "WrapperTypeInfo.h"
#include <v8.h>
#include <wtf/HashMap.h>
#include <wtf/text/StringHash.h>

namespace WebCore {

class OptionsObject;
class V8TestEventConstructor {
public:
    static const bool hasDependentLifetime = false;
    static bool HasInstance(v8::Handle<v8::Value>);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static TestEventConstructor* toNative(v8::Handle<v8::Object> object)
    {
        return reinterpret_cast<TestEventConstructor*>(object->GetPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    inline static v8::Handle<v8::Object> wrap(TestEventConstructor*);
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static v8::Handle<v8::Value> constructorCallback(const v8::Arguments&);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static v8::Handle<v8::Object> existingWrapper(TestEventConstructor*);

private:
    static v8::Handle<v8::Object> wrapSlow(TestEventConstructor*);
};

ALWAYS_INLINE v8::Handle<v8::Object> V8TestEventConstructor::existingWrapper(TestEventConstructor* impl)
{
    return getDOMObjectMap().get(impl);
}

v8::Handle<v8::Object> V8TestEventConstructor::wrap(TestEventConstructor* impl)
{
        v8::Handle<v8::Object> wrapper = existingWrapper(impl);
        if (!wrapper.IsEmpty())
            return wrapper;
    return V8TestEventConstructor::wrapSlow(impl);
}

inline v8::Handle<v8::Value> toV8(TestEventConstructor* impl)
{
    if (!impl)
        return v8::Null();
    return V8TestEventConstructor::wrap(impl);
}
inline v8::Handle<v8::Value> toV8(PassRefPtr< TestEventConstructor > impl)
{
    return toV8(impl.get());
}

bool fillTestEventConstructorInit(TestEventConstructorInit&, const OptionsObject&);

}

#endif // V8TestEventConstructor_h
