/*
 * Copyright (C) 2009 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"

#if ENABLE(WORKERS)

#include "DedicatedWorkerThread.h"

#include "DedicatedWorkerContext.h"
#include "WorkerObjectProxy.h"

namespace WebCore {

PassRefPtr<DedicatedWorkerThread> DedicatedWorkerThread::create(const KURL& scriptURL, const String& userAgent, const String& sourceCode, WorkerLoaderProxy& workerLoaderProxy, WorkerObjectProxy& workerObjectProxy, WorkerThreadStartMode startMode, const String& contentSecurityPolicy, ContentSecurityPolicy::HeaderType contentSecurityPolicyType)
{
    return adoptRef(new DedicatedWorkerThread(scriptURL, userAgent, sourceCode, workerLoaderProxy, workerObjectProxy, startMode, contentSecurityPolicy, contentSecurityPolicyType));
}

DedicatedWorkerThread::DedicatedWorkerThread(const KURL& url, const String& userAgent, const String& sourceCode, WorkerLoaderProxy& workerLoaderProxy, WorkerObjectProxy& workerObjectProxy, WorkerThreadStartMode startMode, const String& contentSecurityPolicy, ContentSecurityPolicy::HeaderType contentSecurityPolicyType)
    : WorkerThread(url, userAgent, sourceCode, workerLoaderProxy, workerObjectProxy, startMode, contentSecurityPolicy, contentSecurityPolicyType)
    , m_workerObjectProxy(workerObjectProxy)
{
}

DedicatedWorkerThread::~DedicatedWorkerThread()
{
}

PassRefPtr<WorkerContext> DedicatedWorkerThread::createWorkerContext(const KURL& url, const String& userAgent, const String& contentSecurityPolicy, ContentSecurityPolicy::HeaderType contentSecurityPolicyType)
{
    return DedicatedWorkerContext::create(url, userAgent, this, contentSecurityPolicy, contentSecurityPolicyType);
}

void DedicatedWorkerThread::runEventLoop()
{
    // Notify the parent object of our current active state before calling the superclass to run the event loop.
    m_workerObjectProxy.reportPendingActivity(workerContext()->hasPendingActivity());
    WorkerThread::runEventLoop();
}

} // namespace WebCore

#endif // ENABLE(WORKERS)
