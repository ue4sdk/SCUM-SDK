// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Sentry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Sentry.BP_Sentry_C.IKFootTrace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TraceDistance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Socket                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          IKOffset                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ABP_Sentry_C::IKFootTrace(float TraceDistance, const struct FName& Socket, float* IKOffset, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sentry.BP_Sentry_C.IKFootTrace");

	struct
	{
		float                          TraceDistance;
		struct FName                   Socket;
		float                          IKOffset;
		struct FVector                 HitNormal;
	} params;

	params.TraceDistance = TraceDistance;
	params.Socket = Socket;

	UObject::ProcessEvent(fn, &params);

	if (IKOffset != nullptr)
		*IKOffset = params.IKOffset;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
}


// Function BP_Sentry.BP_Sentry_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Sentry_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sentry.BP_Sentry_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sentry.BP_Sentry_C.JumpMulticast
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Sentry_C::JumpMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sentry.BP_Sentry_C.JumpMulticast");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sentry.BP_Sentry_C.ReceiveHit
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bSelfMoved                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_Sentry_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sentry.BP_Sentry_C.ReceiveHit");

	struct
	{
		class UPrimitiveComponent*     MyComp;
		class AActor*                  Other;
		class UPrimitiveComponent*     OtherComp;
		bool                           bSelfMoved;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;

	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sentry.BP_Sentry_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Sentry_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sentry.BP_Sentry_C.ReceiveActorBeginOverlap");

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sentry.BP_Sentry_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Sentry_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sentry.BP_Sentry_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sentry.BP_Sentry_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Sentry_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sentry.BP_Sentry_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Sentry.BP_Sentry_C.ExecuteUbergraph_BP_Sentry
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Sentry_C::ExecuteUbergraph_BP_Sentry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Sentry.BP_Sentry_C.ExecuteUbergraph_BP_Sentry");

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
