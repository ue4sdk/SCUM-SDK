// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ContinueOrNewCharacterDialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_ContinueOrNewCharacterDialog_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_ContinueOrNewCharacterDialog_C::BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ContinueOrNewCharacterDialog_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ContinueOrNewCharacterDialog_C::ExecuteUbergraph_UI_ContinueOrNewCharacterDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            GameplayPort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ResponsePort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 authToken                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_ContinueOrNewCharacterDialog_C::New__DelegateSignature(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature");

	struct
	{
		struct FString                 Ip;
		int                            GameplayPort;
		int                            ResponsePort;
		struct FString                 authToken;
	} params;

	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.authToken = authToken;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            GameplayPort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ResponsePort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 authToken                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_ContinueOrNewCharacterDialog_C::Continue__DelegateSignature(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature");

	struct
	{
		struct FString                 Ip;
		int                            GameplayPort;
		int                            ResponsePort;
		struct FString                 authToken;
	} params;

	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.authToken = authToken;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
