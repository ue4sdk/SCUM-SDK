#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_MountTypeWeaponMagazine556x45_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MountTypeWeaponMagazine556x45.BP_MountTypeWeaponMagazine556x45_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MountTypeWeaponMagazine556x45_C : public UAttachmentSocketMountType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MountTypeWeaponMagazine556x45.BP_MountTypeWeaponMagazine556x45_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
