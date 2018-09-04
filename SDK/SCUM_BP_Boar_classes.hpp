#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Boar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Boar.BP_Boar_C
// 0x0010 (0x0C20 - 0x0C10)
class ABP_Boar_C : public ABP_BaseComplexAnimal2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C10(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCapsuleHead;                                   // 0x0C18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Boar.BP_Boar_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Boar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
