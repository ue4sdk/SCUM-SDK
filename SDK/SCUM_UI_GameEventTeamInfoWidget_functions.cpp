// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventTeamInfoWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::GetStatWidgetCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount");

	struct
	{
		int                            count;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (count != nullptr)
		*count = params.count;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UGameEventParticipantStatsWidget* Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::GetStatWidget(int Index, class UGameEventParticipantStatsWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget");

	struct
	{
		int                            Index;
		class UGameEventParticipantStatsWidget* Widget;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::SetTeamScore(float Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore");

	struct
	{
		float                          Score;
	} params;

	params.Score = Score;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventTeamInfoWidget_C::ClearWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventTeamInfoWidget_C::AddWinCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGameEventParticipantStatsWidget* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::RemoveStatWidget(class UGameEventParticipantStatsWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget");

	struct
	{
		class UGameEventParticipantStatsWidget* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGameEventParticipantStatsWidget* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::AddStatWidget(class UGameEventParticipantStatsWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget");

	struct
	{
		class UGameEventParticipantStatsWidget* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_GameEventTeamHeaderWidget_C* Header                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::AddHeader(class UUI_GameEventTeamHeaderWidget_C* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader");

	struct
	{
		class UUI_GameEventTeamHeaderWidget_C* Header;
	} params;

	params.Header = Header;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventTeamInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::ExecuteUbergraph_UI_GameEventTeamInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget");

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
