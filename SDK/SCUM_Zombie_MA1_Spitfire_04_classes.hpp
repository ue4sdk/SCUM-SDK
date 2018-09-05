#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Zombie_MA1_Spitfire_04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zombie_MA1_Spitfire_04.Zombie_MA1_Spitfire_04_C
// 0x0000 (0x0800 - 0x0800)
class AZombie_MA1_Spitfire_04_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Zombie_MA1_Spitfire_04.Zombie_MA1_Spitfire_04_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
