#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_M16_Reload_Event_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_M16_Reload_Event.BP_M16_Reload_Event_C
// 0x0004 (0x0084 - 0x0080)
class UBP_M16_Reload_Event_C : public UEventInsertMagazine
{
public:
	int                                                MaxAmmoCount;                                             // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_M16_Reload_Event.BP_M16_Reload_Event_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
