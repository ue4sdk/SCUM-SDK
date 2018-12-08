#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_BaseComplexAnimal2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C
// 0x00C0 (0x0CF0 - 0x0C30)
class ABP_BaseComplexAnimal2_C : public AComplexAnimal2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C30(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UMeleeDetectHitCollisionCapsule*             MeleeDetectHitCollisionCapsule;                           // 0x0C38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                        // 0x0C40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    NewEventDispatcher_1;                                     // 0x0C48(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FFindFloorResult                            NewVar_1;                                                 // 0x0C58(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BaseComplexAnimal2.BP_BaseComplexAnimal2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_BaseComplexAnimal2(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
