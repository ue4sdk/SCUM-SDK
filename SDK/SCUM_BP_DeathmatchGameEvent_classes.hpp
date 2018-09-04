#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_DeathmatchGameEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeathmatchGameEvent.BP_DeathmatchGameEvent_C
// 0x0008 (0x0670 - 0x0668)
class ABP_DeathmatchGameEvent_C : public ADeathmatchGameEvent
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0668(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DeathmatchGameEvent.BP_DeathmatchGameEvent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
