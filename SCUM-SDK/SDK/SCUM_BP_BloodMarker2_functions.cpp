// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_BloodMarker2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BloodMarker2.BP_BloodMarker2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BloodMarker2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodMarker2.BP_BloodMarker2_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BloodMarker2.BP_BloodMarker2_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BloodMarker2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodMarker2.BP_BloodMarker2_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BloodMarker2.BP_BloodMarker2_C.ExecuteUbergraph_BP_BloodMarker2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_BloodMarker2_C::ExecuteUbergraph_BP_BloodMarker2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodMarker2.BP_BloodMarker2_C.ExecuteUbergraph_BP_BloodMarker2");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
