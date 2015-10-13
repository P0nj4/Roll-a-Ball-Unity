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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t470;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2328;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2329;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t332;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2101;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t554;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2105;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2108;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m15343_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1__ctor_m15343(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1__ctor_m15343_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15344_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15344(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1__ctor_m15344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2976_gshared (List_1_t470 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2976(__this, ___capacity, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1__ctor_m2976_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m15345_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15345(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15345_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15346_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15346(__this, method) (( Object_t* (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15346_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15347_gshared (List_1_t470 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15347(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t470 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15347_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15348_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15348(__this, method) (( Object_t * (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15348_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15349_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15349(__this, ___item, method) (( int32_t (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15350_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15350(__this, ___item, method) (( bool (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15351_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15351(__this, ___item, method) (( int32_t (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15352_gshared (List_1_t470 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15352(__this, ___index, ___item, method) (( void (*) (List_1_t470 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15353_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15353(__this, ___item, method) (( void (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15354_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15354(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15355_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15355(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15355_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15356_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15356(__this, method) (( Object_t * (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15357_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15357(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15358_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15358(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15358_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15359_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15359(__this, ___index, method) (( Object_t * (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15359_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15360_gshared (List_1_t470 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15360(__this, ___index, ___value, method) (( void (*) (List_1_t470 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15360_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m15361_gshared (List_1_t470 * __this, UILineInfo_t328  ___item, const MethodInfo* method);
#define List_1_Add_m15361(__this, ___item, method) (( void (*) (List_1_t470 *, UILineInfo_t328 , const MethodInfo*))List_1_Add_m15361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15362_gshared (List_1_t470 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15362(__this, ___newCount, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15362_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15363_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15363(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15364_gshared (List_1_t470 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15364(__this, ___enumerable, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15364_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15365_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15365(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddRange_m15365_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2101 * List_1_AsReadOnly_m15366_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15366(__this, method) (( ReadOnlyCollection_1_t2101 * (*) (List_1_t470 *, const MethodInfo*))List_1_AsReadOnly_m15366_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m15367_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Clear_m15367(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Clear_m15367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m15368_gshared (List_1_t470 * __this, UILineInfo_t328  ___item, const MethodInfo* method);
#define List_1_Contains_m15368(__this, ___item, method) (( bool (*) (List_1_t470 *, UILineInfo_t328 , const MethodInfo*))List_1_Contains_m15368_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15369_gshared (List_1_t470 * __this, UILineInfoU5BU5D_t554* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15369(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t470 *, UILineInfoU5BU5D_t554*, int32_t, const MethodInfo*))List_1_CopyTo_m15369_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t328  List_1_Find_m15370_gshared (List_1_t470 * __this, Predicate_1_t2105 * ___match, const MethodInfo* method);
#define List_1_Find_m15370(__this, ___match, method) (( UILineInfo_t328  (*) (List_1_t470 *, Predicate_1_t2105 *, const MethodInfo*))List_1_Find_m15370_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15371_gshared (Object_t * __this /* static, unused */, Predicate_1_t2105 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15371(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2105 *, const MethodInfo*))List_1_CheckMatch_m15371_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15372_gshared (List_1_t470 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2105 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15372(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t470 *, int32_t, int32_t, Predicate_1_t2105 *, const MethodInfo*))List_1_GetIndex_m15372_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2100  List_1_GetEnumerator_m15373_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15373(__this, method) (( Enumerator_t2100  (*) (List_1_t470 *, const MethodInfo*))List_1_GetEnumerator_m15373_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15374_gshared (List_1_t470 * __this, UILineInfo_t328  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15374(__this, ___item, method) (( int32_t (*) (List_1_t470 *, UILineInfo_t328 , const MethodInfo*))List_1_IndexOf_m15374_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15375_gshared (List_1_t470 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15375(__this, ___start, ___delta, method) (( void (*) (List_1_t470 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15375_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15376_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15376(__this, ___index, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15376_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15377_gshared (List_1_t470 * __this, int32_t ___index, UILineInfo_t328  ___item, const MethodInfo* method);
#define List_1_Insert_m15377(__this, ___index, ___item, method) (( void (*) (List_1_t470 *, int32_t, UILineInfo_t328 , const MethodInfo*))List_1_Insert_m15377_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15378_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15378(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15378_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m15379_gshared (List_1_t470 * __this, UILineInfo_t328  ___item, const MethodInfo* method);
#define List_1_Remove_m15379(__this, ___item, method) (( bool (*) (List_1_t470 *, UILineInfo_t328 , const MethodInfo*))List_1_Remove_m15379_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15380_gshared (List_1_t470 * __this, Predicate_1_t2105 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15380(__this, ___match, method) (( int32_t (*) (List_1_t470 *, Predicate_1_t2105 *, const MethodInfo*))List_1_RemoveAll_m15380_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15381_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15381(__this, ___index, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15381_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m15382_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Reverse_m15382(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Reverse_m15382_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m15383_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Sort_m15383(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Sort_m15383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15384_gshared (List_1_t470 * __this, Comparison_1_t2108 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15384(__this, ___comparison, method) (( void (*) (List_1_t470 *, Comparison_1_t2108 *, const MethodInfo*))List_1_Sort_m15384_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t554* List_1_ToArray_m15385_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_ToArray_m15385(__this, method) (( UILineInfoU5BU5D_t554* (*) (List_1_t470 *, const MethodInfo*))List_1_ToArray_m15385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15386_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15386(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_TrimExcess_m15386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15387_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15387(__this, method) (( int32_t (*) (List_1_t470 *, const MethodInfo*))List_1_get_Capacity_m15387_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15388_gshared (List_1_t470 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15388(__this, ___value, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15388_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15389_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_get_Count_m15389(__this, method) (( int32_t (*) (List_1_t470 *, const MethodInfo*))List_1_get_Count_m15389_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t328  List_1_get_Item_m15390_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15390(__this, ___index, method) (( UILineInfo_t328  (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_get_Item_m15390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15391_gshared (List_1_t470 * __this, int32_t ___index, UILineInfo_t328  ___value, const MethodInfo* method);
#define List_1_set_Item_m15391(__this, ___index, ___value, method) (( void (*) (List_1_t470 *, int32_t, UILineInfo_t328 , const MethodInfo*))List_1_set_Item_m15391_gshared)(__this, ___index, ___value, method)
