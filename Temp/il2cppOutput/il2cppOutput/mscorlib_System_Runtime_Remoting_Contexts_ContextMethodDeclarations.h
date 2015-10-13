#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Contexts.Context
struct Context_t1314;
// System.Runtime.Remoting.Contexts.IContextProperty[]
struct IContextPropertyU5BU5D_t1657;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t1319;
// System.ContextBoundObject
struct ContextBoundObject_t1321;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t1315;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1337;
// System.Runtime.Remoting.Contexts.IContextProperty
struct IContextProperty_t1658;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1317;
// System.MarshalByRefObject
struct MarshalByRefObject_t849;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t1654;
// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t1615;
// System.LocalDataStoreSlot
struct LocalDataStoreSlot_t1581;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Contexts.Context::.ctor()
extern "C" void Context__ctor_m8031 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern "C" void Context__cctor_m8032 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m8033 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C" Context_t1314 * Context_get_DefaultContext_m8034 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.Context::get_ContextID()
extern "C" int32_t Context_get_ContextID_m8035 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty[] System.Runtime.Remoting.Contexts.Context::get_ContextProperties()
extern "C" IContextPropertyU5BU5D_t1657* Context_get_ContextProperties_m8036 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m8037 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_NeedsContextSink()
extern "C" bool Context_get_NeedsContextSink_m8038 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C" bool Context_RegisterDynamicProperty_m8039 (Object_t * __this /* static, unused */, Object_t * ___prop, ContextBoundObject_t1321 * ___obj, Context_t1314 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::UnregisterDynamicProperty(System.String,System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C" bool Context_UnregisterDynamicProperty_m8040 (Object_t * __this /* static, unused */, String_t* ___name, ContextBoundObject_t1321 * ___obj, Context_t1314 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::GetDynamicPropertyCollection(System.ContextBoundObject,System.Runtime.Remoting.Contexts.Context)
extern "C" DynamicPropertyCollection_t1315 * Context_GetDynamicPropertyCollection_m8041 (Object_t * __this /* static, unused */, ContextBoundObject_t1321 * ___obj, Context_t1314 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyGlobalDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C" void Context_NotifyGlobalDynamicSinks_m8042 (Object_t * __this /* static, unused */, bool ___start, Object_t * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasGlobalDynamicSinks()
extern "C" bool Context_get_HasGlobalDynamicSinks_m8043 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::NotifyDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
extern "C" void Context_NotifyDynamicSinks_m8044 (Context_t1314 * __this, bool ___start, Object_t * ___req_msg, bool ___client_site, bool ___async, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasDynamicSinks()
extern "C" bool Context_get_HasDynamicSinks_m8045 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_HasExitSinks()
extern "C" bool Context_get_HasExitSinks_m8046 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern "C" Object_t * Context_GetProperty_m8047 (Context_t1314 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::SetProperty(System.Runtime.Remoting.Contexts.IContextProperty)
extern "C" void Context_SetProperty_m8048 (Context_t1314 * __this, Object_t * ___prop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::Freeze()
extern "C" void Context_Freeze_m8049 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern "C" String_t* Context_ToString_m8050 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetServerContextSinkChain()
extern "C" Object_t * Context_GetServerContextSinkChain_m8051 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::GetClientContextSinkChain()
extern "C" Object_t * Context_GetClientContextSinkChain_m8052 (Context_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateServerObjectSinkChain(System.MarshalByRefObject,System.Boolean)
extern "C" Object_t * Context_CreateServerObjectSinkChain_m8053 (Context_t1314 * __this, MarshalByRefObject_t849 * ___obj, bool ___forceInternalExecute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern "C" Object_t * Context_CreateEnvoySink_m8054 (Context_t1314 * __this, MarshalByRefObject_t849 * ___serverObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::SwitchToContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1314 * Context_SwitchToContext_m8055 (Object_t * __this /* static, unused */, Context_t1314 * ___newContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" Context_t1314 * Context_CreateNewContext_m8056 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate)
extern "C" void Context_DoCallBack_m8057 (Context_t1314 * __this, CrossContextDelegate_t1615 * ___deleg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateDataSlot()
extern "C" LocalDataStoreSlot_t1581 * Context_AllocateDataSlot_m8058 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::AllocateNamedDataSlot(System.String)
extern "C" LocalDataStoreSlot_t1581 * Context_AllocateNamedDataSlot_m8059 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::FreeNamedDataSlot(System.String)
extern "C" void Context_FreeNamedDataSlot_m8060 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Contexts.Context::GetData(System.LocalDataStoreSlot)
extern "C" Object_t * Context_GetData_m8061 (Object_t * __this /* static, unused */, LocalDataStoreSlot_t1581 * ___slot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.LocalDataStoreSlot System.Runtime.Remoting.Contexts.Context::GetNamedDataSlot(System.String)
extern "C" LocalDataStoreSlot_t1581 * Context_GetNamedDataSlot_m8062 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.Context::SetData(System.LocalDataStoreSlot,System.Object)
extern "C" void Context_SetData_m8063 (Object_t * __this /* static, unused */, LocalDataStoreSlot_t1581 * ___slot, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
