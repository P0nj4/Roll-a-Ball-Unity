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

// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t397;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_CullingGroupEvent.h"

// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
extern "C" void StateChanged__ctor_m2185 (StateChanged_t397 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
extern "C" void StateChanged_Invoke_m2186 (StateChanged_t397 * __this, CullingGroupEvent_t396  ___sphere, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StateChanged_t397(Il2CppObject* delegate, CullingGroupEvent_t396  ___sphere);
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
extern "C" Object_t * StateChanged_BeginInvoke_m2187 (StateChanged_t397 * __this, CullingGroupEvent_t396  ___sphere, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
extern "C" void StateChanged_EndInvoke_m2188 (StateChanged_t397 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
