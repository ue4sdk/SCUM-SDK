#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_MountTypeWeaponM233Scope_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MountTypeWeaponM233Scope.BP_MountTypeWeaponM233Scope_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MountTypeWeaponM233Scope_C : public UAttachmentSocketMountType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MountTypeWeaponM233Scope.BP_MountTypeWeaponM233Scope_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
