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

// Mono.Security.Protocol.Tls.Context
struct Context_t686;
// System.Byte[]
struct ByteU5BU5D_t599;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t697;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t698;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t687;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t700;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t692;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t699;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void Context__ctor_m3588 (Context_t686 * __this, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
extern "C" bool Context_get_AbbreviatedHandshake_m3589 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
extern "C" void Context_set_AbbreviatedHandshake_m3590 (Context_t686 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
extern "C" bool Context_get_ProtocolNegotiated_m3591 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
extern "C" void Context_set_ProtocolNegotiated_m3592 (Context_t686 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
extern "C" int32_t Context_get_SecurityProtocol_m3593 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void Context_set_SecurityProtocol_m3594 (Context_t686 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
extern "C" int32_t Context_get_SecurityProtocolFlags_m3595 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
extern "C" int16_t Context_get_Protocol_m3596 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
extern "C" ByteU5BU5D_t599* Context_get_SessionId_m3597 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
extern "C" void Context_set_SessionId_m3598 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
extern "C" int32_t Context_get_CompressionMethod_m3599 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
extern "C" void Context_set_CompressionMethod_m3600 (Context_t686 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
extern "C" TlsServerSettings_t697 * Context_get_ServerSettings_m3601 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
extern "C" TlsClientSettings_t698 * Context_get_ClientSettings_m3602 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
extern "C" uint8_t Context_get_LastHandshakeMsg_m3603 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void Context_set_LastHandshakeMsg_m3604 (Context_t686 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
extern "C" int32_t Context_get_HandshakeState_m3605 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
extern "C" void Context_set_HandshakeState_m3606 (Context_t686 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
extern "C" bool Context_get_ReceivedConnectionEnd_m3607 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
extern "C" void Context_set_ReceivedConnectionEnd_m3608 (Context_t686 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
extern "C" bool Context_get_SentConnectionEnd_m3609 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
extern "C" void Context_set_SentConnectionEnd_m3610 (Context_t686 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
extern "C" CipherSuiteCollection_t687 * Context_get_SupportedCiphers_m3611 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
extern "C" void Context_set_SupportedCiphers_m3612 (Context_t686 * __this, CipherSuiteCollection_t687 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
extern "C" TlsStream_t700 * Context_get_HandshakeMessages_m3613 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
extern "C" uint64_t Context_get_WriteSequenceNumber_m3614 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
extern "C" void Context_set_WriteSequenceNumber_m3615 (Context_t686 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
extern "C" uint64_t Context_get_ReadSequenceNumber_m3616 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
extern "C" void Context_set_ReadSequenceNumber_m3617 (Context_t686 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
extern "C" ByteU5BU5D_t599* Context_get_ClientRandom_m3618 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
extern "C" void Context_set_ClientRandom_m3619 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
extern "C" ByteU5BU5D_t599* Context_get_ServerRandom_m3620 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
extern "C" void Context_set_ServerRandom_m3621 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
extern "C" ByteU5BU5D_t599* Context_get_RandomCS_m3622 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
extern "C" void Context_set_RandomCS_m3623 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
extern "C" ByteU5BU5D_t599* Context_get_RandomSC_m3624 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
extern "C" void Context_set_RandomSC_m3625 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
extern "C" ByteU5BU5D_t599* Context_get_MasterSecret_m3626 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
extern "C" void Context_set_MasterSecret_m3627 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
extern "C" ByteU5BU5D_t599* Context_get_ClientWriteKey_m3628 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
extern "C" void Context_set_ClientWriteKey_m3629 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
extern "C" ByteU5BU5D_t599* Context_get_ServerWriteKey_m3630 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
extern "C" void Context_set_ServerWriteKey_m3631 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
extern "C" ByteU5BU5D_t599* Context_get_ClientWriteIV_m3632 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
extern "C" void Context_set_ClientWriteIV_m3633 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
extern "C" ByteU5BU5D_t599* Context_get_ServerWriteIV_m3634 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
extern "C" void Context_set_ServerWriteIV_m3635 (Context_t686 * __this, ByteU5BU5D_t599* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
extern "C" RecordProtocol_t692 * Context_get_RecordProtocol_m3636 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
extern "C" void Context_set_RecordProtocol_m3637 (Context_t686 * __this, RecordProtocol_t692 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
extern "C" int32_t Context_GetUnixTime_m3638 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
extern "C" ByteU5BU5D_t599* Context_GetSecureRandomBytes_m3639 (Context_t686 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
extern "C" void Context_Clear_m3640 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
extern "C" void Context_ClearKeyInfo_m3641 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
extern "C" int32_t Context_DecodeProtocolCode_m3642 (Context_t686 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
extern "C" void Context_ChangeProtocol_m3643 (Context_t686 * __this, int16_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
extern "C" SecurityParameters_t699 * Context_get_Current_m3644 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
extern "C" SecurityParameters_t699 * Context_get_Negotiating_m3645 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
extern "C" SecurityParameters_t699 * Context_get_Read_m3646 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
extern "C" SecurityParameters_t699 * Context_get_Write_m3647 (Context_t686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
extern "C" void Context_StartSwitchingSecurityParameters_m3648 (Context_t686 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
extern "C" void Context_EndSwitchingSecurityParameters_m3649 (Context_t686 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
