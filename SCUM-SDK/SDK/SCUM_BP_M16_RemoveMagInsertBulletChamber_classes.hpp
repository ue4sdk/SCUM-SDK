#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_M16_RemoveMagInsertBulletChamber_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_M16_RemoveMagInsertBulletChamber.BP_M16_RemoveMagInsertBulletChamber_C
// 0x0000 (0x0080 - 0x0080)
class UBP_M16_RemoveMagInsertBulletChamber_C : public URemoveMagazineInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_M16_RemoveMagInsertBulletChamber.BP_M16_RemoveMagInsertBulletChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
