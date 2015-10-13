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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t708;
// System.AsyncCallback
struct AsyncCallback_t150;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t599;
// System.IO.Stream
struct Stream_t710;
// System.Exception
struct Exception_t291;
// System.Threading.WaitHandle
struct WaitHandle_t762;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3655 (ReceiveRecordAsyncResult_t708 * __this, AsyncCallback_t150 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t599* ___initialBuffer, Stream_t710 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t710 * ReceiveRecordAsyncResult_get_Record_m3656 (ReceiveRecordAsyncResult_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t599* ReceiveRecordAsyncResult_get_ResultingBuffer_m3657 (ReceiveRecordAsyncResult_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t599* ReceiveRecordAsyncResult_get_InitialBuffer_m3658 (ReceiveRecordAsyncResult_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3659 (ReceiveRecordAsyncResult_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t291 * ReceiveRecordAsyncResult_get_AsyncException_m3660 (ReceiveRecordAsyncResult_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3661 (ReceiveRecordAsyncResult_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t762 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3662 (ReceiveRecordAsyncResult_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3663 (ReceiveRecordAsyncResult_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3664 (ReceiveRecordAsyncResult_t708 * __this, Exception_t291 * ___ex, ByteU5BU5D_t599* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3665 (ReceiveRecordAsyncResult_t708 * __this, Exception_t291 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3666 (ReceiveRecordAsyncResult_t708 * __this, ByteU5BU5D_t599* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
