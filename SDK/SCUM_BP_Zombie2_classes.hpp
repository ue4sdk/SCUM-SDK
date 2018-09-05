#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Zombie2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Zombie2.BP_Zombie2_C
// 0x0028 (0x0B08 - 0x0AE0)
class ABP_Zombie2_C : public AZombie2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        REye;                                                     // 0x0AE8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        LEye;                                                     // 0x0AF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleHand_L;                        // 0x0AF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsuleHand_R;                        // 0x0B00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Zombie2.BP_Zombie2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Zombie2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
