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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t1826;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t267;
// System.Object[]
struct ObjectU5BU5D_t285;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m11730_gshared (InvokableCall_1_t1826 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m11730(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1826 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m11730_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m11731_gshared (InvokableCall_1_t1826 * __this, UnityAction_1_t267 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m11731(__this, ___action, method) (( void (*) (InvokableCall_1_t1826 *, UnityAction_1_t267 *, const MethodInfo*))InvokableCall_1__ctor_m11731_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m11732_gshared (InvokableCall_1_t1826 * __this, ObjectU5BU5D_t285* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m11732(__this, ___args, method) (( void (*) (InvokableCall_1_t1826 *, ObjectU5BU5D_t285*, const MethodInfo*))InvokableCall_1_Invoke_m11732_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m11733_gshared (InvokableCall_1_t1826 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m11733(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1826 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m11733_gshared)(__this, ___targetObj, ___method, method)
