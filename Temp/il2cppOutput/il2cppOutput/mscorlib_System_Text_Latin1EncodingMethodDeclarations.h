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

// System.Text.Latin1Encoding
struct Latin1Encoding_t1513;
// System.Char[]
struct CharU5BU5D_t160;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t599;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1508;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C" void Latin1Encoding__ctor_m9133 (Latin1Encoding_t1513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetByteCount_m9134 (Latin1Encoding_t1513 * __this, CharU5BU5D_t160* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C" int32_t Latin1Encoding_GetByteCount_m9135 (Latin1Encoding_t1513 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m9136 (Latin1Encoding_t1513 * __this, CharU5BU5D_t160* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t599* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m9137 (Latin1Encoding_t1513 * __this, CharU5BU5D_t160* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t599* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1508 ** ___buffer, CharU5BU5D_t160** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m9138 (Latin1Encoding_t1513 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t599* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m9139 (Latin1Encoding_t1513 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t599* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1508 ** ___buffer, CharU5BU5D_t160** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetCharCount_m9140 (Latin1Encoding_t1513 * __this, ByteU5BU5D_t599* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t Latin1Encoding_GetChars_m9141 (Latin1Encoding_t1513 * __this, ByteU5BU5D_t599* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t160* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxByteCount_m9142 (Latin1Encoding_t1513 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxCharCount_m9143 (Latin1Encoding_t1513 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Latin1Encoding_GetString_m9144 (Latin1Encoding_t1513 * __this, ByteU5BU5D_t599* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C" String_t* Latin1Encoding_GetString_m9145 (Latin1Encoding_t1513 * __this, ByteU5BU5D_t599* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
