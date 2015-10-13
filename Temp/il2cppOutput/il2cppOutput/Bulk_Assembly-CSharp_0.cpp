#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CameraController
struct CameraController_t1;
// PlayerController
struct PlayerController_t5;
// UnityEngine.Rigidbody
struct Rigidbody_t7;
// System.Object
struct Object_t;
// UnityEngine.Collider
struct Collider_t9;
// rotator
struct rotator_t8;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraController.h"
#include "AssemblyU2DCSharp_CameraControllerMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_GameObject.h"
#include "AssemblyU2DCSharp_PlayerController.h"
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody.h"
#include "UnityEngine_UnityEngine_Component.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_String.h"
#include "UnityEngine_UnityEngine_Collider.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
#include "AssemblyU2DCSharp_rotator.h"
#include "AssemblyU2DCSharp_rotatorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m30_gshared (Component_t12 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m30(__this, method) (( Object_t * (*) (Component_t12 *, const MethodInfo*))Component_GetComponent_TisObject_t_m30_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t7_m18(__this, method) (( Rigidbody_t7 * (*) (Component_t12 *, const MethodInfo*))Component_GetComponent_TisObject_t_m30_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C" void CameraController__ctor_m0 (CameraController_t1 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m11(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C" void CameraController_Start_m1 (CameraController_t1 * __this, const MethodInfo* method)
{
	{
		Transform_t10 * L_0 = Component_get_transform_m12(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4  L_1 = Transform_get_position_m13(L_0, /*hidden argument*/NULL);
		GameObject_t3 * L_2 = (__this->___player_2);
		NullCheck(L_2);
		Transform_t10 * L_3 = GameObject_get_transform_m14(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t4  L_4 = Transform_get_position_m13(L_3, /*hidden argument*/NULL);
		Vector3_t4  L_5 = Vector3_op_Subtraction_m15(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->___offset_3 = L_5;
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C" void CameraController_LateUpdate_m2 (CameraController_t1 * __this, const MethodInfo* method)
{
	{
		Transform_t10 * L_0 = Component_get_transform_m12(__this, /*hidden argument*/NULL);
		GameObject_t3 * L_1 = (__this->___player_2);
		NullCheck(L_1);
		Transform_t10 * L_2 = GameObject_get_transform_m14(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t4  L_3 = Transform_get_position_m13(L_2, /*hidden argument*/NULL);
		Vector3_t4  L_4 = (__this->___offset_3);
		Vector3_t4  L_5 = Vector3_op_Addition_m16(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m17(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m3 (PlayerController_t5 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m11(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody_t7_m18_MethodInfo_var;
extern "C" void PlayerController_Start_m4 (PlayerController_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRigidbody_t7_m18_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody_t7 * L_0 = Component_GetComponent_TisRigidbody_t7_m18(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t7_m18_MethodInfo_var);
		__this->___rb_5 = L_0;
		__this->___count_6 = 0;
		PlayerController_updateCount_m7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern TypeInfo* Input_t11_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern Il2CppCodeGenString* _stringLiteral1;
extern "C" void PlayerController_FixedUpdate_m5 (PlayerController_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t4  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t11_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m19(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m19(NULL /*static, unused*/, _stringLiteral1, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_1;
		float L_3 = V_0;
		Vector3__ctor_m20((&V_2), ((float)((float)L_2*(float)(1.0f))), (0.0f), ((float)((float)L_3*(float)(1.0f))), /*hidden argument*/NULL);
		Rigidbody_t7 * L_4 = (__this->___rb_5);
		Vector3_t4  L_5 = V_2;
		float L_6 = (__this->___speed_2);
		Vector3_t4  L_7 = Vector3_op_Multiply_m21(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody_AddForce_m22(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppCodeGenString* _stringLiteral2;
extern "C" void PlayerController_OnTriggerEnter_m6 (PlayerController_t5 * __this, Collider_t9 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t9 * L_0 = ___other;
		NullCheck(L_0);
		GameObject_t3 * L_1 = Component_get_gameObject_m23(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m24(L_1, _stringLiteral2, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Collider_t9 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t3 * L_4 = Component_get_gameObject_m23(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m25(L_4, 0, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___count_6);
		__this->___count_6 = ((int32_t)((int32_t)L_5+(int32_t)1));
		PlayerController_updateCount_m7(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PlayerController::updateCount()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3;
extern "C" void PlayerController_updateCount_m7 (PlayerController_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Text_t6 * L_0 = (__this->___countText_3);
		int32_t L_1 = (__this->___count_6);
		V_0 = ((int32_t)((int32_t)L_1*(int32_t)((int32_t)10)));
		String_t* L_2 = Int32_ToString_m26((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m27(NULL /*static, unused*/, _stringLiteral3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(60 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		int32_t L_4 = (__this->___count_6);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0044;
		}
	}
	{
		Text_t6 * L_5 = (__this->___finishText_4);
		NullCheck(L_5);
		GameObject_t3 * L_6 = Component_get_gameObject_m23(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m25(L_6, 1, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void rotator::.ctor()
extern "C" void rotator__ctor_m8 (rotator_t8 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m11(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void rotator::Start()
extern "C" void rotator_Start_m9 (rotator_t8 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void rotator::Update()
extern "C" void rotator_Update_m10 (rotator_t8 * __this, const MethodInfo* method)
{
	{
		Transform_t10 * L_0 = Component_get_transform_m12(__this, /*hidden argument*/NULL);
		Vector3_t4  L_1 = {0};
		Vector3__ctor_m20(&L_1, (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m28(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4  L_3 = Vector3_op_Multiply_m21(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m29(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
