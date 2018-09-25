// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Ocean_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ocean.BP_Ocean_C.Set Global Parameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Ocean_C::Set_Global_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Global Parameters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ocean.BP_Ocean_C.Set Display Parameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Ocean_C::Set_Display_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Display Parameters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ocean.BP_Ocean_C.Create Wave Set
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Ocean_C::Create_Wave_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Create Wave Set");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ocean.BP_Ocean_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Ocean_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ocean.BP_Ocean_C.SetNetworkOffset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Ocean_C::SetNetworkOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.SetNetworkOffset");

	struct
	{
		float                          Offset;
	} params;

	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ocean.BP_Ocean_C.MySetNetworkOffset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Ocean_C::MySetNetworkOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.MySetNetworkOffset");

	struct
	{
		float                          Offset;
	} params;

	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Ocean_C::ExecuteUbergraph_BP_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean");

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
