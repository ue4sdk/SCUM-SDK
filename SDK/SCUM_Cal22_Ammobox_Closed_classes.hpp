#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal22_Ammobox_Closed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal22_Ammobox_Closed.Cal22_Ammobox_Closed_C
// 0x0000 (0x07A0 - 0x07A0)
class ACal22_Ammobox_Closed_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal22_Ammobox_Closed.Cal22_Ammobox_Closed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
