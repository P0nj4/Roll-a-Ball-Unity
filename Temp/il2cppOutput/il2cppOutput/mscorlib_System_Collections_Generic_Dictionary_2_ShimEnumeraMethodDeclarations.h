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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1814;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1802;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11560_gshared (ShimEnumerator_t1814 * __this, Dictionary_2_t1802 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11560(__this, ___host, method) (( void (*) (ShimEnumerator_t1814 *, Dictionary_2_t1802 *, const MethodInfo*))ShimEnumerator__ctor_m11560_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11561_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11561(__this, method) (( bool (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_MoveNext_m11561_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t960  ShimEnumerator_get_Entry_m11562_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11562(__this, method) (( DictionaryEntry_t960  (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_get_Entry_m11562_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11563_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11563(__this, method) (( Object_t * (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_get_Key_m11563_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11564_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11564(__this, method) (( Object_t * (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_get_Value_m11564_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11565_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11565(__this, method) (( Object_t * (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_get_Current_m11565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m11566_gshared (ShimEnumerator_t1814 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m11566(__this, method) (( void (*) (ShimEnumerator_t1814 *, const MethodInfo*))ShimEnumerator_Reset_m11566_gshared)(__this, method)
