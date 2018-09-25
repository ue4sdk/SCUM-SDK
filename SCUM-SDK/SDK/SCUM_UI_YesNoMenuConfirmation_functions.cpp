// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_YesNoMenuConfirmation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.adjustPosition
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               adjustment                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UUI_YesNoMenuConfirmation_C::adjustPosition(const struct FVector2D& adjustment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.adjustPosition");

	struct
	{
		struct FVector2D               adjustment;
	} params;

	params.adjustment = adjustment;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvasPanel*            CanvasPanel                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_YesNoMenuConfirmation_C::Init(class UCanvasPanel* CanvasPanel, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.Init");

	struct
	{
		class UCanvasPanel*            CanvasPanel;
		struct FText                   Message;
	} params;

	params.CanvasPanel = CanvasPanel;
	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_YesNoMenuConfirmation_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_YesNoMenuConfirmation_C::BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_YesNoMenuConfirmation_C::OnYes()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.OnYes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_YesNoMenuConfirmation_C::ExecuteUbergraph_UI_YesNoMenuConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.ExecuteUbergraph_UI_YesNoMenuConfirmation");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_YesNoMenuConfirmation_C::YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_YesNoMenuConfirmation.UI_YesNoMenuConfirmation_C.YesClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
