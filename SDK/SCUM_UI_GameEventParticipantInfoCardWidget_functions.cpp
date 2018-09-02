// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventParticipantInfoCardWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventParticipantInfoCardWidget_C::UpdateStats(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventParticipantInfoCardWidget_C::ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget");

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
