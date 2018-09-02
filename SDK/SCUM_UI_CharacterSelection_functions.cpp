// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CharacterSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_CharacterSelection_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown");

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


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::CancelCriminalRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::CancelDeleteCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CharacterSelection_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CharacterSlot_C*     Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CharacterSelection_C::OnCharacterDeleted(class UUI_CharacterSlot_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted");

	struct
	{
		class UUI_CharacterSlot_C*     Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDbUserProfile*          userProfile                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterSelection_C::OnCharacterSelected(class UDbUserProfile* userProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected");

	struct
	{
		class UDbUserProfile*          userProfile;
	} params;

	params.userProfile = userProfile;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CharacterSelection_C::ExecuteUbergraph_UI_CharacterSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection");

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
