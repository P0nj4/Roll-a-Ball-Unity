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

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t1902;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12747_gshared (Predicate_1_t1902 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m12747(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1902 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m12747_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12748_gshared (Predicate_1_t1902 * __this, UIVertex_t162  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m12748(__this, ___obj, method) (( bool (*) (Predicate_1_t1902 *, UIVertex_t162 , const MethodInfo*))Predicate_1_Invoke_m12748_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12749_gshared (Predicate_1_t1902 * __this, UIVertex_t162  ___obj, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m12749(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1902 *, UIVertex_t162 , AsyncCallback_t150 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m12749_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12750_gshared (Predicate_1_t1902 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m12750(__this, ___result, method) (( bool (*) (Predicate_1_t1902 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m12750_gshared)(__this, ___result, method)
