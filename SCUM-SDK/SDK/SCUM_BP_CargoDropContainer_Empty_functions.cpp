// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_CargoDropContainer_Empty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnDoorOpened
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CargoDropContainer_Empty_C::OnDoorOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnDoorOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CargoDropContainer_Empty_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_CargoDropContainer_Empty_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CargoDropContainer_Empty_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnWarning
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_CargoDropContainer_Empty_C::OnWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.OnWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ExecuteUbergraph_BP_CargoDropContainer_Empty
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CargoDropContainer_Empty_C::ExecuteUbergraph_BP_CargoDropContainer_Empty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CargoDropContainer_Empty.BP_CargoDropContainer_Empty_C.ExecuteUbergraph_BP_CargoDropContainer_Empty");

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
