#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Beretta_M9_RemoveMagInsertMag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Beretta_M9_RemoveMagInsertMag.BP_Beretta_M9_RemoveMagInsertMag_C
// 0x0000 (0x0080 - 0x0080)
class UBP_Beretta_M9_RemoveMagInsertMag_C : public URemoveMagazineInsertMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Beretta_M9_RemoveMagInsertMag.BP_Beretta_M9_RemoveMagInsertMag_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
