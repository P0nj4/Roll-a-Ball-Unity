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

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t874;
// System.Collections.ArrayList
struct ArrayList_t630;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t859;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void X509ExtensionEnumerator__ctor_m4477 (X509ExtensionEnumerator_t874 * __this, ArrayList_t630 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m4478 (X509ExtensionEnumerator_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
extern "C" X509Extension_t859 * X509ExtensionEnumerator_get_Current_m4479 (X509ExtensionEnumerator_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
extern "C" bool X509ExtensionEnumerator_MoveNext_m4480 (X509ExtensionEnumerator_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::Reset()
extern "C" void X509ExtensionEnumerator_Reset_m4481 (X509ExtensionEnumerator_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
