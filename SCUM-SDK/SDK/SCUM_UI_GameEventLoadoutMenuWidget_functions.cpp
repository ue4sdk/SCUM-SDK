// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventLoadoutMenuWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdateSlotSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_ItemSelectionSlotWidget_C* Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<class UItemSelection*>  Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUI_GameEventLoadoutMenuWidget_C::UpdateSlotSelection(class UUI_ItemSelectionSlotWidget_C* Slot, TArray<class UItemSelection*>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdateSlotSelection");

	struct
	{
		class UUI_ItemSelectionSlotWidget_C* Slot;
		TArray<class UItemSelection*>  Selection;
	} params;

	params.Slot = Slot;

	UObject::ProcessEvent(fn, &params);

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.HasAnythingToSelect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           HasAnythingToSelect            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::HasAnythingToSelect(bool* HasAnythingToSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.HasAnythingToSelect");

	struct
	{
		bool                           HasAnythingToSelect;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (HasAnythingToSelect != nullptr)
		*HasAnythingToSelect = params.HasAnythingToSelect;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.SomethingSelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           everythingSelected             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::SomethingSelected(bool* everythingSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.SomethingSelected");

	struct
	{
		bool                           everythingSelected;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (everythingSelected != nullptr)
		*everythingSelected = params.everythingSelected;
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdatePossibleItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::UpdatePossibleItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdatePossibleItems");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ApplyLoadout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::ApplyLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ApplyLoadout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventLoadoutMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ExecuteUbergraph_UI_GameEventLoadoutMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLoadoutMenuWidget_C::ExecuteUbergraph_UI_GameEventLoadoutMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ExecuteUbergraph_UI_GameEventLoadoutMenuWidget");

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
