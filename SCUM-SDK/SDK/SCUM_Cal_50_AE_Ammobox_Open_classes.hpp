#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal_50_AE_Ammobox_Open_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal_50_AE_Ammobox_Open.Cal_50_AE_Ammobox_Open_C
// 0x0000 (0x06F8 - 0x06F8)
class ACal_50_AE_Ammobox_Open_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal_50_AE_Ammobox_Open.Cal_50_AE_Ammobox_Open_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
