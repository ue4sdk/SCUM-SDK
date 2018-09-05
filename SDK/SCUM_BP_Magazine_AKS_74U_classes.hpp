#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Magazine_AKS_74U_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Magazine_AKS_74U.BP_Magazine_AKS_74U_C
// 0x0000 (0x07B0 - 0x07B0)
class ABP_Magazine_AKS_74U_C : public AWeaponAttachmentMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Magazine_AKS_74U.BP_Magazine_AKS_74U_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
