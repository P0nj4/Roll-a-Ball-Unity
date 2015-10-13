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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t239;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2318;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2286;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2319;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2032;
// System.Int32[]
struct Int32U5BU5D_t360;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2035;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m14620_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1__ctor_m14620(__this, method) (( void (*) (List_1_t239 *, const MethodInfo*))List_1__ctor_m14620_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14621_gshared (List_1_t239 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14621(__this, ___collection, method) (( void (*) (List_1_t239 *, Object_t*, const MethodInfo*))List_1__ctor_m14621_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14622_gshared (List_1_t239 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14622(__this, ___capacity, method) (( void (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1__ctor_m14622_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m14623_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14623(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14623_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14624_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14624(__this, method) (( Object_t* (*) (List_1_t239 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14624_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14625_gshared (List_1_t239 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14625(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t239 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14625_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14626_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14626(__this, method) (( Object_t * (*) (List_1_t239 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14626_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14627_gshared (List_1_t239 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14627(__this, ___item, method) (( int32_t (*) (List_1_t239 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14627_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14628_gshared (List_1_t239 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14628(__this, ___item, method) (( bool (*) (List_1_t239 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14628_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14629_gshared (List_1_t239 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14629(__this, ___item, method) (( int32_t (*) (List_1_t239 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14630_gshared (List_1_t239 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14630(__this, ___index, ___item, method) (( void (*) (List_1_t239 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14630_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14631_gshared (List_1_t239 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14631(__this, ___item, method) (( void (*) (List_1_t239 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14631_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14632_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14632(__this, method) (( bool (*) (List_1_t239 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14632_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14633_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14633(__this, method) (( bool (*) (List_1_t239 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14633_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14634_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14634(__this, method) (( Object_t * (*) (List_1_t239 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14634_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14635_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14635(__this, method) (( bool (*) (List_1_t239 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14635_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14636_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14636(__this, method) (( bool (*) (List_1_t239 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14636_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14637_gshared (List_1_t239 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14637(__this, ___index, method) (( Object_t * (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14637_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14638_gshared (List_1_t239 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14638(__this, ___index, ___value, method) (( void (*) (List_1_t239 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14638_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m14639_gshared (List_1_t239 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m14639(__this, ___item, method) (( void (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_Add_m14639_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14640_gshared (List_1_t239 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14640(__this, ___newCount, method) (( void (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14640_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14641_gshared (List_1_t239 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14641(__this, ___collection, method) (( void (*) (List_1_t239 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14641_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14642_gshared (List_1_t239 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14642(__this, ___enumerable, method) (( void (*) (List_1_t239 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14642_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2027_gshared (List_1_t239 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2027(__this, ___collection, method) (( void (*) (List_1_t239 *, Object_t*, const MethodInfo*))List_1_AddRange_m2027_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2032 * List_1_AsReadOnly_m14643_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14643(__this, method) (( ReadOnlyCollection_1_t2032 * (*) (List_1_t239 *, const MethodInfo*))List_1_AsReadOnly_m14643_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14644_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_Clear_m14644(__this, method) (( void (*) (List_1_t239 *, const MethodInfo*))List_1_Clear_m14644_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14645_gshared (List_1_t239 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m14645(__this, ___item, method) (( bool (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_Contains_m14645_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14646_gshared (List_1_t239 * __this, Int32U5BU5D_t360* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14646(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t239 *, Int32U5BU5D_t360*, int32_t, const MethodInfo*))List_1_CopyTo_m14646_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m14647_gshared (List_1_t239 * __this, Predicate_1_t2035 * ___match, const MethodInfo* method);
#define List_1_Find_m14647(__this, ___match, method) (( int32_t (*) (List_1_t239 *, Predicate_1_t2035 *, const MethodInfo*))List_1_Find_m14647_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14648_gshared (Object_t * __this /* static, unused */, Predicate_1_t2035 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14648(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2035 *, const MethodInfo*))List_1_CheckMatch_m14648_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14649_gshared (List_1_t239 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2035 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14649(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t239 *, int32_t, int32_t, Predicate_1_t2035 *, const MethodInfo*))List_1_GetIndex_m14649_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2031  List_1_GetEnumerator_m14650_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14650(__this, method) (( Enumerator_t2031  (*) (List_1_t239 *, const MethodInfo*))List_1_GetEnumerator_m14650_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14651_gshared (List_1_t239 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m14651(__this, ___item, method) (( int32_t (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_IndexOf_m14651_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14652_gshared (List_1_t239 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14652(__this, ___start, ___delta, method) (( void (*) (List_1_t239 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14652_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14653_gshared (List_1_t239 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14653(__this, ___index, method) (( void (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14653_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14654_gshared (List_1_t239 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m14654(__this, ___index, ___item, method) (( void (*) (List_1_t239 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m14654_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14655_gshared (List_1_t239 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14655(__this, ___collection, method) (( void (*) (List_1_t239 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14655_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14656_gshared (List_1_t239 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m14656(__this, ___item, method) (( bool (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_Remove_m14656_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14657_gshared (List_1_t239 * __this, Predicate_1_t2035 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14657(__this, ___match, method) (( int32_t (*) (List_1_t239 *, Predicate_1_t2035 *, const MethodInfo*))List_1_RemoveAll_m14657_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14658_gshared (List_1_t239 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14658(__this, ___index, method) (( void (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14658_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14659_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_Reverse_m14659(__this, method) (( void (*) (List_1_t239 *, const MethodInfo*))List_1_Reverse_m14659_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14660_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_Sort_m14660(__this, method) (( void (*) (List_1_t239 *, const MethodInfo*))List_1_Sort_m14660_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14661_gshared (List_1_t239 * __this, Comparison_1_t2039 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14661(__this, ___comparison, method) (( void (*) (List_1_t239 *, Comparison_1_t2039 *, const MethodInfo*))List_1_Sort_m14661_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t360* List_1_ToArray_m14662_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_ToArray_m14662(__this, method) (( Int32U5BU5D_t360* (*) (List_1_t239 *, const MethodInfo*))List_1_ToArray_m14662_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14663_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14663(__this, method) (( void (*) (List_1_t239 *, const MethodInfo*))List_1_TrimExcess_m14663_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14664_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14664(__this, method) (( int32_t (*) (List_1_t239 *, const MethodInfo*))List_1_get_Capacity_m14664_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14665_gshared (List_1_t239 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14665(__this, ___value, method) (( void (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14665_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14666_gshared (List_1_t239 * __this, const MethodInfo* method);
#define List_1_get_Count_m14666(__this, method) (( int32_t (*) (List_1_t239 *, const MethodInfo*))List_1_get_Count_m14666_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m14667_gshared (List_1_t239 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14667(__this, ___index, method) (( int32_t (*) (List_1_t239 *, int32_t, const MethodInfo*))List_1_get_Item_m14667_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14668_gshared (List_1_t239 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m14668(__this, ___index, ___value, method) (( void (*) (List_1_t239 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m14668_gshared)(__this, ___index, ___value, method)
