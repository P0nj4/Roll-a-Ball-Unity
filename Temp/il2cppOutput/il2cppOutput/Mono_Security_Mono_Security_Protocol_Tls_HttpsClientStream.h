﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpWebRequest
struct HttpWebRequest_t705;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t706;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t707;

#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t704  : public SslClientStream_t690
{
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t705 * ____request_20;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_21;
};
struct HttpsClientStream_t704_StaticFields{
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t706 * ___U3CU3Ef__amU24cache2_22;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t707 * ___U3CU3Ef__amU24cache3_23;
};
