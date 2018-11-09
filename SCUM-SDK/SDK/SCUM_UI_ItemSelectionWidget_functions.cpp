// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ItemSelectionWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.Get_ItemName_ColorAndOpacity
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UUI_ItemSelectionWidget_C::Get_ItemName_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.Get_ItemName_ColorAndOpacity");

	struct
	{
		struct FSlateColor             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionWidget_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetSelected");

	struct
	{
		bool                           Selected;
	} params;

	params.Selected = Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.On_Selection_MouseButtonDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_ItemSelectionWidget_C::On_Selection_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.On_Selection_MouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.UpdateButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ItemSelectionWidget_C::UpdateButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.UpdateButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.GetData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UItemSelection*          Data                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionWidget_C::GetData(class UItemSelection** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.GetData");

	struct
	{
		class UItemSelection*          Data;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Data != nullptr)
		*Data = params.Data;
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSelection*          Data                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemSelectionWidget_C::SetData(class UItemSelection* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.SetData");

	struct
	{
		class UItemSelection*          Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ItemSelectionWidget_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionWidget.UI_ItemSelectionWidget_C.OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
