// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Prisoner_Left_Arm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Prisoner_Left_Arm.Prisoner_Left_Arm_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APrisoner_Left_Arm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prisoner_Left_Arm.Prisoner_Left_Arm_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
