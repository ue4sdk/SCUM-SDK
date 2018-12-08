#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_WeaponScope_ACOG_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponScope_ACOG_01.WeaponScope_ACOG_01_C
// 0x0000 (0x0818 - 0x0818)
class AWeaponScope_ACOG_01_C : public AWeaponAttachmentScope
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WeaponScope_ACOG_01.WeaponScope_ACOG_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
