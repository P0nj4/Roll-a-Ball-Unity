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

// System.Net.HttpWebRequest
struct HttpWebRequest_t705;
// System.Uri
struct Uri_t791;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;
// System.Net.ServicePoint
struct ServicePoint_t792;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m4226 (HttpWebRequest_t705 * __this, Uri_t791 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m4227 (HttpWebRequest_t705 * __this, SerializationInfo_t557 * ___serializationInfo, StreamingContext_t558  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m4228 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m4229 (HttpWebRequest_t705 * __this, SerializationInfo_t557 * ___serializationInfo, StreamingContext_t558  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t791 * HttpWebRequest_get_Address_m4076 (HttpWebRequest_t705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t792 * HttpWebRequest_get_ServicePoint_m4080 (HttpWebRequest_t705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t792 * HttpWebRequest_GetServicePoint_m4230 (HttpWebRequest_t705 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m4231 (HttpWebRequest_t705 * __this, SerializationInfo_t557 * ___serializationInfo, StreamingContext_t558  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
