#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_ScopeRail_Dragunov_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ScopeRail_Dragunov.BP_ScopeRail_Dragunov_C
// 0x0000 (0x0718 - 0x0718)
class ABP_ScopeRail_Dragunov_C : public AWeaponAttachmentScopeRail
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ScopeRail_Dragunov.BP_ScopeRail_Dragunov_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
