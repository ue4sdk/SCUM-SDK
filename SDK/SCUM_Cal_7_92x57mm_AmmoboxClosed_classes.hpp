#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal_7_92x57mm_AmmoboxClosed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal_7_92x57mm_AmmoboxClosed.Cal_7_92x57mm_AmmoboxClosed_C
// 0x0000 (0x07B0 - 0x07B0)
class ACal_7_92x57mm_AmmoboxClosed_C : public AAmmunitionBoxItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal_7_92x57mm_AmmoboxClosed.Cal_7_92x57mm_AmmoboxClosed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
