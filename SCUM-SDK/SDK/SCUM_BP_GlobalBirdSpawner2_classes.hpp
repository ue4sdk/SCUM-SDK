#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_GlobalBirdSpawner2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GlobalBirdSpawner2.BP_GlobalBirdSpawner2_C
// 0x0000 (0x0408 - 0x0408)
class ABP_GlobalBirdSpawner2_C : public AGlobalBirdSpawner2
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_GlobalBirdSpawner2.BP_GlobalBirdSpawner2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
