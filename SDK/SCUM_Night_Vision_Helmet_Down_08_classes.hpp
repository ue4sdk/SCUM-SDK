#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Night_Vision_Helmet_Down_08_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Night_Vision_Helmet_Down_08.Night_Vision_Helmet_Down_08_C
// 0x0000 (0x07F0 - 0x07F0)
class ANight_Vision_Helmet_Down_08_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Night_Vision_Helmet_Down_08.Night_Vision_Helmet_Down_08_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
