// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventPanelWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_GameEventPanelWidget_C::GetDropdownVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventPanelWidget_C::RestoreSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Get_NextEventBorder_BrushColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UUI_GameEventPanelWidget_C::Get_NextEventBorder_BrushColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Get_NextEventBorder_BrushColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Get_CurrentEventBorder_BrushColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UUI_GameEventPanelWidget_C::Get_CurrentEventBorder_BrushColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Get_CurrentEventBorder_BrushColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UComboBoxString*         Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TArray<class AGameEventBase*>  GameEvents                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FString                 Selected                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_GameEventPanelWidget_C::UpdateSelection(class UComboBoxString* Dropdown, const struct FString& Selected, TArray<class AGameEventBase*>* GameEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection");

	struct
	{
		class UComboBoxString*         Dropdown;
		TArray<class AGameEventBase*>  GameEvents;
		struct FString                 Selected;
	} params;

	params.Dropdown = Dropdown;
	params.Selected = Selected;

	UObject::ProcessEvent(fn, &params);

	if (GameEvents != nullptr)
		*GameEvents = params.GameEvents;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AGameEventBase*          gameEvent                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventPanelWidget_C::GetSelectedEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent");

	struct
	{
		class AGameEventBase*          gameEvent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (gameEvent != nullptr)
		*gameEvent = params.gameEvent;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AGameEventBase*          gameEvent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 OptionString                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_GameEventPanelWidget_C::GetGameEventOptionString(class AGameEventBase* gameEvent, struct FString* OptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString");

	struct
	{
		class AGameEventBase*          gameEvent;
		struct FString                 OptionString;
	} params;

	params.gameEvent = gameEvent;

	UObject::ProcessEvent(fn, &params);

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Current                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventPanelWidget_C::SelectEvent(int Index, bool Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent");

	struct
	{
		int                            Index;
		bool                           Current;
	} params;

	params.Index = Index;
	params.Current = Current;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameEventBase*          gameEvent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventPanelWidget_C::AddCurrentEvent(class AGameEventBase* gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent");

	struct
	{
		class AGameEventBase*          gameEvent;
	} params;

	params.gameEvent = gameEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventPanelWidget_C::EmptyLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AGameEventBase*          gameEvent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventPanelWidget_C::AddAnnouncedEvent(class AGameEventBase* gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent");

	struct
	{
		class AGameEventBase*          gameEvent;
	} params;

	params.gameEvent = gameEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventPanelWidget_C::OnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventPanelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnCurrentEventComboBoxOpening
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventPanelWidget_C::OnCurrentEventComboBoxOpening()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnCurrentEventComboBoxOpening");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnNextEventComboBoxOpening
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventPanelWidget_C::OnNextEventComboBoxOpening()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnNextEventComboBoxOpening");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnCurrentEventComboBoxSelectionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventPanelWidget_C::OnCurrentEventComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnCurrentEventComboBoxSelectionChanged");

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<ESelectInfo>       SelectionType;
	} params;

	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnNextEventsComboBoxSelectionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventPanelWidget_C::OnNextEventsComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnNextEventsComboBoxSelectionChanged");

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<ESelectInfo>       SelectionType;
	} params;

	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventPanelWidget_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventPanelWidget_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventPanelWidget_C::ExecuteUbergraph_UI_GameEventPanelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget");

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
