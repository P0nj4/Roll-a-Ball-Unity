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

// System.Text.Encoding
struct Encoding_t766;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t1498;
// System.Text.EncoderFallback
struct EncoderFallback_t1506;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t160;
// System.Byte[]
struct ByteU5BU5D_t599;
// System.Text.Decoder
struct Decoder_t1135;
// System.Object[]
struct ObjectU5BU5D_t285;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Encoding::.ctor()
extern "C" void Encoding__ctor_m9097 (Encoding_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
extern "C" void Encoding__ctor_m9098 (Encoding_t766 * __this, int32_t ___codePage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
extern "C" void Encoding__cctor_m9099 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
extern "C" String_t* Encoding___m9100 (Object_t * __this /* static, unused */, String_t* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
extern "C" bool Encoding_get_IsReadOnly_m9101 (Encoding_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
extern "C" DecoderFallback_t1498 * Encoding_get_DecoderFallback_m9102 (Encoding_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
extern "C" void Encoding_set_DecoderFallback_m9103 (Encoding_t766 * __this, DecoderFallback_t1498 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
extern "C" EncoderFallback_t1506 * Encoding_get_EncoderFallback_m9104 (Encoding_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
extern "C" void Encoding_SetFallbackInternal_m9105 (Encoding_t766 * __this, EncoderFallback_t1506 * ___e, DecoderFallback_t1498 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
extern "C" bool Encoding_Equals_m9106 (Encoding_t766 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
extern "C" int32_t Encoding_GetByteCount_m9107 (Encoding_t766 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
extern "C" int32_t Encoding_GetByteCount_m9108 (Encoding_t766 * __this, CharU5BU5D_t160* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Encoding_GetBytes_m9109 (Encoding_t766 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t599* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
extern "C" ByteU5BU5D_t599* Encoding_GetBytes_m9110 (Encoding_t766 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t599* Encoding_GetBytes_m9111 (Encoding_t766 * __this, CharU5BU5D_t160* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
extern "C" ByteU5BU5D_t599* Encoding_GetBytes_m9112 (Encoding_t766 * __this, CharU5BU5D_t160* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
extern "C" CharU5BU5D_t160* Encoding_GetChars_m9113 (Encoding_t766 * __this, ByteU5BU5D_t599* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
extern "C" Decoder_t1135 * Encoding_GetDecoder_m9114 (Encoding_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
extern "C" Object_t * Encoding_InvokeI18N_m9115 (Object_t * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t285* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
extern "C" Encoding_t766 * Encoding_GetEncoding_m9116 (Object_t * __this /* static, unused */, int32_t ___codepage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::Clone()
extern "C" Object_t * Encoding_Clone_m9117 (Encoding_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C" Encoding_t766 * Encoding_GetEncoding_m9118 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
extern "C" int32_t Encoding_GetHashCode_m9119 (Encoding_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetPreamble()
extern "C" ByteU5BU5D_t599* Encoding_GetPreamble_m9120 (Encoding_t766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Encoding_GetString_m9121 (Encoding_t766 * __this, ByteU5BU5D_t599* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
extern "C" String_t* Encoding_GetString_m9122 (Encoding_t766 * __this, ByteU5BU5D_t599* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C" Encoding_t766 * Encoding_get_ASCII_m4000 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
extern "C" Encoding_t766 * Encoding_get_BigEndianUnicode_m4019 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
extern "C" String_t* Encoding_InternalCodePage_m9123 (Object_t * __this /* static, unused */, int32_t* ___code_page, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
extern "C" Encoding_t766 * Encoding_get_Default_m9124 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
extern "C" Encoding_t766 * Encoding_get_ISOLatin1_m9125 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
extern "C" Encoding_t766 * Encoding_get_UTF7_m4026 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" Encoding_t766 * Encoding_get_UTF8_m4027 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
extern "C" Encoding_t766 * Encoding_get_UTF8Unmarked_m9126 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
extern "C" Encoding_t766 * Encoding_get_UTF8UnmarkedUnsafe_m9127 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
extern "C" Encoding_t766 * Encoding_get_Unicode_m9128 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
extern "C" Encoding_t766 * Encoding_get_UTF32_m9129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
extern "C" Encoding_t766 * Encoding_get_BigEndianUTF32_m9130 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t Encoding_GetByteCount_m9131 (Encoding_t766 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t Encoding_GetBytes_m9132 (Encoding_t766 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
