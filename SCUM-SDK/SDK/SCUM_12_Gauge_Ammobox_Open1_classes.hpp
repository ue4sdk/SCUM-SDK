#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_12_Gauge_Ammobox_Open1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 12_Gauge_Ammobox_Open1.12_Gauge_Ammobox_Open1_C
// 0x0000 (0x06F0 - 0x06F0)
class A12_Gauge_Ammobox_Open1_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass 12_Gauge_Ammobox_Open1.12_Gauge_Ammobox_Open1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
