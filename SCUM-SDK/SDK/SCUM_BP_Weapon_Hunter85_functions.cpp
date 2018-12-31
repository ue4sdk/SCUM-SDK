// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Weapon_Hunter85_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.GetAmmoReloadCapacity
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AAmmunitionItem*         ammo                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ABP_Weapon_Hunter85_C::GetAmmoReloadCapacity(class AAmmunitionItem* ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.GetAmmoReloadCapacity");

	struct
	{
		class AAmmunitionItem*         ammo;
		int                            ReturnValue;
	} params;

	params.ammo = ammo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weapon_Hunter85_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
