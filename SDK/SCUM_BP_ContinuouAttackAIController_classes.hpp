#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_ContinuouAttackAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ContinuouAttackAIController.BP_ContinuouAttackAIController_C
// 0x0000 (0x05C8 - 0x05C8)
class ABP_ContinuouAttackAIController_C : public AAnimalContinuousChargeAttackAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ContinuouAttackAIController.BP_ContinuouAttackAIController_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
