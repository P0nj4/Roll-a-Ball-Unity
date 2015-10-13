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

// System.ArgumentException
struct ArgumentException_t344;
// System.String
struct String_t;
// System.Exception
struct Exception_t291;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
extern "C" void ArgumentException__ctor_m9391 (ArgumentException_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" void ArgumentException__ctor_m1968 (ArgumentException_t344 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C" void ArgumentException__ctor_m5059 (ArgumentException_t344 * __this, String_t* ___message, Exception_t291 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" void ArgumentException__ctor_m3085 (ArgumentException_t344 * __this, String_t* ___message, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C" void ArgumentException__ctor_m9392 (ArgumentException_t344 * __this, String_t* ___message, String_t* ___paramName, Exception_t291 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException__ctor_m9393 (ArgumentException_t344 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
extern "C" String_t* ArgumentException_get_ParamName_m9394 (ArgumentException_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
extern "C" String_t* ArgumentException_get_Message_m9395 (ArgumentException_t344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException_GetObjectData_m9396 (ArgumentException_t344 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
