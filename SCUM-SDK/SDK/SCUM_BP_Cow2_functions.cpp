// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Cow2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cow2.BP_Cow2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Cow2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cow2.BP_Cow2_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Cow2.BP_Cow2_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Cow2_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cow2.BP_Cow2_C.ReceiveActorBeginOverlap");

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Cow2.BP_Cow2_C.ExecuteUbergraph_BP_Cow2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Cow2_C::ExecuteUbergraph_BP_Cow2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cow2.BP_Cow2_C.ExecuteUbergraph_BP_Cow2");

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
