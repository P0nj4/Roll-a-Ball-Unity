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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t936;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t938;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t931;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t962;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t937;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m4868 (CaptureAssertion_t936 * __this, Literal_t938 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m4869 (CaptureAssertion_t936 * __this, CapturingGroup_t931 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m4870 (CaptureAssertion_t936 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m4871 (CaptureAssertion_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t937 * CaptureAssertion_get_Alternate_m4872 (CaptureAssertion_t936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
