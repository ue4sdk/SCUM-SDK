#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal_9mm_AmmoboxClosed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal_9mm_AmmoboxClosed.Cal_9mm_AmmoboxClosed_C
// 0x0000 (0x0720 - 0x0720)
class ACal_9mm_AmmoboxClosed_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal_9mm_AmmoboxClosed.Cal_9mm_AmmoboxClosed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
