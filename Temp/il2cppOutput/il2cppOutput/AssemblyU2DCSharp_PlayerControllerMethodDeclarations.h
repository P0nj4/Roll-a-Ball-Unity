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

// PlayerController
struct PlayerController_t5;
// UnityEngine.Collider
struct Collider_t9;

#include "codegen/il2cpp-codegen.h"

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3 (PlayerController_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m4 (PlayerController_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::FixedUpdate()
extern "C" void PlayerController_FixedUpdate_m5 (PlayerController_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern "C" void PlayerController_OnTriggerEnter_m6 (PlayerController_t5 * __this, Collider_t9 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::updateCount()
extern "C" void PlayerController_updateCount_m7 (PlayerController_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
