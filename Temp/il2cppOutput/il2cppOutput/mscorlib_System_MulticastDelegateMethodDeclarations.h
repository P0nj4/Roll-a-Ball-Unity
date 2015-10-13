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

// System.MulticastDelegate
struct MulticastDelegate_t148;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1644;
// System.Delegate
struct Delegate_t317;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m5667 (MulticastDelegate_t148 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m5668 (MulticastDelegate_t148 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m5669 (MulticastDelegate_t148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1644* MulticastDelegate_GetInvocationList_m5670 (MulticastDelegate_t148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t317 * MulticastDelegate_CombineImpl_m5671 (MulticastDelegate_t148 * __this, Delegate_t317 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m5672 (MulticastDelegate_t148 * __this, MulticastDelegate_t148 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t148 * MulticastDelegate_KPM_m5673 (Object_t * __this /* static, unused */, MulticastDelegate_t148 * ___needle, MulticastDelegate_t148 * ___haystack, MulticastDelegate_t148 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t317 * MulticastDelegate_RemoveImpl_m5674 (MulticastDelegate_t148 * __this, Delegate_t317 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
