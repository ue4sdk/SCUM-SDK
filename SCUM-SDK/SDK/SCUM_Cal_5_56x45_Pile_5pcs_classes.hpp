#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal_5_56x45_Pile_5pcs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal_5_56x45_Pile_5pcs.Cal_5_56x45_Pile_5pcs_C
// 0x0000 (0x0718 - 0x0718)
class ACal_5_56x45_Pile_5pcs_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal_5_56x45_Pile_5pcs.Cal_5_56x45_Pile_5pcs_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
