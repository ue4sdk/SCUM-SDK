// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Sliding_Glass_Doors_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sliding_Glass_Doors.BP_Sliding_Glass_Doors_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Sliding_Glass_Doors_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sliding_Glass_Doors.BP_Sliding_Glass_Doors_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
