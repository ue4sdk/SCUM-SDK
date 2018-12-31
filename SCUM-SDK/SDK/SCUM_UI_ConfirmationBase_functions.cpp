// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ConfirmationBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ConfirmationBase.UI_ConfirmationBase_C.AddToCanvas
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvasPanel*            Canvas                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_ConfirmationBase_C::AddToCanvas(class UCanvasPanel* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.AddToCanvas");

	struct
	{
		class UCanvasPanel*            Canvas;
	} params;

	params.Canvas = Canvas;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ConfirmationBase.UI_ConfirmationBase_C.OnNo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ConfirmationBase_C::OnNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.OnNo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ConfirmationBase.UI_ConfirmationBase_C.ExecuteUbergraph_UI_ConfirmationBase
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ConfirmationBase_C::ExecuteUbergraph_UI_ConfirmationBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.ExecuteUbergraph_UI_ConfirmationBase");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ConfirmationBase.UI_ConfirmationBase_C.NoClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ConfirmationBase_C::NoClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.NoClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
