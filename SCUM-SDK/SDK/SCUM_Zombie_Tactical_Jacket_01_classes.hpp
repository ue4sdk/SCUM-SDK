#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Zombie_Tactical_Jacket_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Zombie_Tactical_Jacket_01.Zombie_Tactical_Jacket_01_C
// 0x0000 (0x0760 - 0x0760)
class AZombie_Tactical_Jacket_01_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Zombie_Tactical_Jacket_01.Zombie_Tactical_Jacket_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
