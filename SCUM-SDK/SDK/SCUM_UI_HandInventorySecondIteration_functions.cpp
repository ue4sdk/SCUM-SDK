// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_HandInventorySecondIteration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HandInventorySecondIteration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.UpdateVisuals
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_HandInventorySecondIteration_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.UpdateVisuals");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.UpdateItemWidgetHighlightings
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_HandInventorySecondIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.UpdateItemWidgetHighlightings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.ExecuteUbergraph_UI_HandInventorySecondIteration
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandInventorySecondIteration_C::ExecuteUbergraph_UI_HandInventorySecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.ExecuteUbergraph_UI_HandInventorySecondIteration");

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
