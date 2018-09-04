#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_House_Clothes_Medium_Big_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass House_Clothes_Medium_Big.House_Clothes_Medium_Big_C
// 0x0000 (0x0098 - 0x0098)
class UHouse_Clothes_Medium_Big_C : public UItemSpawnerPreset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass House_Clothes_Medium_Big.House_Clothes_Medium_Big_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
