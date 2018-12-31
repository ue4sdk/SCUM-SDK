#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal_5_56x45_AmmoboxOpen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal_5_56x45_AmmoboxOpen.Cal_5_56x45_AmmoboxOpen_C
// 0x0000 (0x0710 - 0x0710)
class ACal_5_56x45_AmmoboxOpen_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal_5_56x45_AmmoboxOpen.Cal_5_56x45_AmmoboxOpen_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
