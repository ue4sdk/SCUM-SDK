#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Improvised_Wooden_Arrow_Batch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Improvised_Wooden_Arrow_Batch.Improvised_Wooden_Arrow_Batch_C
// 0x0000 (0x06E0 - 0x06E0)
class AImprovised_Wooden_Arrow_Batch_C : public AItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Improvised_Wooden_Arrow_Batch.Improvised_Wooden_Arrow_Batch_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
