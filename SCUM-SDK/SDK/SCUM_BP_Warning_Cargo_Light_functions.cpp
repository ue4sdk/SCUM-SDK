// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Warning_Cargo_Light_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.GetLight
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           LightOn                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Warning_Cargo_Light_C::GetLight(bool* LightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.GetLight");

	struct
	{
		bool                           LightOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LightOn != nullptr)
		*LightOn = params.LightOn;
}


// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.SetLight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Warning_Cargo_Light_C::SetLight(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.SetLight");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Warning_Cargo_Light_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Warning_Cargo_Light_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ExecuteUbergraph_BP_Warning_Cargo_Light
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Warning_Cargo_Light_C::ExecuteUbergraph_BP_Warning_Cargo_Light(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C.ExecuteUbergraph_BP_Warning_Cargo_Light");

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
