#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_WeaponBullet_ShotgunShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponBullet_ShotgunShot.BP_WeaponBullet_ShotgunShot_C
// 0x0000 (0x04E0 - 0x04E0)
class ABP_WeaponBullet_ShotgunShot_C : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WeaponBullet_ShotgunShot.BP_WeaponBullet_ShotgunShot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
