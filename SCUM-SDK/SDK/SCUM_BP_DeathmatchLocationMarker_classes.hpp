#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_DeathmatchLocationMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeathmatchLocationMarker.BP_DeathmatchLocationMarker_C
// 0x0000 (0x0530 - 0x0530)
class ABP_DeathmatchLocationMarker_C : public ADeathmatchLocationMarker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DeathmatchLocationMarker.BP_DeathmatchLocationMarker_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
