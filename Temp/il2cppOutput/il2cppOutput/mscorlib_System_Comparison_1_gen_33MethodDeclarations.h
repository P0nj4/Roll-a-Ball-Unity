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

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2108;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15483_gshared (Comparison_1_t2108 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15483(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2108 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15483_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15484_gshared (Comparison_1_t2108 * __this, UILineInfo_t328  ___x, UILineInfo_t328  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15484(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2108 *, UILineInfo_t328 , UILineInfo_t328 , const MethodInfo*))Comparison_1_Invoke_m15484_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15485_gshared (Comparison_1_t2108 * __this, UILineInfo_t328  ___x, UILineInfo_t328  ___y, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15485(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2108 *, UILineInfo_t328 , UILineInfo_t328 , AsyncCallback_t150 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15485_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15486_gshared (Comparison_1_t2108 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15486(__this, ___result, method) (( int32_t (*) (Comparison_1_t2108 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15486_gshared)(__this, ___result, method)
