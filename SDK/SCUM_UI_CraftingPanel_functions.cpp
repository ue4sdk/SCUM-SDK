// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CraftingPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UUI_CraftingPanel_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1");

	struct
	{
		struct FSlateColor             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_CraftingPanel_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_CraftingPanel_C::GetIsCraftButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URetainerBox*            RetainerBox                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UWidget*                 Box                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CraftingPanel_C::UpdateParameter(class URetainerBox* RetainerBox, class UWidget* Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter");

	struct
	{
		class URetainerBox*            RetainerBox;
		class UWidget*                 Box;
	} params;

	params.RetainerBox = RetainerBox;
	params.Box = Box;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CraftingPanel_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_ExpandableContainer_C* container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           IsMinimized                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingPanel_C::BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C* container, bool IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature");

	struct
	{
		class UUI_ExpandableContainer_C* container;
		bool                           IsMinimized;
	} params;

	params.container = container;
	params.IsMinimized = IsMinimized;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_ExpandableContainer_C* container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           IsMinimized                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingPanel_C::BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C* container, bool IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature");

	struct
	{
		class UUI_ExpandableContainer_C* container;
		bool                           IsMinimized;
	} params;

	params.container = container;
	params.IsMinimized = IsMinimized;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CraftingPanel_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CraftingPanel_C::ExecuteUbergraph_UI_CraftingPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel");

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
