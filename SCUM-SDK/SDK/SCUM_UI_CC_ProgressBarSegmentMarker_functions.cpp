// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CC_ProgressBarSegmentMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Unhighlight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_ProgressBarSegmentMarker_C::Unhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Unhighlight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Highlight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_ProgressBarSegmentMarker_C::Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Highlight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CC_ProgressBarSegmentMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CC_ProgressBarSegmentMarker_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_ProgressBarSegmentMarker_C::ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker");

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
