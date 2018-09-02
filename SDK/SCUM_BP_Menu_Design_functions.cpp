// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Menu_Design_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Menu_Design.BP_Menu_Design_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Menu_Design_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_Menu_Design_C::PrisonerMoveInsideTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_Menu_Design_C::PrisonerMoveInsideTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Menu_Design_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.StartPrisonerEnterSequence
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           backwards                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::StartPrisonerEnterSequence(bool backwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.StartPrisonerEnterSequence");

	struct
	{
		bool                           backwards;
	} params;

	params.backwards = backwards;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleCount;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleCount;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleCount;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleCount;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleCount;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleCount;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature");

	struct
	{
		struct FName                   EventName;
		float                          EmitterTime;
		int                            ParticleCount;
	} params;

	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Menu_Design.BP_Menu_Design_C.ExecuteUbergraph_BP_Menu_Design
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Menu_Design_C::ExecuteUbergraph_BP_Menu_Design(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ExecuteUbergraph_BP_Menu_Design");

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
