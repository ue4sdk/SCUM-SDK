// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventCardWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_TeamSwitchFee_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_Cooldown_Throbber_Visiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_EntryFeeTag_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_Buttons_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UUI_GameEventCardWidget_C::Get_Screenshot_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush");

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Team                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           CanJoin                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventCardWidget_C::CanJoinTeam(int Team, bool* CanJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam");

	struct
	{
		int                            Team;
		bool                           CanJoin;
	} params;

	params.Team = Team;

	UObject::ProcessEvent(fn, &params);

	if (CanJoin != nullptr)
		*CanJoin = params.CanJoin;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_SwitchTeamButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::GetJoinButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           HasEnoughFamePoints            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventCardWidget_C::CheckPrerequisites(bool* HasEnoughFamePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites");

	struct
	{
		bool                           HasEnoughFamePoints;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasEnoughFamePoints != nullptr)
		*HasEnoughFamePoints = params.HasEnoughFamePoints;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPlayerParticipatingInThisEvent (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventCardWidget_C::IsPlayerRegisteredForThisEvent(bool* IsPlayerParticipatingInThisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent");

	struct
	{
		bool                           IsPlayerParticipatingInThisEvent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsPlayerParticipatingInThisEvent != nullptr)
		*IsPlayerParticipatingInThisEvent = params.IsPlayerParticipatingInThisEvent;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            preferredTeam                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           CanJoin                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventCardWidget_C::CanPlayerJoin(int preferredTeam, bool* CanJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin");

	struct
	{
		int                            preferredTeam;
		bool                           CanJoin;
	} params;

	params.preferredTeam = preferredTeam;

	UObject::ProcessEvent(fn, &params);

	if (CanJoin != nullptr)
		*CanJoin = params.CanJoin;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinDisabledMsgVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_EventName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsPlayerParticipatingInThisEvent (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventCardWidget_C::IsPlayerParticipatingInThisEvent(bool* IsPlayerParticipatingInThisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent");

	struct
	{
		bool                           IsPlayerParticipatingInThisEvent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsPlayerParticipatingInThisEvent != nullptr)
		*IsPlayerParticipatingInThisEvent = params.IsPlayerParticipatingInThisEvent;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinRedButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinBlueButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_TimeTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_LeaveButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_NumPlayersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_RoundsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_TimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_StatusText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_LocationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventCardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameEventCardWidget_C::BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventCardWidget_C::ExecuteUbergraph_UI_GameEventCardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget");

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
