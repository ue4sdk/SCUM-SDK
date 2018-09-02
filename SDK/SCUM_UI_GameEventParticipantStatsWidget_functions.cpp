// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventParticipantStatsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventParticipantStatsWidget_C::UpdateTeamColor(int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor");

	struct
	{
		int                            TeamIndex;
	} params;

	params.TeamIndex = TeamIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_GameEventParticipantStatsWidget_C::UpdateNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_GameEventParticipantStatsWidget_C::IsOwning()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventParticipantStatsWidget_C::GetSelectedOverlayVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventParticipantStatsWidget_C::GetInactiveOverlayVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_GameEventParticipantStatsWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_GameEventParticipantStatsWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventParticipantStatsWidget_C::UpdateColours()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameEventTeamColours   colours                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_GameEventParticipantStatsWidget_C::SetColours(const struct FGameEventTeamColours& colours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours");

	struct
	{
		struct FGameEventTeamColours   colours;
	} params;

	params.colours = colours;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventParticipantStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventParticipantStatsWidget_C::ExecuteUbergraph_UI_GameEventParticipantStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget");

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
