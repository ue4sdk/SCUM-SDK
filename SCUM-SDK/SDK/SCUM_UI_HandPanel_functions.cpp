// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_HandPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HandPanel.UI_HandPanel_C.GetQuickAccessAt
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UQuickAccessItemSwitcher* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UQuickAccessItemSwitcher* UUI_HandPanel_C::GetQuickAccessAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.GetQuickAccessAt");

	struct
	{
		int                            Index;
		class UQuickAccessItemSwitcher* ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_HandPanel.UI_HandPanel_C.GetShoulderHolster
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            holsterId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UShoulderHolsterWidget*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UShoulderHolsterWidget* UUI_HandPanel_C::GetShoulderHolster(int holsterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.GetShoulderHolster");

	struct
	{
		int                            holsterId;
		class UShoulderHolsterWidget*  ReturnValue;
	} params;

	params.holsterId = holsterId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_HandPanel.UI_HandPanel_C.GetHandInventory
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UHandInventorySecondIteration* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UHandInventorySecondIteration* UUI_HandPanel_C::GetHandInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.GetHandInventory");

	struct
	{
		class UHandInventorySecondIteration* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_HandPanel.UI_HandPanel_C.UpdateItemWidgetHighlightings
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_HandPanel_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.UpdateItemWidgetHighlightings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HandPanel.UI_HandPanel_C.ExecuteUbergraph_UI_HandPanel
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HandPanel_C::ExecuteUbergraph_UI_HandPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.ExecuteUbergraph_UI_HandPanel");

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
