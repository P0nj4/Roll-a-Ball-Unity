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

// System.Comparison`1<System.Object>
struct Comparison_1_t1728;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m10476_gshared (Comparison_1_t1728 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m10476(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1728 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m10476_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m10477_gshared (Comparison_1_t1728 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m10477(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1728 *, Object_t *, Object_t *, const MethodInfo*))Comparison_1_Invoke_m10477_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m10478_gshared (Comparison_1_t1728 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m10478(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1728 *, Object_t *, Object_t *, AsyncCallback_t150 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m10478_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m10479_gshared (Comparison_1_t1728 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m10479(__this, ___result, method) (( int32_t (*) (Comparison_1_t1728 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m10479_gshared)(__this, ___result, method)
