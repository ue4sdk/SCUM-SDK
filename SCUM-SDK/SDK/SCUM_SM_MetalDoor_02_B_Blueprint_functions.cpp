// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SM_MetalDoor_02_B_Blueprint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SM_MetalDoor_02_B_Blueprint.SM_MetalDoor_02_B_Blueprint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASM_MetalDoor_02_B_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SM_MetalDoor_02_B_Blueprint.SM_MetalDoor_02_B_Blueprint_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
