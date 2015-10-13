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

// System.Text.StringBuilder
struct StringBuilder_t283;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t160;
// System.Object[]
struct ObjectU5BU5D_t285;
// System.IFormatProvider
struct IFormatProvider_t1642;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m9146 (StringBuilder_t283 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void StringBuilder__ctor_m9147 (StringBuilder_t283 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C" void StringBuilder__ctor_m1420 (StringBuilder_t283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" void StringBuilder__ctor_m2991 (StringBuilder_t283 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" void StringBuilder__ctor_m1487 (StringBuilder_t283 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C" void StringBuilder__ctor_m5018 (StringBuilder_t283 * __this, String_t* ___value, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder__ctor_m9148 (StringBuilder_t283 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m9149 (StringBuilder_t283 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
extern "C" int32_t StringBuilder_get_Capacity_m9150 (StringBuilder_t283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
extern "C" void StringBuilder_set_Capacity_m9151 (StringBuilder_t283 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" int32_t StringBuilder_get_Length_m4057 (StringBuilder_t283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C" void StringBuilder_set_Length_m5089 (StringBuilder_t283 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
extern "C" uint16_t StringBuilder_get_Chars_m9152 (StringBuilder_t283 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
extern "C" void StringBuilder_set_Chars_m9153 (StringBuilder_t283 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C" String_t* StringBuilder_ToString_m1424 (StringBuilder_t283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C" String_t* StringBuilder_ToString_m9154 (StringBuilder_t283 * __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C" StringBuilder_t283 * StringBuilder_Remove_m9155 (StringBuilder_t283 * __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
extern "C" StringBuilder_t283 * StringBuilder_Replace_m9156 (StringBuilder_t283 * __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t283 * StringBuilder_Replace_m9157 (StringBuilder_t283 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" StringBuilder_t283 * StringBuilder_Append_m2994 (StringBuilder_t283 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C" StringBuilder_t283 * StringBuilder_Append_m5047 (StringBuilder_t283 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
extern "C" StringBuilder_t283 * StringBuilder_Append_m5031 (StringBuilder_t283 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" StringBuilder_t283 * StringBuilder_Append_m5019 (StringBuilder_t283 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" StringBuilder_t283 * StringBuilder_Append_m4025 (StringBuilder_t283 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
extern "C" StringBuilder_t283 * StringBuilder_Append_m9158 (StringBuilder_t283 * __this, uint16_t ___value, int32_t ___repeatCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
extern "C" StringBuilder_t283 * StringBuilder_Append_m9159 (StringBuilder_t283 * __this, CharU5BU5D_t160* ___value, int32_t ___startIndex, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C" StringBuilder_t283 * StringBuilder_Append_m5064 (StringBuilder_t283 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
extern "C" StringBuilder_t283 * StringBuilder_AppendLine_m1423 (StringBuilder_t283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C" StringBuilder_t283 * StringBuilder_AppendLine_m1422 (StringBuilder_t283 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C" StringBuilder_t283 * StringBuilder_AppendFormat_m3993 (StringBuilder_t283 * __this, String_t* ___format, ObjectU5BU5D_t285* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C" StringBuilder_t283 * StringBuilder_AppendFormat_m9160 (StringBuilder_t283 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t285* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C" StringBuilder_t283 * StringBuilder_AppendFormat_m3992 (StringBuilder_t283 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C" StringBuilder_t283 * StringBuilder_AppendFormat_m3991 (StringBuilder_t283 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C" StringBuilder_t283 * StringBuilder_AppendFormat_m5056 (StringBuilder_t283 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
extern "C" StringBuilder_t283 * StringBuilder_Insert_m9161 (StringBuilder_t283 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C" StringBuilder_t283 * StringBuilder_Insert_m9162 (StringBuilder_t283 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
extern "C" StringBuilder_t283 * StringBuilder_Insert_m9163 (StringBuilder_t283 * __this, int32_t ___index, String_t* ___value, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
extern "C" void StringBuilder_InternalEnsureCapacity_m9164 (StringBuilder_t283 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
