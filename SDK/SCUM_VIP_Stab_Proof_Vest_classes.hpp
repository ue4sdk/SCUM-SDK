#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_VIP_Stab_Proof_Vest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VIP_Stab_Proof_Vest.VIP_Stab_Proof_Vest_C
// 0x0000 (0x07F0 - 0x07F0)
class AVIP_Stab_Proof_Vest_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass VIP_Stab_Proof_Vest.VIP_Stab_Proof_Vest_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
