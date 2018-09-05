// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_TeamDeathmatchParticipantStatsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.FillLabels
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDeathmatchParticipantStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.FillLabels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.UpdateStats
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamDeathmatchParticipantStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.UpdateStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.ExecuteUbergraph_UI_TeamDeathmatchParticipantStatsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamDeathmatchParticipantStatsWidget_C::ExecuteUbergraph_UI_TeamDeathmatchParticipantStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamDeathmatchParticipantStatsWidget.UI_TeamDeathmatchParticipantStatsWidget_C.ExecuteUbergraph_UI_TeamDeathmatchParticipantStatsWidget");

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
