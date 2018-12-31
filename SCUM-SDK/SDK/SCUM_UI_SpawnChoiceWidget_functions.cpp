// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_SpawnChoiceWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_SpawnChoiceWidget_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Get_PriceText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_SpawnChoiceWidget_C::Get_PriceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Get_PriceText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilityDisabled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_SpawnChoiceWidget_C::GetVisibilityDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilityDisabled");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilitySelectArrow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_SpawnChoiceWidget_C::GetVisibilitySelectArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilitySelectArrow");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_SpawnChoiceWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnChoiceWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.ExecuteUbergraph_UI_SpawnChoiceWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnChoiceWidget_C::ExecuteUbergraph_UI_SpawnChoiceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.ExecuteUbergraph_UI_SpawnChoiceWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C* _this                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_SpawnChoiceWidget_C::OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnClicked__DelegateSignature");

	struct
	{
		class UUI_SpawnChoiceWidget_C* _this;
	} params;

	params._this = _this;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
