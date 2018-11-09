#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_CTFGameEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CTFGameEvent.BP_CTFGameEvent_C
// 0x0008 (0x0790 - 0x0788)
class ABP_CTFGameEvent_C : public ACTFGameEvent
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0788(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CTFGameEvent.BP_CTFGameEvent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
