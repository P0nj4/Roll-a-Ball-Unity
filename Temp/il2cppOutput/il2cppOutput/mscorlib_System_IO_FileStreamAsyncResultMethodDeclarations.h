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

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t1149;
// System.AsyncCallback
struct AsyncCallback_t150;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t149;
// System.Threading.WaitHandle
struct WaitHandle_t762;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m7104 (FileStreamAsyncResult_t1149 * __this, AsyncCallback_t150 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m7105 (Object_t * __this /* static, unused */, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m7106 (FileStreamAsyncResult_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t762 * FileStreamAsyncResult_get_AsyncWaitHandle_m7107 (FileStreamAsyncResult_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m7108 (FileStreamAsyncResult_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
