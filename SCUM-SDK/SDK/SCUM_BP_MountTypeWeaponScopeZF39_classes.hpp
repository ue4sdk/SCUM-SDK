#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_MountTypeWeaponScopeZF39_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MountTypeWeaponScopeZF39.BP_MountTypeWeaponScopeZF39_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MountTypeWeaponScopeZF39_C : public UAttachmentSocketMountType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MountTypeWeaponScopeZF39.BP_MountTypeWeaponScopeZF39_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
