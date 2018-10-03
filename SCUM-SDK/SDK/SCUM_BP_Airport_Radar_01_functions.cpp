// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Airport_Radar_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Airport_Radar_01.BP_Airport_Radar_01_C.GetLadderMarkers
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FLadderMarker>   Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_Airport_Radar_01_C::GetLadderMarkers(TArray<struct FLadderMarker>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Airport_Radar_01.BP_Airport_Radar_01_C.GetLadderMarkers");

	struct
	{
		TArray<struct FLadderMarker>   Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Airport_Radar_01.BP_Airport_Radar_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Airport_Radar_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Airport_Radar_01.BP_Airport_Radar_01_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
