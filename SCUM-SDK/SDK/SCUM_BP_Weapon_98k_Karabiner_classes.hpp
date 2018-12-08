#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Weapon_98k_Karabiner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C
// 0x0048 (0x10A8 - 0x1060)
class ABP_Weapon_98k_Karabiner_C : public AWeapon
{
public:
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1060(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FWeaponReloadData                           FinalReloadData;                                          // 0x1068(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FWeaponReloadData                           NewVar_1;                                                 // 0x1088(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C");
		return ptr;
	}


	int GetAmmoReloadCapacity(class AAmmunitionItem* ammo);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
