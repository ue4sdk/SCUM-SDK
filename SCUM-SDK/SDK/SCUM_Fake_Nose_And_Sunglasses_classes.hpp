#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Fake_Nose_And_Sunglasses_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Fake_Nose_And_Sunglasses.Fake_Nose_And_Sunglasses_C
// 0x0000 (0x0780 - 0x0780)
class AFake_Nose_And_Sunglasses_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Fake_Nose_And_Sunglasses.Fake_Nose_And_Sunglasses_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
