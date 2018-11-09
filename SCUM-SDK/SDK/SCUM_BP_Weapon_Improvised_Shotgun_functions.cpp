// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Weapon_Improvised_Shotgun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weapon_Improvised_Shotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Weapon_Improvised_Shotgun_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Shotgun
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Weapon_Improvised_Shotgun_C::ExecuteUbergraph_BP_Weapon_Improvised_Shotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Shotgun.BP_Weapon_Improvised_Shotgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Shotgun");

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
