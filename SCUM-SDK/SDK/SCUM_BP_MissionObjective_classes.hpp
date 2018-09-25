#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_MissionObjective_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MissionObjective.BP_MissionObjective_C
// 0x0018 (0x0330 - 0x0318)
class ABP_MissionObjective_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    Changed;                                                  // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MissionObjective.BP_MissionObjective_C");
		return ptr;
	}


	void OnChanged();
	void GetDescription(struct FText* Value);
	void IsCompleted(bool* Value);
	void UserConstructionScript();
	void Changed__DelegateSignature(class ABP_MissionObjective_C* sender);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
