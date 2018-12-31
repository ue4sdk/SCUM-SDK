#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_DoorUpgradeSlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_DoorUpgradeSlot.UI_DoorUpgradeSlot_C
// 0x0000 (0x0298 - 0x0298)
class UUI_DoorUpgradeSlot_C : public UUpgradeSlotWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_DoorUpgradeSlot.UI_DoorUpgradeSlot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
