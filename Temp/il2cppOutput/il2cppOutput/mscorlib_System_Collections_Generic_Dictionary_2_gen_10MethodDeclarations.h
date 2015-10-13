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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2153;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1832;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2331;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2332;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t770;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m15909_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15909(__this, method) (( void (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2__ctor_m15909_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15910_gshared (Dictionary_2_t2153 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15910(__this, ___comparer, method) (( void (*) (Dictionary_2_t2153 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15910_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15912_gshared (Dictionary_2_t2153 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15912(__this, ___capacity, method) (( void (*) (Dictionary_2_t2153 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15912_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15914_gshared (Dictionary_2_t2153 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15914(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2153 *, SerializationInfo_t557 *, StreamingContext_t558 , const MethodInfo*))Dictionary_2__ctor_m15914_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15916_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15916(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15916_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15918_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15918(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2153 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15918_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15920_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15920(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2153 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15920_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15922_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15922(__this, ___key, method) (( bool (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15922_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15924_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15924(__this, ___key, method) (( void (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15924_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15926_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15926(__this, method) (( bool (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15926_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15928_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15928(__this, method) (( Object_t * (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15928_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15930_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15930(__this, method) (( bool (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15930_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15932_gshared (Dictionary_2_t2153 * __this, KeyValuePair_2_t2155  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15932(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2153 *, KeyValuePair_2_t2155 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15932_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15934_gshared (Dictionary_2_t2153 * __this, KeyValuePair_2_t2155  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15934(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2153 *, KeyValuePair_2_t2155 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15934_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15936_gshared (Dictionary_2_t2153 * __this, KeyValuePair_2U5BU5D_t2331* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15936(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2153 *, KeyValuePair_2U5BU5D_t2331*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15936_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15938_gshared (Dictionary_2_t2153 * __this, KeyValuePair_2_t2155  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15938(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2153 *, KeyValuePair_2_t2155 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15938_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15940_gshared (Dictionary_2_t2153 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15940(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2153 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15940_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15942_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15942(__this, method) (( Object_t * (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15942_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15944_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15944(__this, method) (( Object_t* (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15944_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15946_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15946(__this, method) (( Object_t * (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15946_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15948_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15948(__this, method) (( int32_t (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_get_Count_m15948_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m15950_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15950(__this, ___key, method) (( bool (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15950_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15952_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15952(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2153 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m15952_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15954_gshared (Dictionary_2_t2153 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15954(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2153 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15954_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15956_gshared (Dictionary_2_t2153 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15956(__this, ___size, method) (( void (*) (Dictionary_2_t2153 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15956_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15958_gshared (Dictionary_2_t2153 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15958(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2153 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15958_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2155  Dictionary_2_make_pair_m15960_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15960(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2155  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m15960_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m15962_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15962(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m15962_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15964_gshared (Dictionary_2_t2153 * __this, KeyValuePair_2U5BU5D_t2331* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15964(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2153 *, KeyValuePair_2U5BU5D_t2331*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15964_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m15966_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15966(__this, method) (( void (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_Resize_m15966_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15968_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15968(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2153 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m15968_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m15970_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15970(__this, method) (( void (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_Clear_m15970_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15972_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15972(__this, ___key, method) (( bool (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15972_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15974_gshared (Dictionary_2_t2153 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15974(__this, ___value, method) (( bool (*) (Dictionary_2_t2153 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m15974_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15976_gshared (Dictionary_2_t2153 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15976(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2153 *, SerializationInfo_t557 *, StreamingContext_t558 , const MethodInfo*))Dictionary_2_GetObjectData_m15976_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15978_gshared (Dictionary_2_t2153 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15978(__this, ___sender, method) (( void (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15978_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15980_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15980(__this, ___key, method) (( bool (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15980_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15982_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15982(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2153 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m15982_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2158 * Dictionary_2_get_Values_m15984_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15984(__this, method) (( ValueCollection_t2158 * (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_get_Values_m15984_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15986_gshared (Dictionary_2_t2153 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15986(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15986_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m15988_gshared (Dictionary_2_t2153 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15988(__this, ___value, method) (( bool (*) (Dictionary_2_t2153 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15988_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15990_gshared (Dictionary_2_t2153 * __this, KeyValuePair_2_t2155  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15990(__this, ___pair, method) (( bool (*) (Dictionary_2_t2153 *, KeyValuePair_2_t2155 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15990_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2160  Dictionary_2_GetEnumerator_m15992_gshared (Dictionary_2_t2153 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15992(__this, method) (( Enumerator_t2160  (*) (Dictionary_2_t2153 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15992_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t960  Dictionary_2_U3CCopyToU3Em__0_m15994_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15994(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t960  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15994_gshared)(__this /* static, unused */, ___key, ___value, method)
