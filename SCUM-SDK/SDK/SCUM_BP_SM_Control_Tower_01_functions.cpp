// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_SM_Control_Tower_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SM_Control_Tower_01.BP_SM_Control_Tower_01_C.GetWindowMarkers
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FWindowMarker>   Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_SM_Control_Tower_01_C::GetWindowMarkers(TArray<struct FWindowMarker>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SM_Control_Tower_01.BP_SM_Control_Tower_01_C.GetWindowMarkers");

	struct
	{
		TArray<struct FWindowMarker>   Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SM_Control_Tower_01.BP_SM_Control_Tower_01_C.GetLadderMarkers
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLadderMarker>   Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_SM_Control_Tower_01_C::GetLadderMarkers(TArray<struct FLadderMarker>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SM_Control_Tower_01.BP_SM_Control_Tower_01_C.GetLadderMarkers");

	struct
	{
		TArray<struct FLadderMarker>   Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_SM_Control_Tower_01.BP_SM_Control_Tower_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SM_Control_Tower_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SM_Control_Tower_01.BP_SM_Control_Tower_01_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
