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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1830;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1832;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2284;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2285;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t770;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1835;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11775_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11775(__this, method) (( void (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2__ctor_m11775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11776_gshared (Dictionary_2_t1830 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11776(__this, ___comparer, method) (( void (*) (Dictionary_2_t1830 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11776_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11777_gshared (Dictionary_2_t1830 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11777(__this, ___capacity, method) (( void (*) (Dictionary_2_t1830 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11777_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11778_gshared (Dictionary_2_t1830 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11778(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1830 *, SerializationInfo_t557 *, StreamingContext_t558 , const MethodInfo*))Dictionary_2__ctor_m11778_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11779_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11779(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11779_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11780_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11780(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1830 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11780_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11781_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11781(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1830 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11781_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11782_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11782(__this, ___key, method) (( bool (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11782_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11783_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11783(__this, ___key, method) (( void (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11783_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11784_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11784(__this, method) (( bool (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11784_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11785_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11785(__this, method) (( Object_t * (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11786_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11786(__this, method) (( bool (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11786_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11787_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2_t1833  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11787(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1830 *, KeyValuePair_2_t1833 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11787_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11788_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2_t1833  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11788(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1830 *, KeyValuePair_2_t1833 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11788_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11789_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2U5BU5D_t2284* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11789(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1830 *, KeyValuePair_2U5BU5D_t2284*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11789_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11790_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2_t1833  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11790(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1830 *, KeyValuePair_2_t1833 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11790_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11791_gshared (Dictionary_2_t1830 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11791(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11791_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11792_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11792(__this, method) (( Object_t * (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11792_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11793_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11793(__this, method) (( Object_t* (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11793_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11794_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11794(__this, method) (( Object_t * (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11794_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11795_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11795(__this, method) (( int32_t (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_get_Count_m11795_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11796_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11796(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11796_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11797_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11797(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1830 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11797_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11798_gshared (Dictionary_2_t1830 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11798(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1830 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11798_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11799_gshared (Dictionary_2_t1830 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11799(__this, ___size, method) (( void (*) (Dictionary_2_t1830 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11799_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11800_gshared (Dictionary_2_t1830 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11800(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1830 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11800_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1833  Dictionary_2_make_pair_m11801_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11801(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1833  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11801_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11802_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11802(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11802_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11803_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2U5BU5D_t2284* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11803(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1830 *, KeyValuePair_2U5BU5D_t2284*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11803_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11804_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11804(__this, method) (( void (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_Resize_m11804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11805_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11805(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1830 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11805_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11806_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11806(__this, method) (( void (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_Clear_m11806_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11807_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11807(__this, ___key, method) (( bool (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11807_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11808_gshared (Dictionary_2_t1830 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11808(__this, ___value, method) (( bool (*) (Dictionary_2_t1830 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11808_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11809_gshared (Dictionary_2_t1830 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11809(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1830 *, SerializationInfo_t557 *, StreamingContext_t558 , const MethodInfo*))Dictionary_2_GetObjectData_m11809_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11810_gshared (Dictionary_2_t1830 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11810(__this, ___sender, method) (( void (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11810_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11811_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11811(__this, ___key, method) (( bool (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11811_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11812_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11812(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1830 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11812_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1835 * Dictionary_2_get_Values_m11813_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11813(__this, method) (( ValueCollection_t1835 * (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_get_Values_m11813_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11814_gshared (Dictionary_2_t1830 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11814(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11814_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11815_gshared (Dictionary_2_t1830 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11815(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1830 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11815_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11816_gshared (Dictionary_2_t1830 * __this, KeyValuePair_2_t1833  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11816(__this, ___pair, method) (( bool (*) (Dictionary_2_t1830 *, KeyValuePair_2_t1833 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11816_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1837  Dictionary_2_GetEnumerator_m11817_gshared (Dictionary_2_t1830 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11817(__this, method) (( Enumerator_t1837  (*) (Dictionary_2_t1830 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11817_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t960  Dictionary_2_U3CCopyToU3Em__0_m11818_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11818(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t960  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11818_gshared)(__this /* static, unused */, ___key, ___value, method)
