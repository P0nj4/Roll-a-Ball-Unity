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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1712;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1717;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t269;
// System.Object[]
struct ObjectU5BU5D_t285;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1972;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m10368_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t* ___list, const MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m10368(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t1712 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m10368_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10369_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10369(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t1712 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m10369_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m10370_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m10370(__this, method) (( void (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m10370_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m10371_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m10371(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m10371_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m10372_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m10372(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t1712 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m10372_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m10373_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m10373(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1712 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m10373_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10374_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10374(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1712 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m10374_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m10375_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m10375(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m10375_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10376_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10376(__this, method) (( bool (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10376_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m10377_gshared (ReadOnlyCollection_1_t1712 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m10377(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1712 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m10377_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m10378_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m10378(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m10378_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m10379_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m10379(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1712 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m10379_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m10380_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m10380(__this, method) (( void (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m10380_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m10381_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m10381(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1712 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m10381_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m10382_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m10382(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1712 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m10382_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m10383_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m10383(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m10383_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m10384_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m10384(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t1712 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m10384_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m10385_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m10385(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1712 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m10385_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m10386_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m10386(__this, method) (( bool (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m10386_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m10387_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m10387(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m10387_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m10388_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m10388(__this, method) (( bool (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m10388_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m10389_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m10389(__this, method) (( bool (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m10389_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m10390_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m10390(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1712 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m10390_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m10391_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m10391(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m10391_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m10392_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m10392(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1712 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_Contains_m10392_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m10393_gshared (ReadOnlyCollection_1_t1712 * __this, ObjectU5BU5D_t285* ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m10393(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1712 *, ObjectU5BU5D_t285*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m10393_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m10394_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m10394(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m10394_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m10395_gshared (ReadOnlyCollection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m10395(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1712 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m10395_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m10396_gshared (ReadOnlyCollection_1_t1712 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m10396(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t1712 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m10396_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m10397_gshared (ReadOnlyCollection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m10397(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1712 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m10397_gshared)(__this, ___index, method)
