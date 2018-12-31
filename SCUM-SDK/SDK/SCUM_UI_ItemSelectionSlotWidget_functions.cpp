// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ItemSelectionSlotWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetAttachmentItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UClass*>          NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_ItemSelectionSlotWidget_C::GetAttachmentItems(TArray<class UClass*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetAttachmentItems");

	struct
	{
		TArray<class UClass*>          NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectedIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            SelectedIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::GetSelectedIndex(int* SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectedIndex");

	struct
	{
		int                            SelectedIndex;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectionCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UUI_ItemSelectionSlotWidget_C::GetSelectionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectionCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.HasNoSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           NoSelection                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::HasNoSelection(bool* NoSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.HasNoSelection");

	struct
	{
		bool                           NoSelection;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NoSelection != nullptr)
		*NoSelection = params.NoSelection;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ClearSelections
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ItemSelectionSlotWidget_C::ClearSelections()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ClearSelections");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSupportItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UClass*>          NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_ItemSelectionSlotWidget_C::GetSupportItems(TArray<class UClass*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSupportItems");

	struct
	{
		TArray<class UClass*>          NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetMainItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  MainItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::GetMainItem(class UClass** MainItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetMainItem");

	struct
	{
		class UClass*                  MainItem;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MainItem != nullptr)
		*MainItem = params.MainItem;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Get_Box_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_ItemSelectionSlotWidget_C::Get_Box_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Get_Box_Visibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Select
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::Select(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Select");

	struct
	{
		int                            Selection;
	} params;

	params.Selection = Selection;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.AddSelection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSelection*          Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::AddSelection(class UItemSelection* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.AddSelection");

	struct
	{
		class UItemSelection*          Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_ItemSelectionSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_ItemSelectionSlotWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::ExecuteUbergraph_UI_ItemSelectionSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ItemSelectionSlotWidget_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
