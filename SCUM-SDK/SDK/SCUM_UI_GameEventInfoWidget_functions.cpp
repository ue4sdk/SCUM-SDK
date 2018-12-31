// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventInfoWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameEventBase*          _gameEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventInfoWidget_C::UpdateStats(class AGameEventBase* _gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats");

	struct
	{
		class AGameEventBase*          _gameEvent;
	} params;

	params._gameEvent = _gameEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventInfoWidget_C::ExecuteUbergraph_UI_GameEventInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget");

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
