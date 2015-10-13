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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1829;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1972;
// System.Object[]
struct ObjectU5BU5D_t285;
// System.Predicate`1<System.Object>
struct Predicate_1_t1722;
// System.Comparison`1<System.Object>
struct Comparison_1_t1728;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11744_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11744(__this, method) (( void (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1__ctor_m11744_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11746_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11746(__this, method) (( Object_t * (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11746_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11748_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11748(__this, ___item, method) (( void (*) (IndexedSet_1_t1829 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11748_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11750_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11750(__this, ___item, method) (( bool (*) (IndexedSet_1_t1829 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11750_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11752_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11752(__this, method) (( Object_t* (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11752_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11754_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11754(__this, method) (( void (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_Clear_m11754_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11756_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11756(__this, ___item, method) (( bool (*) (IndexedSet_1_t1829 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11756_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11758_gshared (IndexedSet_1_t1829 * __this, ObjectU5BU5D_t285* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11758(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1829 *, ObjectU5BU5D_t285*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11758_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11760_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11760(__this, method) (( int32_t (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_get_Count_m11760_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11762_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11762(__this, method) (( bool (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11762_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11764_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11764(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1829 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11764_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11766_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11766(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1829 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11766_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11768_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11768(__this, ___index, method) (( void (*) (IndexedSet_1_t1829 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11768_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11770_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11770(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1829 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11770_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11772_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11772(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1829 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11772_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11773_gshared (IndexedSet_1_t1829 * __this, Predicate_1_t1722 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11773(__this, ___match, method) (( void (*) (IndexedSet_1_t1829 *, Predicate_1_t1722 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11773_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11774_gshared (IndexedSet_1_t1829 * __this, Comparison_1_t1728 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11774(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1829 *, Comparison_1_t1728 *, const MethodInfo*))IndexedSet_1_Sort_m11774_gshared)(__this, ___sortLayoutFunction, method)
