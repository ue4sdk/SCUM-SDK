// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventMiniScoreboardWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::UpdateWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::UpdateTeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::InitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventMiniScoreboardWidget_C::EmptyMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::OnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::InitializeScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventMiniScoreboardWidget_C::ExecuteUbergraph_UI_GameEventMiniScoreboardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget");

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
