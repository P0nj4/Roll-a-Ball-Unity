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

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t568;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t557;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IndexOutOfRangeException::.ctor()
extern "C" void IndexOutOfRangeException__ctor_m9818 (IndexOutOfRangeException_t568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" void IndexOutOfRangeException__ctor_m2965 (IndexOutOfRangeException_t568 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IndexOutOfRangeException__ctor_m9819 (IndexOutOfRangeException_t568 * __this, SerializationInfo_t557 * ___info, StreamingContext_t558  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
