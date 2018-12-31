#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_NightVisionGoggles_Test_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NightVisionGoggles_Test.NightVisionGoggles_Test_C
// 0x0000 (0x07B0 - 0x07B0)
class ANightVisionGoggles_Test_C : public ANightVisionGogglesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NightVisionGoggles_Test.NightVisionGoggles_Test_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
