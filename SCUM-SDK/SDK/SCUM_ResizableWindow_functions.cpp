// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ResizableWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 displayLabelName               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// bool                           footerV2Activity               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           enableResizability             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   titleToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UHUD_C*                  parentHUDRef                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UResizableWindow_C::InitializeHUDMonitor(const struct FString& displayLabelName, bool footerV2Activity, bool enableResizability, const struct FText& titleToSet, class UHUD_C* parentHUDRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor");

	struct
	{
		struct FString                 displayLabelName;
		bool                           footerV2Activity;
		bool                           enableResizability;
		struct FText                   titleToSet;
		class UHUD_C*                  parentHUDRef;
	} params;

	params.displayLabelName = displayLabelName;
	params.footerV2Activity = footerV2Activity;
	params.enableResizability = enableResizability;
	params.titleToSet = titleToSet;
	params.parentHUDRef = parentHUDRef;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.SaveHUDLayout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::SaveHUDLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveHUDLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.GetParentHUD
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UHUD_C*                  parentHUD                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UResizableWindow_C::GetParentHUD(class UHUD_C** parentHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetParentHUD");

	struct
	{
		class UHUD_C*                  parentHUD;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (parentHUD != nullptr)
		*parentHUD = params.parentHUD;
}


// Function ResizableWindow.ResizableWindow_C.SetParentHUD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHUD_C*                  parentHUD                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UResizableWindow_C::SetParentHUD(class UHUD_C* parentHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetParentHUD");

	struct
	{
		class UHUD_C*                  parentHUD;
	} params;

	params.parentHUD = parentHUD;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.GetSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UResizableWindow_C::GetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetSize");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.GetPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UResizableWindow_C::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetPosition");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.adjustPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               positionToAdjust               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FGeometry               localGeometry                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               Output                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UResizableWindow_C::adjustPosition(const struct FVector2D& positionToAdjust, const struct FGeometry& localGeometry, struct FVector2D* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.adjustPosition");

	struct
	{
		struct FVector2D               positionToAdjust;
		struct FGeometry               localGeometry;
		struct FVector2D               Output;
	} params;

	params.positionToAdjust = positionToAdjust;
	params.localGeometry = localGeometry;

	UObject::ProcessEvent(fn, &params);

	if (Output != nullptr)
		*Output = params.Output;
}


// Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::MaximizeMinimizableWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.HasAnyChildren
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UPanelWidget*            PanelWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UResizableWindow_C::HasAnyChildren(class UPanelWidget* PanelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.HasAnyChildren");

	struct
	{
		class UPanelWidget*            PanelWidget;
		bool                           ReturnValue;
	} params;

	params.PanelWidget = PanelWidget;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UResizableWindow_C::OnHeaderDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick");

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


// Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       contentWidgetRef               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FText                   titleToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UResizableWindow_C::SetUpResizableWindowWithChildRef(class UWindowsContent_C* contentWidgetRef, const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef");

	struct
	{
		class UWindowsContent_C*       contentWidgetRef;
		struct FText                   titleToSet;
	} params;

	params.contentWidgetRef = contentWidgetRef;
	params.titleToSet = titleToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::AdjustSizeToContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.SetSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               newSize                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UResizableWindow_C::SetSize(const struct FVector2D& newSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetSize");

	struct
	{
		struct FVector2D               newSize;
	} params;

	params.newSize = newSize;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.GetContentSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UResizableWindow_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetContentSize");

	struct
	{
		struct FVector2D               contentSize;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           enableResizability             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::SetResizeEnableLocked(bool enableResizability)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked");

	struct
	{
		bool                           enableResizability;
	} params;

	params.enableResizability = enableResizability;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldActivateAlarmColor       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::ActivateAlarmColor(bool shouldActivateAlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor");

	struct
	{
		bool                           shouldActivateAlarmColor;
	} params;

	params.shouldActivateAlarmColor = shouldActivateAlarmColor;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ShowBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::ShowBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ShowBorder");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UResizableWindow_C::isResizableWindowSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       windowsContentWidget           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UResizableWindow_C::GetWindowsContentWidget(class UWindowsContent_C** windowsContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget");

	struct
	{
		class UWindowsContent_C*       windowsContentWidget;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (windowsContentWidget != nullptr)
		*windowsContentWidget = params.windowsContentWidget;
}


// Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       windowsContentWidget           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UResizableWindow_C::SetWindowsContentWidget(class UWindowsContent_C* windowsContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget");

	struct
	{
		class UWindowsContent_C*       windowsContentWidget;
	} params;

	params.windowsContentWidget = windowsContentWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldBeActive                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::SetFooterV2Activity(bool shouldBeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity");

	struct
	{
		bool                           shouldBeActive;
	} params;

	params.shouldBeActive = shouldBeActive;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ResetFlags
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::ResetFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetFlags");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Maximize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Minimize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UResizableWindow_C::GetContentAreaSlotDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::SaveCurrentContentAreaSlotSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  contentWidgetClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   titleToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UResizableWindow_C::SetUpResizableWindow(class UClass* contentWidgetClass, const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow");

	struct
	{
		class UClass*                  contentWidgetClass;
		struct FText                   titleToSet;
	} params;

	params.contentWidgetClass = contentWidgetClass;
	params.titleToSet = titleToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  WindowsContentClass            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::SetContentWidgetClass(class UClass* WindowsContentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass");

	struct
	{
		class UClass*                  WindowsContentClass;
	} params;

	params.WindowsContentClass = WindowsContentClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       contentWidgetRef               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UResizableWindow_C::AttachContentWidgetRef(class UWindowsContent_C* contentWidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef");

	struct
	{
		class UWindowsContent_C*       contentWidgetRef;
	} params;

	params.contentWidgetRef = contentWidgetRef;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.AttachContentWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  contentWidgetClass             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::AttachContentWidget(class UClass* contentWidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AttachContentWidget");

	struct
	{
		class UClass*                  contentWidgetClass;
	} params;

	params.contentWidgetClass = contentWidgetClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FPointerEvent           LocalMouseEvent                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector2D               LastMousePosition              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UResizableWindow_C::CalculateMouseDelta(const struct FPointerEvent& LocalMouseEvent, const struct FVector2D& LastMousePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta");

	struct
	{
		struct FPointerEvent           LocalMouseEvent;
		struct FVector2D               LastMousePosition;
		struct FVector2D               ReturnValue;
	} params;

	params.LocalMouseEvent = LocalMouseEvent;
	params.LastMousePosition = LastMousePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.IsOffscreen
// (FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FPointerEvent           Input                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UResizableWindow_C::IsOffscreen(const struct FPointerEvent& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.IsOffscreen");

	struct
	{
		struct FPointerEvent           Input;
		bool                           ReturnValue;
	} params;

	params.Input = Input;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UResizableWindow_C::OnMouseButtonDownOnIRMinimize(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize");

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


// Function ResizableWindow.ResizableWindow_C.SetResizeColorHover
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UResizableWindow_C::SetResizeColorHover(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetResizeColorHover");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           DragEnabled                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::ToggleDragEnabled(bool DragEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled");

	struct
	{
		bool                           DragEnabled;
	} params;

	params.DragEnabled = DragEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ResizeEnabled                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::ToggleResizeEnabled(bool ResizeEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled");

	struct
	{
		bool                           ResizeEnabled;
	} params;

	params.ResizeEnabled = ResizeEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.DetermineNewSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Original                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               New                            (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UResizableWindow_C::DetermineNewSize(const struct FVector2D& Original, const struct FVector2D& Delta, struct FVector2D* New)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.DetermineNewSize");

	struct
	{
		struct FVector2D               Original;
		struct FVector2D               Delta;
		struct FVector2D               New;
	} params;

	params.Original = Original;
	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);

	if (New != nullptr)
		*New = params.New;
}


// Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::MouseButtonUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::ResetVariablesToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UResizableWindow_C::OnResizeAreaMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown");

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


// Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UResizableWindow_C::OnHeaderMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown");

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


// Function ResizableWindow.ResizableWindow_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UResizableWindow_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseMove");

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


// Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UResizableWindow_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp");

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


// Function ResizableWindow.ResizableWindow_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature
// (FUNC_BlueprintEvent)

void UResizableWindow_C::BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature
// (FUNC_BlueprintEvent)

void UResizableWindow_C::BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::Event_RDA_Monitor_Size_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UResizableWindow_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent");

	struct
	{
		struct FGeometry               Geometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.OnMaximized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::OnMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMaximized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.SaveLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> Attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UResizableWindow_C::SaveLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> Attributes;
	} params;

	params.Attributes = Attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.LoadLayout
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> Attributes                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UResizableWindow_C::LoadLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.LoadLayout");

	struct
	{
		TScriptInterface<class UAttributeMapInterface> Attributes;
	} params;

	params.Attributes = Attributes;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ResetLayout
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetLayout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature
// (FUNC_BlueprintEvent)

void UResizableWindow_C::BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature
// (FUNC_BlueprintEvent)

void UResizableWindow_C::BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UResizableWindow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UResizableWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   titleToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UResizableWindow_C::SetTitle(const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetTitle");

	struct
	{
		struct FText                   titleToSet;
	} params;

	params.titleToSet = titleToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UResizableWindow_C::ExecuteUbergraph_ResizableWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UResizableWindow_C::OnHeaderDoubleClickDispatcher__DelegateSignature(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature");

	struct
	{
		struct FGeometry               Geometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::ContentMaximizedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UResizableWindow_C::ContentSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
