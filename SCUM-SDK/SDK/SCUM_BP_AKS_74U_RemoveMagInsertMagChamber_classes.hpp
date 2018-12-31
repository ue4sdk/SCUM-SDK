#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_AKS_74U_RemoveMagInsertMagChamber_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AKS_74U_RemoveMagInsertMagChamber.BP_AKS_74U_RemoveMagInsertMagChamber_C
// 0x0000 (0x0080 - 0x0080)
class UBP_AKS_74U_RemoveMagInsertMagChamber_C : public URemoveMagazineInsertMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AKS_74U_RemoveMagInsertMagChamber.BP_AKS_74U_RemoveMagInsertMagChamber_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
