#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Trip_wire_dead_fall_for_large_animals_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trip_wire_dead_fall_for_large_animals.Trip_wire_dead_fall_for_large_animals_C
// 0x0000 (0x0718 - 0x0718)
class ATrip_wire_dead_fall_for_large_animals_C : public AEquipmentItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Trip_wire_dead_fall_for_large_animals.Trip_wire_dead_fall_for_large_animals_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
