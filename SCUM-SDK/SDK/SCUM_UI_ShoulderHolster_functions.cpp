// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ShoulderHolster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ShoulderHolster.UI_ShoulderHolster_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_ShoulderHolster_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ShoulderHolster.UI_ShoulderHolster_C.UpdateVisuals
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ShoulderHolster_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.UpdateVisuals");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ShoulderHolster.UI_ShoulderHolster_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_ShoulderHolster_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ShoulderHolster.UI_ShoulderHolster_C.UpdateItemWidgetHighlightings
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ShoulderHolster_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.UpdateItemWidgetHighlightings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ShoulderHolster.UI_ShoulderHolster_C.ExecuteUbergraph_UI_ShoulderHolster
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ShoulderHolster_C::ExecuteUbergraph_UI_ShoulderHolster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.ExecuteUbergraph_UI_ShoulderHolster");

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
