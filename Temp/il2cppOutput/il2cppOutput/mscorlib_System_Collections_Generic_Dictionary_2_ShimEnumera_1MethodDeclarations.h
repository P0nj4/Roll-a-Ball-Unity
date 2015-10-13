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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1890;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1881;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12507_gshared (ShimEnumerator_t1890 * __this, Dictionary_2_t1881 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12507(__this, ___host, method) (( void (*) (ShimEnumerator_t1890 *, Dictionary_2_t1881 *, const MethodInfo*))ShimEnumerator__ctor_m12507_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12508_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12508(__this, method) (( bool (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_MoveNext_m12508_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t960  ShimEnumerator_get_Entry_m12509_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12509(__this, method) (( DictionaryEntry_t960  (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_get_Entry_m12509_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12510_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12510(__this, method) (( Object_t * (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_get_Key_m12510_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12511_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12511(__this, method) (( Object_t * (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_get_Value_m12511_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12512_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12512(__this, method) (( Object_t * (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_get_Current_m12512_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12513_gshared (ShimEnumerator_t1890 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12513(__this, method) (( void (*) (ShimEnumerator_t1890 *, const MethodInfo*))ShimEnumerator_Reset_m12513_gshared)(__this, method)
