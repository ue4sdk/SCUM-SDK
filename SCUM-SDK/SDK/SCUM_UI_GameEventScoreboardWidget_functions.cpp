// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventScoreboardWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventScoreboardWidget_C::GetTogglePromptVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::ArrangeTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            TeamIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventScoreboardWidget_C::UpdateWinCounters(class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters");

	struct
	{
		class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget;
		int                            TeamIndex;
	} params;

	params.TeamInfoWidget = TeamInfoWidget;
	params.TeamIndex = TeamIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            TeamIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventScoreboardWidget_C::UpdateTeamScore(class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore");

	struct
	{
		class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget;
		int                            TeamIndex;
	} params;

	params.TeamInfoWidget = TeamInfoWidget;
	params.TeamIndex = TeamIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::InitTeamInfoWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::UpdateInfoCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_GameEventScoreboardWidget_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::OnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::InitializeScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventScoreboardWidget_C::ExecuteUbergraph_UI_GameEventScoreboardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget");

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
