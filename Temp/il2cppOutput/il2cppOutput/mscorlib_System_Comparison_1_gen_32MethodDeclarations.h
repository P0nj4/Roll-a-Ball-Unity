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

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2099;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15339_gshared (Comparison_1_t2099 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15339(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2099 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15339_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15340_gshared (Comparison_1_t2099 * __this, UICharInfo_t330  ___x, UICharInfo_t330  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15340(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2099 *, UICharInfo_t330 , UICharInfo_t330 , const MethodInfo*))Comparison_1_Invoke_m15340_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15341_gshared (Comparison_1_t2099 * __this, UICharInfo_t330  ___x, UICharInfo_t330  ___y, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15341(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2099 *, UICharInfo_t330 , UICharInfo_t330 , AsyncCallback_t150 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15341_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15342_gshared (Comparison_1_t2099 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15342(__this, ___result, method) (( int32_t (*) (Comparison_1_t2099 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15342_gshared)(__this, ___result, method)
