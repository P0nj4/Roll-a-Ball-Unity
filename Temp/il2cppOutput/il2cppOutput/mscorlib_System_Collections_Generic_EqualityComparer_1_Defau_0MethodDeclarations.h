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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1768;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m10945_gshared (DefaultComparer_t1768 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10945(__this, method) (( void (*) (DefaultComparer_t1768 *, const MethodInfo*))DefaultComparer__ctor_m10945_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10946_gshared (DefaultComparer_t1768 * __this, RaycastResult_t51  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10946(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1768 *, RaycastResult_t51 , const MethodInfo*))DefaultComparer_GetHashCode_m10946_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10947_gshared (DefaultComparer_t1768 * __this, RaycastResult_t51  ___x, RaycastResult_t51  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10947(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1768 *, RaycastResult_t51 , RaycastResult_t51 , const MethodInfo*))DefaultComparer_Equals_m10947_gshared)(__this, ___x, ___y, method)
