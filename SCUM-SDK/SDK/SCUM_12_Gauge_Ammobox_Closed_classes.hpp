#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_12_Gauge_Ammobox_Closed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass 12_Gauge_Ammobox_Closed.12_Gauge_Ammobox_Closed_C
// 0x0000 (0x0718 - 0x0718)
class A12_Gauge_Ammobox_Closed_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass 12_Gauge_Ammobox_Closed.12_Gauge_Ammobox_Closed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
