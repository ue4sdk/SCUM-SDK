#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_TakeInHandsHandgun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TakeInHandsHandgun.BP_TakeInHandsHandgun_C
// 0x0000 (0x0068 - 0x0068)
class UBP_TakeInHandsHandgun_C : public UTakeInHandsAssetData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TakeInHandsHandgun.BP_TakeInHandsHandgun_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
