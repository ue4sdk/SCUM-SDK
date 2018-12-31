// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CTFParticipantStatsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.FillLabels
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CTFParticipantStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.FillLabels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.UpdateStats
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CTFParticipantStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.UpdateStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.ExecuteUbergraph_UI_CTFParticipantStatsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CTFParticipantStatsWidget_C::ExecuteUbergraph_UI_CTFParticipantStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.ExecuteUbergraph_UI_CTFParticipantStatsWidget");

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
