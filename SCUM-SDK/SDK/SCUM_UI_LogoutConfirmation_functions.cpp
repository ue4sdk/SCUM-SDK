// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_LogoutConfirmation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Get_LeavingSquadWarning_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_LogoutConfirmation_C::Get_LeavingSquadWarning_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Get_LeavingSquadWarning_Visibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.GetCountdownText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_LogoutConfirmation_C::GetCountdownText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.GetCountdownText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_LogoutConfirmation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_LogoutConfirmation_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnCountdownFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_LogoutConfirmation_C::OnCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnCountdownFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnNo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_LogoutConfirmation_C::OnNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnNo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_LogoutConfirmation_C::BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.ExecuteUbergraph_UI_LogoutConfirmation
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_LogoutConfirmation_C::ExecuteUbergraph_UI_LogoutConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.ExecuteUbergraph_UI_LogoutConfirmation");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.CountdownFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_LogoutConfirmation_C::CountdownFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.CountdownFinished__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
