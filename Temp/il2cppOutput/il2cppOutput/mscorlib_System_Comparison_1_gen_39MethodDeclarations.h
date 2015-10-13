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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t2237;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16763_gshared (Comparison_1_t2237 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16763(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2237 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16763_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16764_gshared (Comparison_1_t2237 * __this, CustomAttributeNamedArgument_t1230  ___x, CustomAttributeNamedArgument_t1230  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16764(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2237 *, CustomAttributeNamedArgument_t1230 , CustomAttributeNamedArgument_t1230 , const MethodInfo*))Comparison_1_Invoke_m16764_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16765_gshared (Comparison_1_t2237 * __this, CustomAttributeNamedArgument_t1230  ___x, CustomAttributeNamedArgument_t1230  ___y, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16765(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2237 *, CustomAttributeNamedArgument_t1230 , CustomAttributeNamedArgument_t1230 , AsyncCallback_t150 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16765_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16766_gshared (Comparison_1_t2237 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16766(__this, ___result, method) (( int32_t (*) (Comparison_1_t2237 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16766_gshared)(__this, ___result, method)
