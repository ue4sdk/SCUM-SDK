// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_ComplexAnimalAIController2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ComplexAnimalAIController2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.OnPossess
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ComplexAnimalAIController2_C::OnPossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.OnPossess");

	struct
	{
		class APawn*                   PossessedPawn;
	} params;

	params.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ComplexAnimalAIController2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ComplexAnimalAIController2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ExecuteUbergraph_BP_ComplexAnimalAIController2
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ComplexAnimalAIController2_C::ExecuteUbergraph_BP_ComplexAnimalAIController2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ComplexAnimalAIController2.BP_ComplexAnimalAIController2_C.ExecuteUbergraph_BP_ComplexAnimalAIController2");

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
