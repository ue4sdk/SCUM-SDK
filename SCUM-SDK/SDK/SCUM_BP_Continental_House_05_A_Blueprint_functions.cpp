// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Continental_House_05_A_Blueprint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Continental_House_05_A_Blueprint.BP_Continental_House_05_A_Blueprint_C.GetWindowMarkers
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FWindowMarker>   Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_Continental_House_05_A_Blueprint_C::GetWindowMarkers(TArray<struct FWindowMarker>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Continental_House_05_A_Blueprint.BP_Continental_House_05_A_Blueprint_C.GetWindowMarkers");

	struct
	{
		TArray<struct FWindowMarker>   Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Continental_House_05_A_Blueprint.BP_Continental_House_05_A_Blueprint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Continental_House_05_A_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Continental_House_05_A_Blueprint.BP_Continental_House_05_A_Blueprint_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
