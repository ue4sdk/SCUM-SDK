// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_CargoDropContainer_Zombies_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CargoDropContainer_Zombies.BP_CargoDropContainer_Zombies_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CargoDropContainer_Zombies_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Zombies.BP_CargoDropContainer_Zombies_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CargoDropContainer_Zombies.BP_CargoDropContainer_Zombies_C.OnDoorOpened
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CargoDropContainer_Zombies_C::OnDoorOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Zombies.BP_CargoDropContainer_Zombies_C.OnDoorOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CargoDropContainer_Zombies.BP_CargoDropContainer_Zombies_C.ExecuteUbergraph_BP_CargoDropContainer_Zombies
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CargoDropContainer_Zombies_C::ExecuteUbergraph_BP_CargoDropContainer_Zombies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Zombies.BP_CargoDropContainer_Zombies_C.ExecuteUbergraph_BP_CargoDropContainer_Zombies");

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
