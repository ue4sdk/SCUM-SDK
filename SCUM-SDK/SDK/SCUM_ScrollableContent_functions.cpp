// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ScrollableContent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScrollableContent.ScrollableContent_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UScrollableContent_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ScrollableContent.ScrollableContent_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void UScrollableContent_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollableContent_C::ResetInputChatLineString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.SetInputChatLineString
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   chatLineStringToSet            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UScrollableContent_C::SetInputChatLineString(const struct FText& chatLineStringToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.SetInputChatLineString");

	struct
	{
		struct FText                   chatLineStringToSet;
	} params;

	params.chatLineStringToSet = chatLineStringToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.GetInputChatLineText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   chatLineString                 (CPF_Parm, CPF_OutParm)

void UScrollableContent_C::GetInputChatLineText(struct FText* chatLineString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetInputChatLineText");

	struct
	{
		struct FText                   chatLineString;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (chatLineString != nullptr)
		*chatLineString = params.chatLineString;
}


// Function ScrollableContent.ScrollableContent_C.PrintChatMessages
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollableContent_C::PrintChatMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.PrintChatMessages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UScrollableContent_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ScrollableContent.ScrollableContent_C.AutoCreateContent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollableContent_C::AutoCreateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.AutoCreateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollableContent_C::PopulateMessageStrings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.AddTextLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   textToSet                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// bool                           scrollToTheEnd                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           lineAdded                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollableContent_C::AddTextLine(const struct FText& textToSet, const struct FLinearColor& Color, bool scrollToTheEnd, bool* lineAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.AddTextLine");

	struct
	{
		struct FText                   textToSet;
		struct FLinearColor            Color;
		bool                           scrollToTheEnd;
		bool                           lineAdded;
	} params;

	params.textToSet = textToSet;
	params.Color = Color;
	params.scrollToTheEnd = scrollToTheEnd;

	UObject::ProcessEvent(fn, &params);

	if (lineAdded != nullptr)
		*lineAdded = params.lineAdded;
}


// Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UScrollableContent_C::OnMouseButtonDownOnConsole(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole");

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


// Function ScrollableContent.ScrollableContent_C.StartDrag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScrollableContent_C::StartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.StartDrag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollableContent_C::BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScrollableContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollableContent_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollableContent_C::ExecuteUbergraph_ScrollableContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent");

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
