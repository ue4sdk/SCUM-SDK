#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal7_62x54mmR_Ammobox_Open_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal7_62x54mmR_Ammobox_Open.Cal7_62x54mmR_Ammobox_Open_C
// 0x0000 (0x07A0 - 0x07A0)
class ACal7_62x54mmR_Ammobox_Open_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal7_62x54mmR_Ammobox_Open.Cal7_62x54mmR_Ammobox_Open_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
