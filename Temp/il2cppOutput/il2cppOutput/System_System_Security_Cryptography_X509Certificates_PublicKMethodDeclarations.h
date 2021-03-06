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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t851;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t656;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t852;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t748;
// System.Security.Cryptography.Oid
struct Oid_t853;
// System.Byte[]
struct ByteU5BU5D_t599;
// System.Security.Cryptography.DSA
struct DSA_t657;
// System.Security.Cryptography.RSA
struct RSA_t650;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4326 (PublicKey_t851 * __this, X509Certificate_t656 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t852 * PublicKey_get_EncodedKeyValue_m4327 (PublicKey_t851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t852 * PublicKey_get_EncodedParameters_m4328 (PublicKey_t851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t748 * PublicKey_get_Key_m4329 (PublicKey_t851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t853 * PublicKey_get_Oid_m4330 (PublicKey_t851 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t599* PublicKey_GetUnsignedBigInteger_m4331 (Object_t * __this /* static, unused */, ByteU5BU5D_t599* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t657 * PublicKey_DecodeDSA_m4332 (Object_t * __this /* static, unused */, ByteU5BU5D_t599* ___rawPublicKey, ByteU5BU5D_t599* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t650 * PublicKey_DecodeRSA_m4333 (Object_t * __this /* static, unused */, ByteU5BU5D_t599* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
