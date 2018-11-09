// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_VicinityItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_VicinityItem.UI_VicinityItem_C.ShowText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinityItem_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.ShowText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.HideText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinityItem_C::HideText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.HideText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_VicinityItem_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.OnDrop");

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


// Function UI_VicinityItem.UI_VicinityItem_C.RemoveItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::RemoveItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.RemoveItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.AddItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::AddItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.AddItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.GetItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::GetItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.GetItem");

	struct
	{
		class AItem*                   Item;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Item != nullptr)
		*Item = params.Item;
}


// Function UI_VicinityItem.UI_VicinityItem_C.InitFromItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.InitFromItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.SetupBindings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_VicinityItem_C::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.SetupBindings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.OnItemAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            column                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            row                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::OnItemAdded(class AItem* container, class AItem* Item, int column, int row)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.OnItemAdded");

	struct
	{
		class AItem*                   container;
		class AItem*                   Item;
		int                            column;
		int                            row;
	} params;

	params.container = container;
	params.Item = Item;
	params.column = column;
	params.row = row;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.OnItemRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::OnItemRemoved(class AItem* container, class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.OnItemRemoved");

	struct
	{
		class AItem*                   container;
		class AItem*                   Item;
	} params;

	params.container = container;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_VicinityItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_InventoryItem_C*     inventoryItemWidget            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           IsExpanded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature(class UUI_InventoryItem_C* inventoryItemWidget, bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature");

	struct
	{
		class UUI_InventoryItem_C*     inventoryItemWidget;
		bool                           IsExpanded;
	} params;

	params.inventoryItemWidget = inventoryItemWidget;
	params.IsExpanded = IsExpanded;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VicinityItem.UI_VicinityItem_C.ExecuteUbergraph_UI_VicinityItem
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VicinityItem_C::ExecuteUbergraph_UI_VicinityItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.ExecuteUbergraph_UI_VicinityItem");

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
