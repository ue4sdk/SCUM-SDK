#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_MountTypeWeaponMagazineASVal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MountTypeWeaponMagazineASVal.BP_MountTypeWeaponMagazineASVal_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MountTypeWeaponMagazineASVal_C : public UAttachmentSocketMountType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MountTypeWeaponMagazineASVal.BP_MountTypeWeaponMagazineASVal_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
