// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ErrorMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_ErrorMessage_C::BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UCanvasPanel*            Canvas                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UWidget*                 widgetToDisable                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_ErrorMessage_C::Init(const struct FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.Init");

	struct
	{
		struct FText                   Message;
		class UCanvasPanel*            Canvas;
		class UWidget*                 widgetToDisable;
	} params;

	params.Message = Message;
	params.Canvas = Canvas;
	params.widgetToDisable = widgetToDisable;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ErrorMessage_C::OnDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ErrorMessage_C::ExecuteUbergraph_UI_ErrorMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ErrorMessage_C::Dismissed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
