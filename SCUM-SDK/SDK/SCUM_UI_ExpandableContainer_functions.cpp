// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ExpandableContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_ExpandableContainer_C* container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_ExpandableContainer_C::SetParentContainer(class UUI_ExpandableContainer_C* container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer");

	struct
	{
		class UUI_ExpandableContainer_C* container;
	} params;

	params.container = container;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::DecrementAlarmsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::IncrementAlarmsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_ExpandableContainer_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ExpandableContainer_C::ExecuteUbergraph_UI_ExpandableContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_ExpandableContainer_C* container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           IsMinimized                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ExpandableContainer_C::OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C* container, bool IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature");

	struct
	{
		class UUI_ExpandableContainer_C* container;
		bool                           IsMinimized;
	} params;

	params.container = container;
	params.IsMinimized = IsMinimized;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
