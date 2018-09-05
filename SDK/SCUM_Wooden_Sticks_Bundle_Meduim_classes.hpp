#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Wooden_Sticks_Bundle_Meduim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wooden_Sticks_Bundle_Meduim.Wooden_Sticks_Bundle_Meduim_C
// 0x0000 (0x07A0 - 0x07A0)
class AWooden_Sticks_Bundle_Meduim_C : public AEquipmentItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Wooden_Sticks_Bundle_Meduim.Wooden_Sticks_Bundle_Meduim_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
