#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal_9mm_AmmoboxOpen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal_9mm_AmmoboxOpen.Cal_9mm_AmmoboxOpen_C
// 0x0000 (0x07A0 - 0x07A0)
class ACal_9mm_AmmoboxOpen_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal_9mm_AmmoboxOpen.Cal_9mm_AmmoboxOpen_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
