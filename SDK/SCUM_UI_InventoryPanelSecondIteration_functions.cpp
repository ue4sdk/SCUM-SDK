// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_InventoryPanelSecondIteration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ReinitializeForPrisoner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::ReinitializeForPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ReinitializeForPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragOver
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_InventoryPanelSecondIteration_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragOver");

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


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_InventoryPanelSecondIteration_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDrop");

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


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ScrollToEquippedItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::ScrollToEquippedItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ScrollToEquippedItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveEquippedItemSideIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::RemoveEquippedItemSideIcon(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveEquippedItemSideIcon");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddEquippedItemSideIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::AddEquippedItemSideIcon(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddEquippedItemSideIcon");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.SortInventories
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventoryPanelSecondIteration_C::SortInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.SortInventories");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddContainerForItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::AddContainerForItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddContainerForItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveContainerForItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::RemoveContainerForItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveContainerForItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateContainerForItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::UpdateContainerForItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateContainerForItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemPickedUpStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           pickedUp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::OnItemPickedUpStateChanged(class AItem* Item, bool pickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemPickedUpStateChanged");

	struct
	{
		class AItem*                   Item;
		bool                           pickedUp;
	} params;

	params.Item = Item;
	params.pickedUp = pickedUp;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::OnItemDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateItemWidgetHighlightings
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventoryPanelSecondIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateItemWidgetHighlightings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragLeave");

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ExecuteUbergraph_UI_InventoryPanelSecondIteration
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::ExecuteUbergraph_UI_InventoryPanelSecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ExecuteUbergraph_UI_InventoryPanelSecondIteration");

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
