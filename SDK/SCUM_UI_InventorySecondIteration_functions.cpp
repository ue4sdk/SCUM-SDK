// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_InventorySecondIteration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_InventorySecondIteration_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.OnDrop");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
		bool                           ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.InitFromItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventorySecondIteration_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.InitFromItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.GetItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventorySecondIteration_C::GetItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.GetItem");

	struct
	{
		class AItem*                   Item;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Item != nullptr)
		*Item = params.Item;
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.UpdateItemWidgetHighlightings
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventorySecondIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.UpdateItemWidgetHighlightings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.Blink
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventorySecondIteration_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.Blink");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.ExecuteUbergraph_UI_InventorySecondIteration
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventorySecondIteration_C::ExecuteUbergraph_UI_InventorySecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.ExecuteUbergraph_UI_InventorySecondIteration");

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
