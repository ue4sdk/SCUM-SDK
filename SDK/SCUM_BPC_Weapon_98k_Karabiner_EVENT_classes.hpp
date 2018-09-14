#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BPC_Weapon_98k_Karabiner_EVENT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPC_Weapon_98k_Karabiner_EVENT.BPC_Weapon_98k_Karabiner_EVENT_C
// 0x0000 (0x10F8 - 0x10F8)
class ABPC_Weapon_98k_Karabiner_EVENT_C : public ABP_Weapon_98k_Karabiner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BPC_Weapon_98k_Karabiner_EVENT.BPC_Weapon_98k_Karabiner_EVENT_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
