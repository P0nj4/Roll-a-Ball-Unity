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

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t1459;
// System.Byte[]
struct ByteU5BU5D_t599;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1Managed::.ctor()
extern "C" void SHA1Managed__ctor_m8826 (SHA1Managed_t1459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1Managed_HashCore_m8827 (SHA1Managed_t1459 * __this, ByteU5BU5D_t599* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Managed::HashFinal()
extern "C" ByteU5BU5D_t599* SHA1Managed_HashFinal_m8828 (SHA1Managed_t1459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Managed::Initialize()
extern "C" void SHA1Managed_Initialize_m8829 (SHA1Managed_t1459 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
