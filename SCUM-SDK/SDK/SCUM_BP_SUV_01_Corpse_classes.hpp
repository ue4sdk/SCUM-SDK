#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_SUV_01_Corpse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SUV_01_Corpse.BP_SUV_01_Corpse_C
// 0x0000 (0x03C0 - 0x03C0)
class ABP_SUV_01_Corpse_C : public ABP_VehicleCorpse_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SUV_01_Corpse.BP_SUV_01_Corpse_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
