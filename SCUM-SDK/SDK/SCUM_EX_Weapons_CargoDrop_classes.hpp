#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_EX_Weapons_CargoDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_Weapons_CargoDrop.EX_Weapons_CargoDrop_C
// 0x0000 (0x0098 - 0x0098)
class UEX_Weapons_CargoDrop_C : public UItemSpawnerPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EX_Weapons_CargoDrop.EX_Weapons_CargoDrop_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
