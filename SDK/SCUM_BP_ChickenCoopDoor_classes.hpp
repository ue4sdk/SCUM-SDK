#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_ChickenCoopDoor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChickenCoopDoor.BP_ChickenCoopDoor_C
// 0x0000 (0x03C8 - 0x03C8)
class ABP_ChickenCoopDoor_C : public ARegularDoorStatic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ChickenCoopDoor.BP_ChickenCoopDoor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
