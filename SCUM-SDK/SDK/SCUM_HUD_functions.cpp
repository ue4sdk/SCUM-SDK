// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD.HUD_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UHUD_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetVisibility_1");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.IsChatOpen
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHUD_C::IsChatOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsChatOpen");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetCraftingPanel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UCraftingPanelWidget*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCraftingPanelWidget* UHUD_C::GetCraftingPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetCraftingPanel");

	struct
	{
		class UCraftingPanelWidget*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetMainCanvasVisibility
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHUD_C::GetMainCanvasVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetMainCanvasVisibility");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTempDropZoneTimeText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHUD_C::GetTempDropZoneTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTempDropZoneTimeText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetWatermarkText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHUD_C::GetWatermarkText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetWatermarkText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetDebugInfoText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UHUD_C::GetDebugInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetDebugInfoText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTabModeSwitcherWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTabModeSwitcherWidget*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTabModeSwitcherWidget* UHUD_C::GetTabModeSwitcherWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTabModeSwitcherWidget");

	struct
	{
		class UTabModeSwitcherWidget*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetBCURightPanel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UUserWidget* UHUD_C::GetBCURightPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBCURightPanel");

	struct
	{
		class UUserWidget*             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetBCULeftPanel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UUserWidget* UHUD_C::GetBCULeftPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBCULeftPanel");

	struct
	{
		class UUserWidget*             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetHandPanel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UHandPanel*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UHandPanel* UHUD_C::GetHandPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetHandPanel");

	struct
	{
		class UHandPanel*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetInventoryPanel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UInventoryPanelSecondIteration* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UInventoryPanelSecondIteration* UHUD_C::GetInventoryPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetInventoryPanel");

	struct
	{
		class UInventoryPanelSecondIteration* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetVicinityPanel
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UVicinityPanelSecondIteration* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UVicinityPanelSecondIteration* UHUD_C::GetVicinityPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetVicinityPanel");

	struct
	{
		class UVicinityPanelSecondIteration* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.CompleteInitialization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::CompleteInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CompleteInitialization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.StartInitialization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::StartInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartInitialization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.CompleteMonitorsInitialization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::CompleteMonitorsInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CompleteMonitorsInitialization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ShouldCompleteInitialization
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHUD_C::ShouldCompleteInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShouldCompleteInitialization");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.IsEverythingReadyForInitialization
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isEverythingReady              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::IsEverythingReadyForInitialization(bool* isEverythingReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsEverythingReadyForInitialization");

	struct
	{
		bool                           isEverythingReady;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (isEverythingReady != nullptr)
		*isEverythingReady = params.isEverythingReady;
}


// Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHUD_C::IsOwningPrisonerWithComponentsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetOwningPrisoner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APrisoner*               Prisoner                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::GetOwningPrisoner(bool* Success, class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetOwningPrisoner");

	struct
	{
		bool                           Success;
		class APrisoner*               Prisoner;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function HUD.HUD_C.IsOwningPlayerPawnValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isPlayerPawnValid              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::IsOwningPlayerPawnValid(bool* isPlayerPawnValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPlayerPawnValid");

	struct
	{
		bool                           isPlayerPawnValid;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (isPlayerPawnValid != nullptr)
		*isPlayerPawnValid = params.isPlayerPawnValid;
}


// Function HUD.HUD_C.IsOwningPlayerControllerValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isPlayerControllerValid        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::IsOwningPlayerControllerValid(bool* isPlayerControllerValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPlayerControllerValid");

	struct
	{
		bool                           isPlayerControllerValid;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (isPlayerControllerValid != nullptr)
		*isPlayerControllerValid = params.isPlayerControllerValid;
}


// Function HUD.HUD_C.CheckIfReadyForInitialization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::CheckIfReadyForInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CheckIfReadyForInitialization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.AttachHUDMonitors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::AttachHUDMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AttachHUDMonitors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.StartMonitorsInitialization
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::StartMonitorsInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartMonitorsInitialization");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.PrisonerValidation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::PrisonerValidation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.PrisonerValidation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetUpVicinityWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::SetUpVicinityWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetUpVicinityWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetVicinityWidgetFromCode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::SetVicinityWidgetFromCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetVicinityWidgetFromCode");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ShouldSerializeWidgetLayout
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHUD_C::ShouldSerializeWidgetLayout(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShouldSerializeWidgetLayout");

	struct
	{
		class UWidget*                 Widget;
		bool                           ReturnValue;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTopLevelPanelWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPanelWidget* UHUD_C::GetTopLevelPanelWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTopLevelPanelWidget");

	struct
	{
		class UPanelWidget*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD.HUD_C.ShowWarning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWarningType                   Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ShowWarning(EWarningType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowWarning");

	struct
	{
		EWarningType                   Type;
	} params;

	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.RefreshMonitorSizes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::RefreshMonitorSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.RefreshMonitorSizes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetPrisonerToMonitorOnChildren
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisonerToMonitorOnChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ToggleAllMonitorsVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::ToggleAllMonitorsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleAllMonitorsVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.HideLifeIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::HideLifeIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideLifeIndicators");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ShowLifeIndicators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::ShowLifeIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowLifeIndicators");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.HideMonitors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::HideMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideMonitors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ShowMonitors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::ShowMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowMonitors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetupHUDMonitors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::SetupHUDMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetupHUDMonitors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetPrisonerToMonitor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::SetPrisonerToMonitor(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisonerToMonitor");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetDefaultPrisonerToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetDefaultPrisonerToMonitor");

	struct
	{
		bool                           Success;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function HUD.HUD_C.GetDefaultPrisoner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetDefaultPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function HUD.HUD_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UHUD_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnKeyUp");

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


// Function HUD.HUD_C.UpdateCircularProgressBarsPercentages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::UpdateCircularProgressBarsPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateCircularProgressBarsPercentages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.GetPrisonerLifeComponent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrisonerLifeComponent*  LifeComponent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_C::GetPrisonerLifeComponent(class UPrisonerLifeComponent** LifeComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetPrisonerLifeComponent");

	struct
	{
		class UPrisonerLifeComponent*  LifeComponent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (LifeComponent != nullptr)
		*LifeComponent = params.LifeComponent;
}


// Function HUD.HUD_C.OnPerformanceMonitorMaximized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::OnPerformanceMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPerformanceMonitorMaximized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.OnRDAMonitorMaximized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::OnRDAMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnRDAMonitorMaximized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.OnBCUBodyMonitorMaximized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::OnBCUBodyMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnBCUBodyMonitorMaximized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.AddMessageToScreen
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           beep                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::AddMessageToScreen(const struct FText& Text, bool beep)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessageToScreen");

	struct
	{
		struct FText                   Text;
		bool                           beep;
	} params;

	params.Text = Text;
	params.beep = beep;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.AddTeammateName
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UHUD_C::AddTeammateName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddTeammateName");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.RemoveTeammateName
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UHUD_C::RemoveTeammateName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.RemoveTeammateName");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.AddWarning
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWarningType                   warningType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::AddWarning(EWarningType warningType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddWarning");

	struct
	{
		EWarningType                   warningType;
	} params;

	params.warningType = warningType;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.AddObjective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           PlaySound                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ShowNotification               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::AddObjective(class ABP_MissionObjective_C* Objective, bool PlaySound, bool ShowNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddObjective");

	struct
	{
		class ABP_MissionObjective_C*  Objective;
		bool                           PlaySound;
		bool                           ShowNotification;
	} params;

	params.Objective = Objective;
	params.PlaySound = PlaySound;
	params.ShowNotification = ShowNotification;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.AddMessageWithColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMessageType>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UHUD_C::AddMessageWithColor(TEnumAsByte<EMessageType> Type, const struct FText& Text, float Duration, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessageWithColor");

	struct
	{
		TEnumAsByte<EMessageType>      Type;
		struct FText                   Text;
		float                          Duration;
		struct FLinearColor            Color;
	} params;

	params.Type = Type;
	params.Text = Text;
	params.Duration = Duration;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ToggleMonitorsVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_C::ToggleMonitorsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleMonitorsVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ClearTeammateNames
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_C::ClearTeammateNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ClearTeammateNames");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ObjectiveChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ObjectiveChanged(class ABP_MissionObjective_C* sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ObjectiveChanged");

	struct
	{
		class ABP_MissionObjective_C*  sender;
	} params;

	params.sender = sender;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.UpdateAttributesHistory
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::UpdateAttributesHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateAttributesHistory");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.AddChatLine
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 string                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// EChatType                      chatType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::AddChatLine(const struct FString& string, EChatType chatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddChatLine");

	struct
	{
		struct FString                 string;
		EChatType                      chatType;
	} params;

	params.string = string;
	params.chatType = chatType;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetPrisoner
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.Shake
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::Shake()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Shake");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetMainCanvasVisibility
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::SetMainCanvasVisibility(bool visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetMainCanvasVisibility");

	struct
	{
		bool                           visible;
	} params;

	params.visible = visible;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SwitchTabMode
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::SwitchTabMode(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SwitchTabMode");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ShowNotification
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ShowNotification(const struct FString& Message, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowNotification");

	struct
	{
		struct FString                 Message;
		float                          Duration;
	} params;

	params.Message = Message;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ClearNotifications
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_C::ClearNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ClearNotifications");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.SetTabEnabled
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETabMode                       Tab                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::SetTabEnabled(ETabMode Tab, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetTabEnabled");

	struct
	{
		ETabMode                       Tab;
		bool                           Value;
	} params;

	params.Tab = Tab;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ShowKillFeedNotification
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   prefix                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   characterName                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   suffix                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ping                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ShowKillFeedNotification(const struct FText& prefix, const struct FText& characterName, const struct FText& suffix, bool ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowKillFeedNotification");

	struct
	{
		struct FText                   prefix;
		struct FText                   characterName;
		struct FText                   suffix;
		bool                           ping;
	} params;

	params.prefix = prefix;
	params.characterName = characterName;
	params.suffix = suffix;
	params.ping = ping;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.OpenChat
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_C::OpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OpenChat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.CloseChat
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_C::CloseChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CloseChat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.AddMessage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMessageType>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::AddMessage(TEnumAsByte<EMessageType> Type, const struct FText& Text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessage");

	struct
	{
		TEnumAsByte<EMessageType>      Type;
		struct FText                   Text;
		float                          Duration;
	} params;

	params.Type = Type;
	params.Text = Text;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD.HUD_C.ExecuteUbergraph_HUD
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_C::ExecuteUbergraph_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ExecuteUbergraph_HUD");

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
