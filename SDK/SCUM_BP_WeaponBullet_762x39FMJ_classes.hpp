#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_WeaponBullet_762x39FMJ_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponBullet_762x39FMJ.BP_WeaponBullet_762x39FMJ_C
// 0x0000 (0x04C0 - 0x04C0)
class ABP_WeaponBullet_762x39FMJ_C : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WeaponBullet_762x39FMJ.BP_WeaponBullet_762x39FMJ_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
