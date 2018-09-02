#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_M1_Reload_Event_ChamberOpened_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_M1_Reload_Event_ChamberOpened.BP_M1_Reload_Event_ChamberOpened_C
// 0x0000 (0x0080 - 0x0080)
class UBP_M1_Reload_Event_ChamberOpened_C : public UEventInsertMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_M1_Reload_Event_ChamberOpened.BP_M1_Reload_Event_ChamberOpened_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
