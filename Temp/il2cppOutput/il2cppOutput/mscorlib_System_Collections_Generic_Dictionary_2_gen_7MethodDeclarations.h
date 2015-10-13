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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1802;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1801;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2282;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2283;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t770;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1808;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11399_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11399(__this, method) (( void (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2__ctor_m11399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11401_gshared (Dictionary_2_t1802 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11401(__this, ___comparer, method) (( void (*) (Dictionary_2_t1802 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11401_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11403_gshared (Dictionary_2_t1802 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11403(__this, ___capacity, method) (( void (*) (Dictionary_2_t1802 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11403_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11405_gshared (Dictionary_2_t1802 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11405(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1802 *, SerializationInfo_t557 *, StreamingContext_t558 , const MethodInfo*))Dictionary_2__ctor_m11405_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11407_gshared (Dictionary_2_t1802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11407(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1802 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11407_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11409_gshared (Dictionary_2_t1802 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11409(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1802 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11409_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11411_gshared (Dictionary_2_t1802 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11411(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1802 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11411_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11413_gshared (Dictionary_2_t1802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11413(__this, ___key, method) (( bool (*) (Dictionary_2_t1802 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11413_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11415_gshared (Dictionary_2_t1802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11415(__this, ___key, method) (( void (*) (Dictionary_2_t1802 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11415_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11417_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11417(__this, method) (( bool (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11417_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11419_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11419(__this, method) (( Object_t * (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11421_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11421(__this, method) (( bool (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11421_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11423_gshared (Dictionary_2_t1802 * __this, KeyValuePair_2_t1804  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11423(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1802 *, KeyValuePair_2_t1804 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11423_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11425_gshared (Dictionary_2_t1802 * __this, KeyValuePair_2_t1804  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11425(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1802 *, KeyValuePair_2_t1804 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11425_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11427_gshared (Dictionary_2_t1802 * __this, KeyValuePair_2U5BU5D_t2282* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11427(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1802 *, KeyValuePair_2U5BU5D_t2282*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11427_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11429_gshared (Dictionary_2_t1802 * __this, KeyValuePair_2_t1804  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11429(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1802 *, KeyValuePair_2_t1804 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11429_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11431_gshared (Dictionary_2_t1802 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11431(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1802 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11431_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11433_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11433(__this, method) (( Object_t * (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11433_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11435_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11435(__this, method) (( Object_t* (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11435_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11437_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11437(__this, method) (( Object_t * (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11437_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11439_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11439(__this, method) (( int32_t (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_get_Count_m11439_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11441_gshared (Dictionary_2_t1802 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11441(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1802 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11441_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11443_gshared (Dictionary_2_t1802 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11443(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1802 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11443_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11445_gshared (Dictionary_2_t1802 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11445(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1802 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11445_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11447_gshared (Dictionary_2_t1802 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11447(__this, ___size, method) (( void (*) (Dictionary_2_t1802 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11447_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11449_gshared (Dictionary_2_t1802 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11449(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1802 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11449_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1804  Dictionary_2_make_pair_m11451_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11451(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1804  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11451_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11453_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11453(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11453_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11455_gshared (Dictionary_2_t1802 * __this, KeyValuePair_2U5BU5D_t2282* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11455(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1802 *, KeyValuePair_2U5BU5D_t2282*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11455_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11457_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11457(__this, method) (( void (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_Resize_m11457_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11459_gshared (Dictionary_2_t1802 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11459(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1802 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11459_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11461_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11461(__this, method) (( void (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_Clear_m11461_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11463_gshared (Dictionary_2_t1802 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11463(__this, ___key, method) (( bool (*) (Dictionary_2_t1802 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11463_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11465_gshared (Dictionary_2_t1802 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11465(__this, ___value, method) (( bool (*) (Dictionary_2_t1802 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11465_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11467_gshared (Dictionary_2_t1802 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11467(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1802 *, SerializationInfo_t557 *, StreamingContext_t558 , const MethodInfo*))Dictionary_2_GetObjectData_m11467_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11469_gshared (Dictionary_2_t1802 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11469(__this, ___sender, method) (( void (*) (Dictionary_2_t1802 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11469_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11471_gshared (Dictionary_2_t1802 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11471(__this, ___key, method) (( bool (*) (Dictionary_2_t1802 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11471_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11473_gshared (Dictionary_2_t1802 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11473(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1802 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11473_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1808 * Dictionary_2_get_Values_m11474_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11474(__this, method) (( ValueCollection_t1808 * (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_get_Values_m11474_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11476_gshared (Dictionary_2_t1802 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11476(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1802 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11476_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11478_gshared (Dictionary_2_t1802 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11478(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1802 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11478_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11480_gshared (Dictionary_2_t1802 * __this, KeyValuePair_2_t1804  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11480(__this, ___pair, method) (( bool (*) (Dictionary_2_t1802 *, KeyValuePair_2_t1804 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11480_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1810  Dictionary_2_GetEnumerator_m11481_gshared (Dictionary_2_t1802 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11481(__this, method) (( Enumerator_t1810  (*) (Dictionary_2_t1802 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11481_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t960  Dictionary_2_U3CCopyToU3Em__0_m11483_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11483(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t960  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11483_gshared)(__this /* static, unused */, ___key, ___value, method)
