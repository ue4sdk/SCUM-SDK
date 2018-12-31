// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_InventoryItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InventoryItem.UI_InventoryItem_C.Get_HorizontalBox_0_Visibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_InventoryItem_C::Get_HorizontalBox_0_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.Get_HorizontalBox_0_Visibility_1");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.Get_WarmthText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_InventoryItem_C::Get_WarmthText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.Get_WarmthText_Text_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.Get_ItemCountText_Text_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_InventoryItem_C::Get_ItemCountText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.Get_ItemCountText_Text_1");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.HideAdditionalInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventoryItem_C::HideAdditionalInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.HideAdditionalInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_InventoryItem_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDoubleClick");

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventoryItem_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.Maximize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventoryItem_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.Minimize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.GetPercent_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UUI_InventoryItem_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.GetPercent_1");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.GetText_2
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_InventoryItem_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.GetText_2");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.ShowWeightInsteadOfSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           showWeight                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryItem_C::ShowWeightInsteadOfSlots(bool showWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.ShowWeightInsteadOfSlots");

	struct
	{
		bool                           showWeight;
	} params;

	params.showWeight = showWeight;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.GetUsedMassText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_InventoryItem_C::GetUsedMassText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.GetUsedMassText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_InventoryItem.UI_InventoryItem_C.InitFromItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryItem_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.InitFromItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.isTextShown
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isTextShown                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryItem_C::isTextShown(bool* isTextShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.isTextShown");

	struct
	{
		bool                           isTextShown;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (isTextShown != nullptr)
		*isTextShown = params.isTextShown;
}


// Function UI_InventoryItem.UI_InventoryItem_C.ShowText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventoryItem_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.ShowText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.HideText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_InventoryItem_C::HideText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.HideText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_InventoryItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_InventoryItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_InventoryItem_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.ExecuteUbergraph_UI_InventoryItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryItem_C::ExecuteUbergraph_UI_InventoryItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.ExecuteUbergraph_UI_InventoryItem");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryItem.UI_InventoryItem_C.ExpandedStateChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_InventoryItem_C*     inventoryItemWidget            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           IsExpanded                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryItem_C::ExpandedStateChanged__DelegateSignature(class UUI_InventoryItem_C* inventoryItemWidget, bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryItem.UI_InventoryItem_C.ExpandedStateChanged__DelegateSignature");

	struct
	{
		class UUI_InventoryItem_C*     inventoryItemWidget;
		bool                           IsExpanded;
	} params;

	params.inventoryItemWidget = inventoryItemWidget;
	params.IsExpanded = IsExpanded;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
