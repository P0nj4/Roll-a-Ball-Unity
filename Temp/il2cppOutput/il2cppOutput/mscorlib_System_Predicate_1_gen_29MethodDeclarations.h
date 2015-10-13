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

// System.Predicate`1<System.Int32>
struct Predicate_1_t2035;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.AsyncCallback
struct AsyncCallback_t150;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14742_gshared (Predicate_1_t2035 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14742(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2035 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14742_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14743_gshared (Predicate_1_t2035 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14743(__this, ___obj, method) (( bool (*) (Predicate_1_t2035 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m14743_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14744_gshared (Predicate_1_t2035 * __this, int32_t ___obj, AsyncCallback_t150 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14744(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2035 *, int32_t, AsyncCallback_t150 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14744_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14745_gshared (Predicate_1_t2035 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14745(__this, ___result, method) (( bool (*) (Predicate_1_t2035 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14745_gshared)(__this, ___result, method)
