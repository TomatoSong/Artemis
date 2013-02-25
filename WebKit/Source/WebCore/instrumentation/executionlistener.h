#ifdef ARTEMIS

#include <stdint.h>
#include <string>

#ifndef EXECUTIONLISTENER_H
#define EXECUTIONLISTENER_H

namespace WebCore {
    class EventTarget;
    class Frame;
    class DOMWindow;
    class Node;
    class XMLHttpRequest;
    class ScriptExecutionContext;
    class LazyXMLHttpRequest;
}

namespace JSC {
    class Debugger;
    class SourceProvider;
    struct DebuggerCallFrame;
    class JSValue;
    class ExecState;
    class CodeBlock;
    class Instruction;
}

namespace inst {

class ExecutionListener {

public:

    /**
      Invoked when an event is added to a DOM element
      */
    virtual void eventAdded(WebCore::EventTarget *, const char*) = 0;

    /**
      Invoked when a dom element no longer has events attached.
      */
    virtual void eventCleared(WebCore::EventTarget *, const char*) = 0;

    /**
     * Timeouts
     */
    virtual void timerAdded(WebCore::ScriptExecutionContext* context, int timerId, int timeout, bool singleShot) = 0;
    virtual void timerRemoved(WebCore::ScriptExecutionContext* context, int timerId) = 0;

    /**
      Loading of files
      */
    virtual void javascript_code_loaded(JSC::SourceProvider* sp, JSC::ExecState*) = 0;

    /**
      Coverage information
      */
    virtual void javascript_executed_statement(const JSC::DebuggerCallFrame&, intptr_t sourceID, int lineNumber) = 0;

    /**
      Function calls
      */
    void interpreterCalledEvent(const JSC::DebuggerCallFrame&, intptr_t sourceID, int lineNumber);
    virtual void calledFunction(const JSC::DebuggerCallFrame&) = 0;

    /**
      Exception
      */
    virtual void exceptional_condition(std::string cause, intptr_t sourceID, int lineNumber);

    /**
      Url changing
      */
    void url_changed( JSC::JSValue,  JSC::ExecState* e);
    virtual void script_changed_url( std::string url);

    /**
      Ajax
      */
    virtual void webkit_ajax_send(const char * url, const char * data);
    virtual void ajaxCallbackEventAdded(WebCore::LazyXMLHttpRequest*) = 0;

    /**
      Eval
      */
    virtual void webkit_eval_call(const char * eval_string);

};

extern ExecutionListener* listener;
ExecutionListener* getListener();

}
#endif // EXECUTIONLISTENER_H
#endif
