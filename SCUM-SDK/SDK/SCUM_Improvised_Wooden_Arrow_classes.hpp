#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Improvised_Wooden_Arrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Improvised_Wooden_Arrow.Improvised_Wooden_Arrow_C
// 0x0000 (0x0700 - 0x0700)
class AImprovised_Wooden_Arrow_C : public AItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Improvised_Wooden_Arrow.Improvised_Wooden_Arrow_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
