#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Weapon_590A11_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_590A11.BP_Weapon_590A11_C
// 0x0010 (0x1040 - 0x1030)
class ABP_Weapon_590A11_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1030(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1038(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Weapon_590A11.BP_Weapon_590A11_C");
		return ptr;
	}


	struct FWidgetDisplayInfo GetWidgetDisplayInfo();
	void UserConstructionScript();
	void FillUpWithAmmo();
	void ExecuteUbergraph_BP_Weapon_590A11(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
