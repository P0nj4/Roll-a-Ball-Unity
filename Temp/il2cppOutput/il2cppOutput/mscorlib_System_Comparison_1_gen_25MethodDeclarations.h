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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t1998;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14172_gshared (Comparison_1_t1998 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14172(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1998 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14172_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14173_gshared (Comparison_1_t1998 * __this, Vector3_t4  ___x, Vector3_t4  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14173(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1998 *, Vector3_t4 , Vector3_t4 , const MethodInfo*))Comparison_1_Invoke_m14173_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14174_gshared (Comparison_1_t1998 * __this, Vector3_t4  ___x, Vector3_t4  ___y, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14174(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1998 *, Vector3_t4 , Vector3_t4 , AsyncCallback_t150 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14174_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14175_gshared (Comparison_1_t1998 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14175(__this, ___result, method) (( int32_t (*) (Comparison_1_t1998 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14175_gshared)(__this, ___result, method)
