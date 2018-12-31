#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_ImprovisedPistol_OpenEmptyInsertBullet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ImprovisedPistol_OpenEmptyInsertBullet.BP_ImprovisedPistol_OpenEmptyInsertBullet_C
// 0x0000 (0x0090 - 0x0090)
class UBP_ImprovisedPistol_OpenEmptyInsertBullet_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ImprovisedPistol_OpenEmptyInsertBullet.BP_ImprovisedPistol_OpenEmptyInsertBullet_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
