#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_WeaponBullet_ShotgunShell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponBullet_ShotgunShell.BP_WeaponBullet_ShotgunShell_C
// 0x0008 (0x04D8 - 0x04D0)
class ABP_WeaponBullet_ShotgunShell_C : public AProjectileShotgun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WeaponBullet_ShotgunShell.BP_WeaponBullet_ShotgunShell_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_ShotgunShell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
