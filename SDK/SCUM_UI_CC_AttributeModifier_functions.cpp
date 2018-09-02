// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CC_AttributeModifier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ModifyValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          modifier                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_AttributeModifier_C::ModifyValue(float modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ModifyValue");

	struct
	{
		float                          modifier;
	} params;

	params.modifier = modifier;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_AttributeModifier_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CC_AttributeModifier_C::SetValueText(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValueText");

	struct
	{
		struct FText                   Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CC_AttributeModifier_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CC_AttributeModifier_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CC_AttributeModifier_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CC_AttributeModifier_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CC_AttributeModifier_C::BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CC_AttributeModifier_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ExecuteUbergraph_UI_CC_AttributeModifier
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_AttributeModifier_C::ExecuteUbergraph_UI_CC_AttributeModifier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ExecuteUbergraph_UI_CC_AttributeModifier");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnDecrease__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_AttributeModifier_C::OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnDecrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnIncrease__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_AttributeModifier_C::OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnIncrease__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
