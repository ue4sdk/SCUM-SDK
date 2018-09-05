#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal500SW_Ammoboxclosed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal500SW_Ammoboxclosed.Cal500SW_Ammoboxclosed_C
// 0x0000 (0x07A0 - 0x07A0)
class ACal500SW_Ammoboxclosed_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal500SW_Ammoboxclosed.Cal500SW_Ammoboxclosed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
