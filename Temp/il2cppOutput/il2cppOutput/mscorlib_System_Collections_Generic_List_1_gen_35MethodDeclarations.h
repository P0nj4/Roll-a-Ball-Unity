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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t337;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t361;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1972;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2275;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1712;
// System.Object[]
struct ObjectU5BU5D_t285;
// System.Predicate`1<System.Object>
struct Predicate_1_t1722;
// System.Comparison`1<System.Object>
struct Comparison_1_t1728;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10256_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1__ctor_m10256(__this, method) (( void (*) (List_1_t337 *, const MethodInfo*))List_1__ctor_m10256_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10258_gshared (List_1_t337 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10258(__this, ___collection, method) (( void (*) (List_1_t337 *, Object_t*, const MethodInfo*))List_1__ctor_m10258_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10260_gshared (List_1_t337 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10260(__this, ___capacity, method) (( void (*) (List_1_t337 *, int32_t, const MethodInfo*))List_1__ctor_m10260_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10262_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10262(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10262_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10264_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10264(__this, method) (( Object_t* (*) (List_1_t337 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10264_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10266_gshared (List_1_t337 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10266(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t337 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10266_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10268_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10268(__this, method) (( Object_t * (*) (List_1_t337 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10268_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10270_gshared (List_1_t337 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10270(__this, ___item, method) (( int32_t (*) (List_1_t337 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10270_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10272_gshared (List_1_t337 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10272(__this, ___item, method) (( bool (*) (List_1_t337 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10272_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10274_gshared (List_1_t337 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10274(__this, ___item, method) (( int32_t (*) (List_1_t337 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10274_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10276_gshared (List_1_t337 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10276(__this, ___index, ___item, method) (( void (*) (List_1_t337 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10276_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10278_gshared (List_1_t337 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10278(__this, ___item, method) (( void (*) (List_1_t337 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10278_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10280_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10280(__this, method) (( bool (*) (List_1_t337 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10280_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10282_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10282(__this, method) (( bool (*) (List_1_t337 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10282_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10284_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10284(__this, method) (( Object_t * (*) (List_1_t337 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10284_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10286_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10286(__this, method) (( bool (*) (List_1_t337 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10286_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10288_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10288(__this, method) (( bool (*) (List_1_t337 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10288_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10290_gshared (List_1_t337 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10290(__this, ___index, method) (( Object_t * (*) (List_1_t337 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10290_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10292_gshared (List_1_t337 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10292(__this, ___index, ___value, method) (( void (*) (List_1_t337 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10292_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10294_gshared (List_1_t337 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10294(__this, ___item, method) (( void (*) (List_1_t337 *, Object_t *, const MethodInfo*))List_1_Add_m10294_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10296_gshared (List_1_t337 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10296(__this, ___newCount, method) (( void (*) (List_1_t337 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10296_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10298_gshared (List_1_t337 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10298(__this, ___collection, method) (( void (*) (List_1_t337 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10298_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10300_gshared (List_1_t337 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10300(__this, ___enumerable, method) (( void (*) (List_1_t337 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10300_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10302_gshared (List_1_t337 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10302(__this, ___collection, method) (( void (*) (List_1_t337 *, Object_t*, const MethodInfo*))List_1_AddRange_m10302_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1712 * List_1_AsReadOnly_m10304_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10304(__this, method) (( ReadOnlyCollection_1_t1712 * (*) (List_1_t337 *, const MethodInfo*))List_1_AsReadOnly_m10304_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10306_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_Clear_m10306(__this, method) (( void (*) (List_1_t337 *, const MethodInfo*))List_1_Clear_m10306_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10308_gshared (List_1_t337 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10308(__this, ___item, method) (( bool (*) (List_1_t337 *, Object_t *, const MethodInfo*))List_1_Contains_m10308_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10310_gshared (List_1_t337 * __this, ObjectU5BU5D_t285* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10310(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t337 *, ObjectU5BU5D_t285*, int32_t, const MethodInfo*))List_1_CopyTo_m10310_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10312_gshared (List_1_t337 * __this, Predicate_1_t1722 * ___match, const MethodInfo* method);
#define List_1_Find_m10312(__this, ___match, method) (( Object_t * (*) (List_1_t337 *, Predicate_1_t1722 *, const MethodInfo*))List_1_Find_m10312_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10314_gshared (Object_t * __this /* static, unused */, Predicate_1_t1722 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10314(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1722 *, const MethodInfo*))List_1_CheckMatch_m10314_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10316_gshared (List_1_t337 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1722 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10316(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t337 *, int32_t, int32_t, Predicate_1_t1722 *, const MethodInfo*))List_1_GetIndex_m10316_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1716  List_1_GetEnumerator_m10318_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10318(__this, method) (( Enumerator_t1716  (*) (List_1_t337 *, const MethodInfo*))List_1_GetEnumerator_m10318_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10320_gshared (List_1_t337 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10320(__this, ___item, method) (( int32_t (*) (List_1_t337 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10320_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10322_gshared (List_1_t337 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10322(__this, ___start, ___delta, method) (( void (*) (List_1_t337 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10322_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10324_gshared (List_1_t337 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10324(__this, ___index, method) (( void (*) (List_1_t337 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10324_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10326_gshared (List_1_t337 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10326(__this, ___index, ___item, method) (( void (*) (List_1_t337 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10326_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10328_gshared (List_1_t337 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10328(__this, ___collection, method) (( void (*) (List_1_t337 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10328_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10330_gshared (List_1_t337 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10330(__this, ___item, method) (( bool (*) (List_1_t337 *, Object_t *, const MethodInfo*))List_1_Remove_m10330_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10332_gshared (List_1_t337 * __this, Predicate_1_t1722 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10332(__this, ___match, method) (( int32_t (*) (List_1_t337 *, Predicate_1_t1722 *, const MethodInfo*))List_1_RemoveAll_m10332_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10334_gshared (List_1_t337 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10334(__this, ___index, method) (( void (*) (List_1_t337 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10334_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10336_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_Reverse_m10336(__this, method) (( void (*) (List_1_t337 *, const MethodInfo*))List_1_Reverse_m10336_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10338_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_Sort_m10338(__this, method) (( void (*) (List_1_t337 *, const MethodInfo*))List_1_Sort_m10338_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10340_gshared (List_1_t337 * __this, Comparison_1_t1728 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10340(__this, ___comparison, method) (( void (*) (List_1_t337 *, Comparison_1_t1728 *, const MethodInfo*))List_1_Sort_m10340_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t285* List_1_ToArray_m10342_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_ToArray_m10342(__this, method) (( ObjectU5BU5D_t285* (*) (List_1_t337 *, const MethodInfo*))List_1_ToArray_m10342_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10344_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10344(__this, method) (( void (*) (List_1_t337 *, const MethodInfo*))List_1_TrimExcess_m10344_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10346_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10346(__this, method) (( int32_t (*) (List_1_t337 *, const MethodInfo*))List_1_get_Capacity_m10346_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10348_gshared (List_1_t337 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10348(__this, ___value, method) (( void (*) (List_1_t337 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10348_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10350_gshared (List_1_t337 * __this, const MethodInfo* method);
#define List_1_get_Count_m10350(__this, method) (( int32_t (*) (List_1_t337 *, const MethodInfo*))List_1_get_Count_m10350_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10352_gshared (List_1_t337 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10352(__this, ___index, method) (( Object_t * (*) (List_1_t337 *, int32_t, const MethodInfo*))List_1_get_Item_m10352_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10354_gshared (List_1_t337 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10354(__this, ___index, ___value, method) (( void (*) (List_1_t337 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10354_gshared)(__this, ___index, ___value, method)
