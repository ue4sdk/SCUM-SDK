// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Wristwatch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Wristwatch.BP_Wristwatch_C.UpdateFatnessLeannessVisuals
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Wristwatch_C::UpdateFatnessLeannessVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.UpdateFatnessLeannessVisuals");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wristwatch.BP_Wristwatch_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Wristwatch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wristwatch.BP_Wristwatch_C.SetTime
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Wristwatch_C::SetTime(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.SetTime");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Wristwatch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wristwatch.BP_Wristwatch_C.ToggleDisplayVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visiblity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Wristwatch_C::ToggleDisplayVisibility(bool Visiblity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.ToggleDisplayVisibility");

	struct
	{
		bool                           Visiblity;
	} params;

	params.Visiblity = Visiblity;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Wristwatch_C::SetDisplayBrightness(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Wristwatch_C::ExecuteUbergraph_BP_Wristwatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch");

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
