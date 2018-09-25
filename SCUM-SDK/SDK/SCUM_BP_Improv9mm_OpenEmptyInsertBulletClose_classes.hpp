#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Improv9mm_OpenEmptyInsertBulletClose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Improv9mm_OpenEmptyInsertBulletClose.BP_Improv9mm_OpenEmptyInsertBulletClose_C
// 0x0000 (0x0090 - 0x0090)
class UBP_Improv9mm_OpenEmptyInsertBulletClose_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Improv9mm_OpenEmptyInsertBulletClose.BP_Improv9mm_OpenEmptyInsertBulletClose_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
