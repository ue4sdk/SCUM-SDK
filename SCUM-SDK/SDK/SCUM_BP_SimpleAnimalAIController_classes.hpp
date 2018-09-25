#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_SimpleAnimalAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SimpleAnimalAIController.BP_SimpleAnimalAIController_C
// 0x0000 (0x04A0 - 0x04A0)
class ABP_SimpleAnimalAIController_C : public ASimpleAnimalAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SimpleAnimalAIController.BP_SimpleAnimalAIController_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
