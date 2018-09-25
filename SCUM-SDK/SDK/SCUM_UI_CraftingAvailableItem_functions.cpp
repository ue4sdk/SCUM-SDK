// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CraftingAvailableItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.UpdateSelectionAndOptionalState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CraftingAvailableItem_C::UpdateSelectionAndOptionalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.UpdateSelectionAndOptionalState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.GetbIsEnabled_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_CraftingAvailableItem_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.GetbIsEnabled_1");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Init
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingAvailableItem_C::Init(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Init");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingAvailableItem_C::SetIsSelected(bool isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsSelected");

	struct
	{
		bool                           isSelected;
	} params;

	params.isSelected = isSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsOptional
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isOptional                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingAvailableItem_C::SetIsOptional(bool isOptional)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsOptional");

	struct
	{
		bool                           isOptional;
	} params;

	params.isOptional = isOptional;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetOptionalState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EOptionalState                 State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingAvailableItem_C::SetOptionalState(EOptionalState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetOptionalState");

	struct
	{
		EOptionalState                 State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CraftingAvailableItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.ExecuteUbergraph_UI_CraftingAvailableItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingAvailableItem_C::ExecuteUbergraph_UI_CraftingAvailableItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.ExecuteUbergraph_UI_CraftingAvailableItem");

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
