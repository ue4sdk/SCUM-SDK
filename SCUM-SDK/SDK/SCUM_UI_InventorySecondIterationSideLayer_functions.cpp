// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_InventorySecondIterationSideLayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDragOver
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_InventorySecondIterationSideLayer_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDragOver");

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


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnItemDestroyed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::OnItemDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnItemDestroyed");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_InventorySecondIterationSideLayer_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDrop");

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


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_InventorySecondIterationSideLayer_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.GetIsSet
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isSet                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::GetIsSet(bool* isSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.GetIsSet");

	struct
	{
		bool                           isSet;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (isSet != nullptr)
		*isSet = params.isSet;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ClearItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventorySecondIterationSideLayer_C::ClearItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ClearItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.InitFromItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.InitFromItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_InventorySecondIterationSideLayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUserWidget*         clickedWidget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::ItemClicked(class UItemUserWidget* clickedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ItemClicked");

	struct
	{
		class UItemUserWidget*         clickedWidget;
	} params;

	params.clickedWidget = clickedWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.UpdateHighlightStatus
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventorySecondIterationSideLayer_C::UpdateHighlightStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.UpdateHighlightStatus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ExecuteUbergraph_UI_InventorySecondIterationSideLayer
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::ExecuteUbergraph_UI_InventorySecondIterationSideLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ExecuteUbergraph_UI_InventorySecondIterationSideLayer");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::OnClicked__DelegateSignature(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnClicked__DelegateSignature");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
