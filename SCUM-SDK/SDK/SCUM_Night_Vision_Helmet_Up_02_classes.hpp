#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Night_Vision_Helmet_Up_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Night_Vision_Helmet_Up_02.Night_Vision_Helmet_Up_02_C
// 0x0000 (0x0788 - 0x0788)
class ANight_Vision_Helmet_Up_02_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Night_Vision_Helmet_Up_02.Night_Vision_Helmet_Up_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
