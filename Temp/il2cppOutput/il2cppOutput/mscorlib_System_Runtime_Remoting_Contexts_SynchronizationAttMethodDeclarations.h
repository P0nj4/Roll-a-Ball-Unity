﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t1322;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t1654;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1317;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1314;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C" void SynchronizationAttribute__ctor_m8082 (SynchronizationAttribute_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern "C" void SynchronizationAttribute__ctor_m8083 (SynchronizationAttribute_t1322 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern "C" void SynchronizationAttribute_set_Locked_m8084 (SynchronizationAttribute_t1322 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern "C" void SynchronizationAttribute_ReleaseLock_m8085 (SynchronizationAttribute_t1322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m8086 (SynchronizationAttribute_t1322 * __this, Object_t * ___ctorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetClientContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" Object_t * SynchronizationAttribute_GetClientContextSink_m8087 (SynchronizationAttribute_t1322 * __this, Object_t * ___nextSink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetServerContextSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" Object_t * SynchronizationAttribute_GetServerContextSink_m8088 (SynchronizationAttribute_t1322 * __this, Object_t * ___nextSink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool SynchronizationAttribute_IsContextOK_m8089 (SynchronizationAttribute_t1322 * __this, Context_t1314 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern "C" void SynchronizationAttribute_ExitContext_m8090 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern "C" void SynchronizationAttribute_EnterContext_m8091 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
