#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_WeaponBullet_762x54FMJ_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C
// 0x0008 (0x04E8 - 0x04E0)
class ABP_WeaponBullet_762x54FMJ_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_762x54FMJ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
