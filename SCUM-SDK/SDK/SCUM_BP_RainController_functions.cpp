// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_RainController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RainController.BP_RainController_C.DisableRain
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RainController_C::DisableRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.DisableRain");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.EnableRain
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RainController_C::EnableRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.EnableRain");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RainController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.ShiftCam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_RainController_C::ShiftCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ShiftCam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void ABP_RainController_C::BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		struct FVector                 Location;
		struct FVector                 Velocity;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_RainController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_RainController_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_RainController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_RainController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_RainController_C::ExecuteUbergraph_BP_RainController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController");

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
