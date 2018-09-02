// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MainMenuWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainMenuWidget.MainMenuWidget_C.GetCharacterName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UMainMenuWidget_C::GetCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.GetCharacterName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MainMenuWidget.MainMenuWidget_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMainMenuWidget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnPreviewKeyDown");

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


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainMenuWidget_C::BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainMenuWidget_C::BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainMenuWidget_C::BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainMenuWidget_C::BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.OnQuitYesClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuWidget_C::OnQuitYesClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnQuitYesClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.OnQuitNoClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuWidget_C::OnQuitNoClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnQuitNoClicked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMainMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.OnESC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnESC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMainMenuWidget_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.OnNetworkErrorDismissed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMainMenuWidget_C::OnNetworkErrorDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.OnNetworkErrorDismissed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMainMenuWidget_C::ExecuteUbergraph_MainMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget");

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
