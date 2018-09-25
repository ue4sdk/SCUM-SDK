#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_TeamDeathmatchGameEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TeamDeathmatchGameEvent.BP_TeamDeathmatchGameEvent_C
// 0x0008 (0x0670 - 0x0668)
class ABP_TeamDeathmatchGameEvent_C : public ATeamDeathmatchGameEvent
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TeamDeathmatchGameEvent.BP_TeamDeathmatchGameEvent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
