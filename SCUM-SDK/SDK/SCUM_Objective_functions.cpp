// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Objective_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Objective.Objective_C.GetObjective
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjective_C::GetObjective(class ABP_MissionObjective_C** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.GetObjective");

	struct
	{
		class ABP_MissionObjective_C*  Objective;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Objective != nullptr)
		*Objective = params.Objective;
}


// Function Objective.Objective_C.SetObjective
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           PlaySound                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjective_C::SetObjective(class ABP_MissionObjective_C* Objective, bool PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.SetObjective");

	struct
	{
		class ABP_MissionObjective_C*  Objective;
		bool                           PlaySound;
	} params;

	params.Objective = Objective;
	params.PlaySound = PlaySound;

	UObject::ProcessEvent(fn, &params);
}


// Function Objective.Objective_C.UpdateWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjective_C::UpdateWidget(class ABP_MissionObjective_C* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.UpdateWidget");

	struct
	{
		class ABP_MissionObjective_C*  Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function Objective.Objective_C.ObjectiveCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_C::ObjectiveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.ObjectiveCompleted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Objective.Objective_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjective_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Objective.Objective_C.ExecuteUbergraph_Objective
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjective_C::ExecuteUbergraph_Objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.ExecuteUbergraph_Objective");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function Objective.Objective_C.OnFaded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjective_C::OnFaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Objective.Objective_C.OnFaded__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
