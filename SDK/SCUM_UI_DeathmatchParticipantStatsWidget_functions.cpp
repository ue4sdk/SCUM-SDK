// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_DeathmatchParticipantStatsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_DeathmatchParticipantStatsWidget.UI_DeathmatchParticipantStatsWidget_C.UpdateStats
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_DeathmatchParticipantStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchParticipantStatsWidget.UI_DeathmatchParticipantStatsWidget_C.UpdateStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathmatchParticipantStatsWidget.UI_DeathmatchParticipantStatsWidget_C.FillLabels
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_DeathmatchParticipantStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchParticipantStatsWidget.UI_DeathmatchParticipantStatsWidget_C.FillLabels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_DeathmatchParticipantStatsWidget.UI_DeathmatchParticipantStatsWidget_C.ExecuteUbergraph_UI_DeathmatchParticipantStatsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_DeathmatchParticipantStatsWidget_C::ExecuteUbergraph_UI_DeathmatchParticipantStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathmatchParticipantStatsWidget.UI_DeathmatchParticipantStatsWidget_C.ExecuteUbergraph_UI_DeathmatchParticipantStatsWidget");

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
