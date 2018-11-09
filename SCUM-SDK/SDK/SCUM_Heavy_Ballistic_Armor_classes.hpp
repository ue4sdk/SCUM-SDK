#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Heavy_Ballistic_Armor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Heavy_Ballistic_Armor.Heavy_Ballistic_Armor_C
// 0x0000 (0x0760 - 0x0760)
class AHeavy_Ballistic_Armor_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Heavy_Ballistic_Armor.Heavy_Ballistic_Armor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
