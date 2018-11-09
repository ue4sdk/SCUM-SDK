// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_TabModeTabsContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETabMode                       Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUI_TabModeTab_C*        Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_TabModeTabsContainer_C::GetTabFromTabMode(ETabMode Tab, class UUI_TabModeTab_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode");

	struct
	{
		ETabMode                       Tab;
		class UUI_TabModeTab_C*        Result;
	} params;

	params.Tab = Tab;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETabMode                       Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TabModeTabsContainer_C::SetTabEnabled(ETabMode Tab, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled");

	struct
	{
		ETabMode                       Tab;
		bool                           Enabled;
	} params;

	params.Tab = Tab;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_TabModeTab_C*        Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// ETabMode                       tabMode                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TabModeTabsContainer_C::OpenSpecifiedTab(class UUI_TabModeTab_C* Tab, ETabMode tabMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab");

	struct
	{
		class UUI_TabModeTab_C*        Tab;
		ETabMode                       tabMode;
	} params;

	params.Tab = Tab;
	params.tabMode = tabMode;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TabModeTabsContainer_C::SelectTab(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_TabModeTabsContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_TabModeTabsContainer_C::BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TabModeTabsContainer_C::ExecuteUbergraph_UI_TabModeTabsContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer");

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
