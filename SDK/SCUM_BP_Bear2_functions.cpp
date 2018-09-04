// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Bear2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bear2.BP_Bear2_C.OnRep_TurnTrigger
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bear2_C::OnRep_TurnTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.OnRep_TurnTrigger");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bear2.BP_Bear2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bear2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bear2.BP_Bear2_C.ReceiveMoveCompleted_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FAIRequestID            RequestID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<EPathFollowingResult> Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Bear2_C::ReceiveMoveCompleted_Event_1(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.ReceiveMoveCompleted_Event_1");

	struct
	{
		struct FAIRequestID            RequestID;
		TEnumAsByte<EPathFollowingResult> Result;
	} params;

	params.RequestID = RequestID;
	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bear2.BP_Bear2_C.DrawPAth
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bear2_C::DrawPAth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.DrawPAth");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bear2.BP_Bear2_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Bear2_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.ReceivePossessed");

	struct
	{
		class AController*             NewController;
	} params;

	params.NewController = NewController;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bear2.BP_Bear2_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Bear2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bear2.BP_Bear2_C.TurnLoop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bear2_C::TurnLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.TurnLoop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bear2.BP_Bear2_C.TurnRPC
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Bear2_C::TurnRPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.TurnRPC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Bear2.BP_Bear2_C.ExecuteUbergraph_BP_Bear2
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Bear2_C::ExecuteUbergraph_BP_Bear2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear2.BP_Bear2_C.ExecuteUbergraph_BP_Bear2");

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
