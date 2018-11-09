// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_OptionsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsWidget.OptionsWidget_C.AnyValueChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ChangeToCustom                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsWidget_C::AnyValueChanged(bool ChangeToCustom)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.AnyValueChanged");

	struct
	{
		bool                           ChangeToCustom;
	} params;

	params.ChangeToCustom = ChangeToCustom;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.IsApplyButtonEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOptionsWidget_C::IsApplyButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.IsApplyButtonEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsWidget_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseButtonDoubleClick");

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsWidget_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnMouseWheel");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsWidget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnPreviewKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UOptionsWidget_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnPreviewMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OptionsWidget.OptionsWidget_C.SetDynamicShadowsQuality
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsWidget_C::SetDynamicShadowsQuality(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.SetDynamicShadowsQuality");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.UpdateSupportedResolutions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           fullscreen                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsWidget_C::UpdateSupportedResolutions(bool fullscreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.UpdateSupportedResolutions");

	struct
	{
		bool                           fullscreen;
	} params;

	params.fullscreen = fullscreen;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.ToggleCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UUI_MenuButton_C*        Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UOptionsWidget_C::ToggleCategory(class UWidget* Widget, class UUI_MenuButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.ToggleCategory");

	struct
	{
		class UWidget*                 Widget;
		class UUI_MenuButton_C*        Button;
	} params;

	params.Widget = Widget;
	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.SnapSlider
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USlider*                 Slider                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            Steps                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsWidget_C::SnapSlider(class USlider* Slider, int Steps, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.SnapSlider");

	struct
	{
		class USlider*                 Slider;
		int                            Steps;
		int                            Value;
	} params;

	params.Slider = Slider;
	params.Steps = Steps;

	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function OptionsWidget.OptionsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptionsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsWidget_C::BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionComboBox_K2Node_ComponentBoundEvent_418_OnSelectionChangedEvent__DelegateSignature");

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<ESelectInfo>       SelectionType;
	} params;

	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_163_K2Node_ComponentBoundEvent_1476_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_MenuButton_C_164_K2Node_ComponentBoundEvent_1498_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Shadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_1496_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_1529_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Effects_K2Node_ComponentBoundEvent_1613_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Textures_K2Node_ComponentBoundEvent_1648_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResolutionScale_K2Node_ComponentBoundEvent_1738_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ViewDistance_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LightFunctions_K2Node_ComponentBoundEvent_1294_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowPrecision_K2Node_ComponentBoundEvent_1319_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ShadowResolution_K2Node_ComponentBoundEvent_1345_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DistanceFieldShadows_K2Node_ComponentBoundEvent_1372_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DFAO_K2Node_ComponentBoundEvent_1401_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__RefractionQuality_K2Node_ComponentBoundEvent_1430_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ReflectionEnvironmentMapping_K2Node_ComponentBoundEvent_1460_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TranslucencyVolumeBlur_K2Node_ComponentBoundEvent_1491_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__HighDetailMaterials_K2Node_ComponentBoundEvent_1523_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DepthOfFieldQuality_K2Node_ComponentBoundEvent_1556_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LensFlareQuality_K2Node_ComponentBoundEvent_1590_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ColorFringeQuality_K2Node_ComponentBoundEvent_1625_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__BloomQuality_K2Node_ComponentBoundEvent_1661_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__FastBlurTreshold_K2Node_ComponentBoundEvent_1698_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperQuality_K2Node_ComponentBoundEvent_1736_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__LightShaftQuality_K2Node_ComponentBoundEvent_1775_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__SeparateTranslucencyPass_K2Node_ComponentBoundEvent_1816_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__TonemapperFilm_K2Node_ComponentBoundEvent_1857_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__Fullscreen_K2Node_ComponentBoundEvent_608_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__FoliageQuality_K2Node_ComponentBoundEvent_1609_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__AmbientSoundSlider_K2Node_ComponentBoundEvent_1291_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__SoundButton_K2Node_ComponentBoundEvent_2008_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__VideoButton_K2Node_ComponentBoundEvent_2041_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__DynamicShadowQualitySlider_K2Node_ComponentBoundEvent_236_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_825_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnKeyRebound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FKey                    actionKey                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsWidget_C::OnKeyRebound(const struct FName& ActionName, const struct FKey& actionKey, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnKeyRebound");

	struct
	{
		struct FName                   ActionName;
		struct FKey                    actionKey;
		float                          Scale;
	} params;

	params.ActionName = ActionName;
	params.actionKey = actionKey;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_K2Node_ComponentBoundEvent_667_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnKeyRebindInitiated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_KeyBinding_C*        keyBindingWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UOptionsWidget_C::OnKeyRebindInitiated(class UUI_KeyBinding_C* keyBindingWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnKeyRebindInitiated");

	struct
	{
		class UUI_KeyBinding_C*        keyBindingWidget;
	} params;

	params.keyBindingWidget = keyBindingWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnAxisRebound
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FKey                    actionKey                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsWidget_C::OnAxisRebound(const struct FName& ActionName, const struct FKey& actionKey, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnAxisRebound");

	struct
	{
		struct FName                   ActionName;
		struct FKey                    actionKey;
		float                          Scale;
	} params;

	params.ActionName = ActionName;
	params.actionKey = actionKey;
	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnApplyYes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::OnApplyYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnApplyYes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnApplyNo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::OnApplyNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnApplyNo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnCancelYes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::OnCancelYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnCancelYes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnCancelNo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::OnCancelNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnCancelNo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnESC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnESC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MasterSoundSlider_K2Node_ComponentBoundEvent_110_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MusicSoundIntensitySlider_K2Node_ComponentBoundEvent_111_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__EffectsSoundIntensitySlider_K2Node_ComponentBoundEvent_149_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__GraphicsPreset_K2Node_ComponentBoundEvent_450_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_172_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ResetToDefaultControlsButton_K2Node_ComponentBoundEvent_88_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnResetControlsNo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::OnResetControlsNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnResetControlsNo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.OnResetControlsYes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::OnResetControlsYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.OnResetControlsYes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.InitKeyBindings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::InitKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.InitKeyBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__UI_OptionsSlider_0_K2Node_ComponentBoundEvent_45_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityTP_K2Node_ComponentBoundEvent_61_MouseUp__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityFP_K2Node_ComponentBoundEvent_70_MouseUp__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityDTS_K2Node_ComponentBoundEvent_126_MouseUp__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature
// (FUNC_BlueprintEvent)

void UOptionsWidget_C::BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__MouseSensitivityScope_K2Node_ComponentBoundEvent_182_MouseUp__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.RefreshAllOptionSliders
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptionsWidget_C::RefreshAllOptionSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.RefreshAllOptionSliders");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__EnablePushToTalkSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UOptionsWidget_C::BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.BndEvt__ConcealedMode_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function OptionsWidget.OptionsWidget_C.ExecuteUbergraph_OptionsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptionsWidget_C::ExecuteUbergraph_OptionsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsWidget.OptionsWidget_C.ExecuteUbergraph_OptionsWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
