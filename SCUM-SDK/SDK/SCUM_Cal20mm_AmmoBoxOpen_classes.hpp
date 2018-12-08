#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal20mm_AmmoBoxOpen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal20mm_AmmoBoxOpen.Cal20mm_AmmoBoxOpen_C
// 0x0000 (0x0718 - 0x0718)
class ACal20mm_AmmoBoxOpen_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal20mm_AmmoBoxOpen.Cal20mm_AmmoBoxOpen_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
