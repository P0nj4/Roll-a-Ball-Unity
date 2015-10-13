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

// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2009;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Comparison`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14322_gshared (Comparison_1_t2009 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14322(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2009 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14322_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14323_gshared (Comparison_1_t2009 * __this, Color32_t273  ___x, Color32_t273  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14323(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2009 *, Color32_t273 , Color32_t273 , const MethodInfo*))Comparison_1_Invoke_m14323_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Color32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14324_gshared (Comparison_1_t2009 * __this, Color32_t273  ___x, Color32_t273  ___y, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14324(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2009 *, Color32_t273 , Color32_t273 , AsyncCallback_t150 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14324_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14325_gshared (Comparison_1_t2009 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14325(__this, ___result, method) (( int32_t (*) (Comparison_1_t2009 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14325_gshared)(__this, ___result, method)
