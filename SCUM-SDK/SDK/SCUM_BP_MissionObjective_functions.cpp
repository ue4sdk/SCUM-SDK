// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_MissionObjective_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MissionObjective.BP_MissionObjective_C.OnChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MissionObjective_C::OnChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.OnChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MissionObjective.BP_MissionObjective_C.GetDescription
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void ABP_MissionObjective_C::GetDescription(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.GetDescription");

	struct
	{
		struct FText                   Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_MissionObjective.BP_MissionObjective_C.IsCompleted
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MissionObjective_C::IsCompleted(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.IsCompleted");

	struct
	{
		bool                           Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_MissionObjective.BP_MissionObjective_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MissionObjective_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MissionObjective.BP_MissionObjective_C.Changed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MissionObjective_C::Changed__DelegateSignature(class ABP_MissionObjective_C* sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.Changed__DelegateSignature");

	struct
	{
		class ABP_MissionObjective_C*  sender;
	} params;

	params.sender = sender;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
