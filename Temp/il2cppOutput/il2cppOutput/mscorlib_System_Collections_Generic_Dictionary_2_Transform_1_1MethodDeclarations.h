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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Transform_1_t1813;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11556_gshared (Transform_1_t1813 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11556(__this, ___object, ___method, method) (( void (*) (Transform_1_t1813 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11556_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1804  Transform_1_Invoke_m11557_gshared (Transform_1_t1813 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11557(__this, ___key, ___value, method) (( KeyValuePair_2_t1804  (*) (Transform_1_t1813 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m11557_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11558_gshared (Transform_1_t1813 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11558(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1813 *, int32_t, Object_t *, AsyncCallback_t150 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11558_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1804  Transform_1_EndInvoke_m11559_gshared (Transform_1_t1813 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11559(__this, ___result, method) (( KeyValuePair_2_t1804  (*) (Transform_1_t1813 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11559_gshared)(__this, ___result, method)
