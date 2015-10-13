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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t469;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2325;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2326;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2327;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2092;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t553;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2096;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2099;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m15199_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1__ctor_m15199(__this, method) (( void (*) (List_1_t469 *, const MethodInfo*))List_1__ctor_m15199_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15200_gshared (List_1_t469 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15200(__this, ___collection, method) (( void (*) (List_1_t469 *, Object_t*, const MethodInfo*))List_1__ctor_m15200_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m2975_gshared (List_1_t469 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m2975(__this, ___capacity, method) (( void (*) (List_1_t469 *, int32_t, const MethodInfo*))List_1__ctor_m2975_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m15201_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15201(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15201_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15202_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15202(__this, method) (( Object_t* (*) (List_1_t469 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15202_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15203_gshared (List_1_t469 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15203(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t469 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15203_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15204_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15204(__this, method) (( Object_t * (*) (List_1_t469 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15204_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15205_gshared (List_1_t469 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15205(__this, ___item, method) (( int32_t (*) (List_1_t469 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15205_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15206_gshared (List_1_t469 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15206(__this, ___item, method) (( bool (*) (List_1_t469 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15206_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15207_gshared (List_1_t469 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15207(__this, ___item, method) (( int32_t (*) (List_1_t469 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15207_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15208_gshared (List_1_t469 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15208(__this, ___index, ___item, method) (( void (*) (List_1_t469 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15208_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15209_gshared (List_1_t469 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15209(__this, ___item, method) (( void (*) (List_1_t469 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15209_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15210_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15210(__this, method) (( bool (*) (List_1_t469 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15210_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15211_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15211(__this, method) (( bool (*) (List_1_t469 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15211_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15212_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15212(__this, method) (( Object_t * (*) (List_1_t469 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15213_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15213(__this, method) (( bool (*) (List_1_t469 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15213_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15214_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15214(__this, method) (( bool (*) (List_1_t469 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15214_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15215_gshared (List_1_t469 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15215(__this, ___index, method) (( Object_t * (*) (List_1_t469 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15216_gshared (List_1_t469 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15216(__this, ___index, ___value, method) (( void (*) (List_1_t469 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15216_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m15217_gshared (List_1_t469 * __this, UICharInfo_t330  ___item, const MethodInfo* method);
#define List_1_Add_m15217(__this, ___item, method) (( void (*) (List_1_t469 *, UICharInfo_t330 , const MethodInfo*))List_1_Add_m15217_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15218_gshared (List_1_t469 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15218(__this, ___newCount, method) (( void (*) (List_1_t469 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15218_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15219_gshared (List_1_t469 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15219(__this, ___collection, method) (( void (*) (List_1_t469 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15219_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15220_gshared (List_1_t469 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15220(__this, ___enumerable, method) (( void (*) (List_1_t469 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15220_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15221_gshared (List_1_t469 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15221(__this, ___collection, method) (( void (*) (List_1_t469 *, Object_t*, const MethodInfo*))List_1_AddRange_m15221_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2092 * List_1_AsReadOnly_m15222_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15222(__this, method) (( ReadOnlyCollection_1_t2092 * (*) (List_1_t469 *, const MethodInfo*))List_1_AsReadOnly_m15222_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m15223_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_Clear_m15223(__this, method) (( void (*) (List_1_t469 *, const MethodInfo*))List_1_Clear_m15223_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m15224_gshared (List_1_t469 * __this, UICharInfo_t330  ___item, const MethodInfo* method);
#define List_1_Contains_m15224(__this, ___item, method) (( bool (*) (List_1_t469 *, UICharInfo_t330 , const MethodInfo*))List_1_Contains_m15224_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15225_gshared (List_1_t469 * __this, UICharInfoU5BU5D_t553* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15225(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t469 *, UICharInfoU5BU5D_t553*, int32_t, const MethodInfo*))List_1_CopyTo_m15225_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t330  List_1_Find_m15226_gshared (List_1_t469 * __this, Predicate_1_t2096 * ___match, const MethodInfo* method);
#define List_1_Find_m15226(__this, ___match, method) (( UICharInfo_t330  (*) (List_1_t469 *, Predicate_1_t2096 *, const MethodInfo*))List_1_Find_m15226_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15227_gshared (Object_t * __this /* static, unused */, Predicate_1_t2096 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15227(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2096 *, const MethodInfo*))List_1_CheckMatch_m15227_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15228_gshared (List_1_t469 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2096 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15228(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t469 *, int32_t, int32_t, Predicate_1_t2096 *, const MethodInfo*))List_1_GetIndex_m15228_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2091  List_1_GetEnumerator_m15229_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15229(__this, method) (( Enumerator_t2091  (*) (List_1_t469 *, const MethodInfo*))List_1_GetEnumerator_m15229_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15230_gshared (List_1_t469 * __this, UICharInfo_t330  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15230(__this, ___item, method) (( int32_t (*) (List_1_t469 *, UICharInfo_t330 , const MethodInfo*))List_1_IndexOf_m15230_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15231_gshared (List_1_t469 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15231(__this, ___start, ___delta, method) (( void (*) (List_1_t469 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15231_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15232_gshared (List_1_t469 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15232(__this, ___index, method) (( void (*) (List_1_t469 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15232_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15233_gshared (List_1_t469 * __this, int32_t ___index, UICharInfo_t330  ___item, const MethodInfo* method);
#define List_1_Insert_m15233(__this, ___index, ___item, method) (( void (*) (List_1_t469 *, int32_t, UICharInfo_t330 , const MethodInfo*))List_1_Insert_m15233_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15234_gshared (List_1_t469 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15234(__this, ___collection, method) (( void (*) (List_1_t469 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15234_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m15235_gshared (List_1_t469 * __this, UICharInfo_t330  ___item, const MethodInfo* method);
#define List_1_Remove_m15235(__this, ___item, method) (( bool (*) (List_1_t469 *, UICharInfo_t330 , const MethodInfo*))List_1_Remove_m15235_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15236_gshared (List_1_t469 * __this, Predicate_1_t2096 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15236(__this, ___match, method) (( int32_t (*) (List_1_t469 *, Predicate_1_t2096 *, const MethodInfo*))List_1_RemoveAll_m15236_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15237_gshared (List_1_t469 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15237(__this, ___index, method) (( void (*) (List_1_t469 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15237_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m15238_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_Reverse_m15238(__this, method) (( void (*) (List_1_t469 *, const MethodInfo*))List_1_Reverse_m15238_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m15239_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_Sort_m15239(__this, method) (( void (*) (List_1_t469 *, const MethodInfo*))List_1_Sort_m15239_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15240_gshared (List_1_t469 * __this, Comparison_1_t2099 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15240(__this, ___comparison, method) (( void (*) (List_1_t469 *, Comparison_1_t2099 *, const MethodInfo*))List_1_Sort_m15240_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t553* List_1_ToArray_m15241_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_ToArray_m15241(__this, method) (( UICharInfoU5BU5D_t553* (*) (List_1_t469 *, const MethodInfo*))List_1_ToArray_m15241_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15242_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15242(__this, method) (( void (*) (List_1_t469 *, const MethodInfo*))List_1_TrimExcess_m15242_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15243_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15243(__this, method) (( int32_t (*) (List_1_t469 *, const MethodInfo*))List_1_get_Capacity_m15243_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15244_gshared (List_1_t469 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15244(__this, ___value, method) (( void (*) (List_1_t469 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15244_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15245_gshared (List_1_t469 * __this, const MethodInfo* method);
#define List_1_get_Count_m15245(__this, method) (( int32_t (*) (List_1_t469 *, const MethodInfo*))List_1_get_Count_m15245_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t330  List_1_get_Item_m15246_gshared (List_1_t469 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15246(__this, ___index, method) (( UICharInfo_t330  (*) (List_1_t469 *, int32_t, const MethodInfo*))List_1_get_Item_m15246_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15247_gshared (List_1_t469 * __this, int32_t ___index, UICharInfo_t330  ___value, const MethodInfo* method);
#define List_1_set_Item_m15247(__this, ___index, ___value, method) (( void (*) (List_1_t469 *, int32_t, UICharInfo_t330 , const MethodInfo*))List_1_set_Item_m15247_gshared)(__this, ___index, ___value, method)
