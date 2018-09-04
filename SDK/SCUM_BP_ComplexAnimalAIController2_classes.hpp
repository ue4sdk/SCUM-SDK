#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_ComplexAnimalAIController2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C
// 0x0008 (0x05B8 - 0x05B0)
class ABP_ComplexAnimalAIController2_C : public AComplexAnimalAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPossess(class APawn* PossessedPawn);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ComplexAnimalAIController2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
