#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SK_Dressed_Fat_01_V1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SK_Dressed_Fat_01_V1.SK_Dressed_Fat_01_V1_C
// 0x0000 (0x0098 - 0x0098)
class USK_Dressed_Fat_01_V1_C : public UItemSpawnerPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SK_Dressed_Fat_01_V1.SK_Dressed_Fat_01_V1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
