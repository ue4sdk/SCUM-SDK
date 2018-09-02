// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_SortByButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SortByButton.UI_SortByButton_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_SortByButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SortByButton.UI_SortByButton_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_SortByButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SortByButton.UI_SortByButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SortByButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SortByButton.UI_SortByButton_C.SetType
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESortByTypes>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SortByButton_C::SetType(TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.SetType");

	struct
	{
		TEnumAsByte<ESortByTypes>      Type;
	} params;

	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SortByButton.UI_SortByButton_C.ExecuteUbergraph_UI_SortByButton
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SortByButton_C::ExecuteUbergraph_UI_SortByButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.ExecuteUbergraph_UI_SortByButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SortByButton.UI_SortByButton_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SortByButton_C::OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SortByButton.UI_SortByButton_C.OnClicked__DelegateSignature");

	struct
	{
		class UUI_SortByButton_C*      Button;
		TEnumAsByte<ESortByTypes>      Type;
	} params;

	params.Button = Button;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
