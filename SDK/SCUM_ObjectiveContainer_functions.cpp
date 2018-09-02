// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ObjectiveContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObjectiveContainer.ObjectiveContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObjectiveContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ObjectiveContainer.ObjectiveContainer_C.AddObjective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           PlaySound                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectiveContainer_C::AddObjective(class ABP_MissionObjective_C* Objective, bool PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.AddObjective");

	struct
	{
		class ABP_MissionObjective_C*  Objective;
		bool                           PlaySound;
	} params;

	params.Objective = Objective;
	params.PlaySound = PlaySound;

	UObject::ProcessEvent(fn, &params);
}


// Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObjectiveContainer_C::ExecuteUbergraph_ObjectiveContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObjectiveContainer_C::ObjectiveCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
