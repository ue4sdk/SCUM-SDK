// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_TeamDeathmatchTeamHeaderWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.GetPlayerText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_TeamDeathmatchTeamHeaderWidget_C::GetPlayerText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.GetPlayerText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetTeamName(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamName");

	struct
	{
		struct FText                   Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamColours
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameEventTeamColours   colours                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetTeamColours(const struct FGameEventTeamColours& colours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamColours");

	struct
	{
		struct FGameEventTeamColours   colours;
	} params;

	params.colours = colours;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetLeftSide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetLeftSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetLeftSide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetRightSide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetRightSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetRightSide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetGameEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameEventBase*          gameEvent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetGameEvent(class AGameEventBase* gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetGameEvent");

	struct
	{
		class AGameEventBase*          gameEvent;
	} params;

	params.gameEvent = gameEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ClearWinCounters
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDeathmatchTeamHeaderWidget_C::ClearWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ClearWinCounters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.AddWinCounter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDeathmatchTeamHeaderWidget_C::AddWinCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.AddWinCounter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamDeathmatchTeamHeaderWidget_C::SetTeamScore(float Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.SetTeamScore");

	struct
	{
		float                          Score;
	} params;

	params.Score = Score;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamDeathmatchTeamHeaderWidget_C::ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchTeamHeaderWidget.UI_TeamDeathmatchTeamHeaderWidget_C.ExecuteUbergraph_UI_TeamDeathmatchTeamHeaderWidget");

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
