// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameMenu_C::Get_CommitSuicide_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::SaveHUDLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_GameMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnPreviewKeyDown");

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


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_GameMenu_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDoubleClick");

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


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_GameMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDown");

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


// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_GameMenu_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonUp");

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


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.Remove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Remove");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnESC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnESC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnResume
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::OnResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnResume");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameMenu_C::BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameMenu_C::BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_GameMenu_C::BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnQuitCanceled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::OnQuitCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnQuitCanceled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnQuit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::OnQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnQuit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::OnLeaveToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenuCanceled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::OnLeaveToMainMenuCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenuCanceled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnSuicideCanceled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::OnSuicideCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnSuicideCanceled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.OnSuicideConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameMenu_C::OnSuicideConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.OnSuicideConfirmed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameMenu_C::ExecuteUbergraph_UI_GameMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu");

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
