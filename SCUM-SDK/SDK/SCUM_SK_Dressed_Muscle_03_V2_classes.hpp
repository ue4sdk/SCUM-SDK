#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SK_Dressed_Muscle_03_V2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SK_Dressed_Muscle_03_V2.SK_Dressed_Muscle_03_V2_C
// 0x0000 (0x0098 - 0x0098)
class USK_Dressed_Muscle_03_V2_C : public UItemSpawnerPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SK_Dressed_Muscle_03_V2.SK_Dressed_Muscle_03_V2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
