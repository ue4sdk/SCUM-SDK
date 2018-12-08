#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_SUV_01_A_Item_Container_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SUV_01_A_Item_Container.BP_SUV_01_A_Item_Container_C
// 0x0000 (0x0788 - 0x0788)
class ABP_SUV_01_A_Item_Container_C : public ABP_Vehicle_Item_Container_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SUV_01_A_Item_Container.BP_SUV_01_A_Item_Container_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
