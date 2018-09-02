// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_InventoryContainers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InventoryContainers.UI_InventoryContainers_C.BndEvt__MinimizableWidget_30_K2Node_ComponentBoundEvent_8_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_InventoryContainers_C::BndEvt__MinimizableWidget_30_K2Node_ComponentBoundEvent_8_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryContainers.UI_InventoryContainers_C.BndEvt__MinimizableWidget_30_K2Node_ComponentBoundEvent_8_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryContainers.UI_InventoryContainers_C.ChangeTitle
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_InventoryContainers_C::ChangeTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryContainers.UI_InventoryContainers_C.ChangeTitle");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_InventoryContainers.UI_InventoryContainers_C.ExecuteUbergraph_UI_InventoryContainers
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_InventoryContainers_C::ExecuteUbergraph_UI_InventoryContainers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryContainers.UI_InventoryContainers_C.ExecuteUbergraph_UI_InventoryContainers");

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
