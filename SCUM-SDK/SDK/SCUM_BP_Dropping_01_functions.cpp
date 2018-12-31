// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Dropping_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Dropping_01.BP_Dropping_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Dropping_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Dropping_01_C::OffsetTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Dropping_01_C::OffsetTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_Dropping_01_C::BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Dropping_01_C::AutoDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Dropping_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Dropping_01_C::ExecuteUbergraph_BP_Dropping_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01");

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
