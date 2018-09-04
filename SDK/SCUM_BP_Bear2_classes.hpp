#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Bear2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bear2.BP_Bear2_C
// 0x0019 (0x0C29 - 0x0C10)
class ABP_Bear2_C : public ABP_BaseComplexAnimal2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C10(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCapsuleRightHand;                              // 0x0C18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCapsuleLeftHand;                               // 0x0C20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               TurnTrigger;                                              // 0x0C28(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Bear2.BP_Bear2_C");
		return ptr;
	}


	void OnRep_TurnTrigger();
	void UserConstructionScript();
	void ReceiveMoveCompleted_Event_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void DrawPAth();
	void ReceivePossessed(class AController* NewController);
	void ReceiveBeginPlay();
	void TurnLoop();
	void TurnRPC();
	void ExecuteUbergraph_BP_Bear2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
