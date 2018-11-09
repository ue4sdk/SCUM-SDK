#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Sights_M16A4_FoldingSights_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sights_M16A4_FoldingSights.Sights_M16A4_FoldingSights_C
// 0x0000 (0x07F0 - 0x07F0)
class ASights_M16A4_FoldingSights_C : public AWeaponAttachmentScope
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Sights_M16A4_FoldingSights.Sights_M16A4_FoldingSights_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
