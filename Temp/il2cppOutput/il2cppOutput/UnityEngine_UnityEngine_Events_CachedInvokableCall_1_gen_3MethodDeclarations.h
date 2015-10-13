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

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t2127;
// UnityEngine.Object
struct Object_t276;
struct Object_t276_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t285;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m15651_gshared (CachedInvokableCall_1_t2127 * __this, Object_t276 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m15651(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2127 *, Object_t276 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m15651_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m15652_gshared (CachedInvokableCall_1_t2127 * __this, ObjectU5BU5D_t285* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m15652(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2127 *, ObjectU5BU5D_t285*, const MethodInfo*))CachedInvokableCall_1_Invoke_m15652_gshared)(__this, ___args, method)
