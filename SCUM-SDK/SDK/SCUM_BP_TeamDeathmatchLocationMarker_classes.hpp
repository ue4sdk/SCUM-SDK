#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_TeamDeathmatchLocationMarker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TeamDeathmatchLocationMarker.BP_TeamDeathmatchLocationMarker_C
// 0x0000 (0x0530 - 0x0530)
class ABP_TeamDeathmatchLocationMarker_C : public ATeamDeathmatchLocationMarker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TeamDeathmatchLocationMarker.BP_TeamDeathmatchLocationMarker_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
