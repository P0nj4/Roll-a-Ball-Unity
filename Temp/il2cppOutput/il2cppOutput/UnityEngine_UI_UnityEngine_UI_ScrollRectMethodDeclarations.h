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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t186;
// UnityEngine.RectTransform
struct RectTransform_t99;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t180;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t184;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t57;
// UnityEngine.Transform
struct Transform_t10;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_ScrollbarVisibility.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
extern "C" void ScrollRect__ctor_m889 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C" RectTransform_t99 * ScrollRect_get_content_m890 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
extern "C" void ScrollRect_set_content_m891 (ScrollRect_t186 * __this, RectTransform_t99 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C" bool ScrollRect_get_horizontal_m892 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
extern "C" void ScrollRect_set_horizontal_m893 (ScrollRect_t186 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C" bool ScrollRect_get_vertical_m894 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
extern "C" void ScrollRect_set_vertical_m895 (ScrollRect_t186 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
extern "C" int32_t ScrollRect_get_movementType_m896 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C" void ScrollRect_set_movementType_m897 (ScrollRect_t186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
extern "C" float ScrollRect_get_elasticity_m898 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
extern "C" void ScrollRect_set_elasticity_m899 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
extern "C" bool ScrollRect_get_inertia_m900 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
extern "C" void ScrollRect_set_inertia_m901 (ScrollRect_t186 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
extern "C" float ScrollRect_get_decelerationRate_m902 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
extern "C" void ScrollRect_set_decelerationRate_m903 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
extern "C" float ScrollRect_get_scrollSensitivity_m904 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
extern "C" void ScrollRect_set_scrollSensitivity_m905 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
extern "C" RectTransform_t99 * ScrollRect_get_viewport_m906 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_viewport(UnityEngine.RectTransform)
extern "C" void ScrollRect_set_viewport_m907 (ScrollRect_t186 * __this, RectTransform_t99 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
extern "C" Scrollbar_t180 * ScrollRect_get_horizontalScrollbar_m908 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_horizontalScrollbar_m909 (ScrollRect_t186 * __this, Scrollbar_t180 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
extern "C" Scrollbar_t180 * ScrollRect_get_verticalScrollbar_m910 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_verticalScrollbar_m911 (ScrollRect_t186 * __this, Scrollbar_t180 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_horizontalScrollbarVisibility()
extern "C" int32_t ScrollRect_get_horizontalScrollbarVisibility_m912 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C" void ScrollRect_set_horizontalScrollbarVisibility_m913 (ScrollRect_t186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_verticalScrollbarVisibility()
extern "C" int32_t ScrollRect_get_verticalScrollbarVisibility_m914 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C" void ScrollRect_set_verticalScrollbarVisibility_m915 (ScrollRect_t186 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalScrollbarSpacing()
extern "C" float ScrollRect_get_horizontalScrollbarSpacing_m916 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarSpacing(System.Single)
extern "C" void ScrollRect_set_horizontalScrollbarSpacing_m917 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalScrollbarSpacing()
extern "C" float ScrollRect_get_verticalScrollbarSpacing_m918 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarSpacing(System.Single)
extern "C" void ScrollRect_set_verticalScrollbarSpacing_m919 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C" ScrollRectEvent_t184 * ScrollRect_get_onValueChanged_m920 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
extern "C" void ScrollRect_set_onValueChanged_m921 (ScrollRect_t186 * __this, ScrollRectEvent_t184 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
extern "C" RectTransform_t99 * ScrollRect_get_viewRect_m922 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C" Vector2_t53  ScrollRect_get_velocity_m923 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C" void ScrollRect_set_velocity_m924 (ScrollRect_t186 * __this, Vector2_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_rectTransform()
extern "C" RectTransform_t99 * ScrollRect_get_rectTransform_m925 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void ScrollRect_Rebuild_m926 (ScrollRect_t186 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateCachedData()
extern "C" void ScrollRect_UpdateCachedData_m927 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
extern "C" void ScrollRect_OnEnable_m928 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
extern "C" void ScrollRect_OnDisable_m929 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
extern "C" bool ScrollRect_IsActive_m930 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
extern "C" void ScrollRect_EnsureLayoutHasRebuilt_m931 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
extern "C" void ScrollRect_StopMovement_m932 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnScroll_m933 (ScrollRect_t186 * __this, PointerEventData_t57 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnInitializePotentialDrag_m934 (ScrollRect_t186 * __this, PointerEventData_t57 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnBeginDrag_m935 (ScrollRect_t186 * __this, PointerEventData_t57 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnEndDrag_m936 (ScrollRect_t186 * __this, PointerEventData_t57 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnDrag_m937 (ScrollRect_t186 * __this, PointerEventData_t57 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_SetContentAnchoredPosition_m938 (ScrollRect_t186 * __this, Vector2_t53  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
extern "C" void ScrollRect_LateUpdate_m939 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
extern "C" void ScrollRect_UpdatePrevData_m940 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
extern "C" void ScrollRect_UpdateScrollbars_m941 (ScrollRect_t186 * __this, Vector2_t53  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
extern "C" Vector2_t53  ScrollRect_get_normalizedPosition_m942 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_set_normalizedPosition_m943 (ScrollRect_t186 * __this, Vector2_t53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C" float ScrollRect_get_horizontalNormalizedPosition_m944 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_horizontalNormalizedPosition_m945 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C" float ScrollRect_get_verticalNormalizedPosition_m946 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_verticalNormalizedPosition_m947 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetHorizontalNormalizedPosition_m948 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetVerticalNormalizedPosition_m949 (ScrollRect_t186 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
extern "C" void ScrollRect_SetNormalizedPosition_m950 (ScrollRect_t186 * __this, float ___value, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
extern "C" float ScrollRect_RubberDelta_m951 (Object_t * __this /* static, unused */, float ___overStretching, float ___viewSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnRectTransformDimensionsChange()
extern "C" void ScrollRect_OnRectTransformDimensionsChange_m952 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_hScrollingNeeded()
extern "C" bool ScrollRect_get_hScrollingNeeded_m953 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vScrollingNeeded()
extern "C" bool ScrollRect_get_vScrollingNeeded_m954 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputHorizontal()
extern "C" void ScrollRect_CalculateLayoutInputHorizontal_m955 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputVertical()
extern "C" void ScrollRect_CalculateLayoutInputVertical_m956 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minWidth()
extern "C" float ScrollRect_get_minWidth_m957 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredWidth()
extern "C" float ScrollRect_get_preferredWidth_m958 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleWidth()
extern "C" float ScrollRect_get_flexibleWidth_m959 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minHeight()
extern "C" float ScrollRect_get_minHeight_m960 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredHeight()
extern "C" float ScrollRect_get_preferredHeight_m961 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleHeight()
extern "C" float ScrollRect_get_flexibleHeight_m962 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.ScrollRect::get_layoutPriority()
extern "C" int32_t ScrollRect_get_layoutPriority_m963 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutHorizontal()
extern "C" void ScrollRect_SetLayoutHorizontal_m964 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutVertical()
extern "C" void ScrollRect_SetLayoutVertical_m965 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarVisibility()
extern "C" void ScrollRect_UpdateScrollbarVisibility_m966 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarLayout()
extern "C" void ScrollRect_UpdateScrollbarLayout_m967 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
extern "C" void ScrollRect_UpdateBounds_m968 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
extern "C" Bounds_t187  ScrollRect_GetBounds_m969 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
extern "C" Vector2_t53  ScrollRect_CalculateOffset_m970 (ScrollRect_t186 * __this, Vector2_t53  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirty()
extern "C" void ScrollRect_SetDirty_m971 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirtyCaching()
extern "C" void ScrollRect_SetDirtyCaching_m972 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m973 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t10 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m974 (ScrollRect_t186 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
