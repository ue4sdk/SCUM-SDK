#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Bow_InsertArrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bow_InsertArrow.BP_Bow_InsertArrow_C
// 0x0000 (0x0080 - 0x0080)
class UBP_Bow_InsertArrow_C : public UWeaponActionReloadSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Bow_InsertArrow.BP_Bow_InsertArrow_C");
		return ptr;
	}


	float ExecuteUsingData(const struct FWeaponReloadData& Data);
	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
