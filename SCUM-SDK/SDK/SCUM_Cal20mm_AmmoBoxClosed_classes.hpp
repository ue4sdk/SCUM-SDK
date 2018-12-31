#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal20mm_AmmoBoxClosed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal20mm_AmmoBoxClosed.Cal20mm_AmmoBoxClosed_C
// 0x0000 (0x0710 - 0x0710)
class ACal20mm_AmmoBoxClosed_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal20mm_AmmoBoxClosed.Cal20mm_AmmoBoxClosed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
