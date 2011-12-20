/*
 * This file is part of the WebKit open source project.
 * This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#import "config.h"

#if ENABLE(Condition1) || ENABLE(Condition2)

#import "DOMInternal.h"

#import "DOMTestInterface.h"

#import "DOMBlobInternal.h"
#import "DOMCSSRuleInternal.h"
#import "DOMCSSValueInternal.h"
#import "DOMEventInternal.h"
#import "DOMNodeInternal.h"
#import "DOMStyleSheetInternal.h"
#import "DOMTestInterfaceInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "KURL.h"
#import "TestInterface.h"
#import "TestSupplemental.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::TestInterface*>(_internal)

@implementation DOMTestInterface

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMTestInterface class], self))
        return;

    if (_internal)
        IMPL->deref();
    [super dealloc];
}

- (void)finalize
{
    if (_internal)
        IMPL->deref();
    [super finalize];
}

#if ENABLE(Condition11) || ENABLE(Condition12)
- (NSString *)str1
{
    WebCore::JSMainThreadNullState state;
    return TestSupplemental::str1(IMPL);
}
#endif

#if ENABLE(Condition11) || ENABLE(Condition12)
- (NSString *)str2
{
    WebCore::JSMainThreadNullState state;
    return TestSupplemental::str2(IMPL);
}

- (void)setStr2:(NSString *)newStr2
{
    WebCore::JSMainThreadNullState state;
    TestSupplemental::setStr2(IMPL, newStr2);
}
#endif

#if ENABLE(Condition11) || ENABLE(Condition12)
- (NSString *)str3
{
    WebCore::JSMainThreadNullState state;
    return TestSupplemental::str3(IMPL);
}

- (void)setStr3:(NSString *)newStr3
{
    WebCore::JSMainThreadNullState state;
    TestSupplemental::setStr3(IMPL, newStr3);
}
#endif

@end

WebCore::TestInterface* core(DOMTestInterface *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::TestInterface*>(wrapper->_internal) : 0;
}

DOMTestInterface *kit(WebCore::TestInterface* value)
{
    { DOM_ASSERT_MAIN_THREAD(); WebCoreThreadViolationCheckRoundOne(); };
    if (!value)
        return nil;
    if (DOMTestInterface *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMTestInterface *wrapper = [[DOMTestInterface alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}

#endif // ENABLE(Condition1) || ENABLE(Condition2)
