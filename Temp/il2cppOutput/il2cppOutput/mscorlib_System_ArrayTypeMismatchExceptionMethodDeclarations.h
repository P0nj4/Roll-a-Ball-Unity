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

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t1548;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArrayTypeMismatchException::.ctor()
extern "C" void ArrayTypeMismatchException__ctor_m9405 (ArrayTypeMismatchException_t1548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArrayTypeMismatchException::.ctor(System.String)
extern "C" void ArrayTypeMismatchException__ctor_m9406 (ArrayTypeMismatchException_t1548 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArrayTypeMismatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArrayTypeMismatchException__ctor_m9407 (ArrayTypeMismatchException_t1548 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
