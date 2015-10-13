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

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t1456;
// System.Security.Cryptography.Rijndael
struct Rijndael_t788;
// System.Byte[]
struct ByteU5BU5D_t599;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelManagedTransform__ctor_m8804 (RijndaelManagedTransform_t1456 * __this, Rijndael_t788 * ___algo, bool ___encryption, ByteU5BU5D_t599* ___key, ByteU5BU5D_t599* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
extern "C" void RijndaelManagedTransform_System_IDisposable_Dispose_m8805 (RijndaelManagedTransform_t1456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
extern "C" bool RijndaelManagedTransform_get_CanReuseTransform_m8806 (RijndaelManagedTransform_t1456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t RijndaelManagedTransform_TransformBlock_m8807 (RijndaelManagedTransform_t1456 * __this, ByteU5BU5D_t599* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t599* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t599* RijndaelManagedTransform_TransformFinalBlock_m8808 (RijndaelManagedTransform_t1456 * __this, ByteU5BU5D_t599* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
