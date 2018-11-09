// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_OptionsSlider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDoubleClick");

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDown");

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


// Function UI_OptionsSlider.UI_OptionsSlider_C.GetValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_Parm, CPF_OutParm)

void UUI_OptionsSlider_C::GetValue(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.GetValue");

	struct
	{
		struct FText                   Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.ChangeValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_OptionsSlider_C::ChangeValue(int Index, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.ChangeValue");

	struct
	{
		int                            Index;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_OptionsSlider_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.SetTitle");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsNumbers
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            FirstIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            lastIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_OptionsSlider_C::InitAsNumbers(int FirstIndex, int lastIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsNumbers");

	struct
	{
		int                            FirstIndex;
		int                            lastIndex;
	} params;

	params.FirstIndex = FirstIndex;
	params.lastIndex = lastIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsFlag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_OptionsSlider_C::InitAsFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsFlag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.AddKeyValuePair
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_OptionsSlider_C::AddKeyValuePair(const struct FText& Key, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.AddKeyValuePair");

	struct
	{
		struct FText                   Key;
		struct FText                   Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.AddValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_OptionsSlider_C::AddValue(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.AddValue");

	struct
	{
		struct FText                   Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.ClearValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_OptionsSlider_C::ClearValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.ClearValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.SetValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_OptionsSlider_C::SetValue(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.SetValue");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.Increase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_OptionsSlider_C::Increase()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.Increase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.Decrease
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_OptionsSlider_C::Decrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.Decrease");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusReceived");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FFocusEvent             InFocusEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedHigher
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnClickedHigher(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedHigher");

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


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedLower
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnClickedLower(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedLower");

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


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_OptionsSlider_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_OptionsSlider_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusLost");

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params;

	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_OptionsSlider_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_OptionsSlider_C::BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_OptionsSlider_C::BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_OptionsSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.ExecuteUbergraph_UI_OptionsSlider
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_OptionsSlider_C::ExecuteUbergraph_UI_OptionsSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.ExecuteUbergraph_UI_OptionsSlider");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnValueChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_OptionsSlider_C::OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
