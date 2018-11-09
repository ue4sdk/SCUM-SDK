// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_WellSpring_01_New_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WellSpring_01_New.BP_WellSpring_01_New_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_WellSpring_01_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_01_New.BP_WellSpring_01_New_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WellSpring_01_New.BP_WellSpring_01_New_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_WellSpring_01_New_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_01_New.BP_WellSpring_01_New_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WellSpring_01_New.BP_WellSpring_01_New_C.ExecuteUbergraph_BP_WellSpring_01_New
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_WellSpring_01_New_C::ExecuteUbergraph_BP_WellSpring_01_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WellSpring_01_New.BP_WellSpring_01_New_C.ExecuteUbergraph_BP_WellSpring_01_New");

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
