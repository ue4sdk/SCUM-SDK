// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_PrisonerPlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.CreateGameMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PrisonerPlayerController_C::CreateGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.CreateGameMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ToggleGameMenu
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PrisonerPlayerController_C::ToggleGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ToggleGameMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PrisonerPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ToggleGameMenuEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PrisonerPlayerController_C::ToggleGameMenuEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ToggleGameMenuEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PrisonerPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ExecuteUbergraph_BP_PrisonerPlayerController
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PrisonerPlayerController_C::ExecuteUbergraph_BP_PrisonerPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerPlayerController.BP_PrisonerPlayerController_C.ExecuteUbergraph_BP_PrisonerPlayerController");

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
