// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MinimizableWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMinimizableWidget_C::OnMouseDoubleClick_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1");

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


// Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               newMinWidgetSize               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UMinimizableWidget_C::SetMinimizableWidgetSize(const struct FVector2D& newMinWidgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize");

	struct
	{
		struct FVector2D               newMinWidgetSize;
	} params;

	params.newMinWidgetSize = newMinWidgetSize;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               widgetSize                     (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UMinimizableWidget_C::GetMinimizableWidgetSize(struct FVector2D* widgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize");

	struct
	{
		struct FVector2D               widgetSize;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (widgetSize != nullptr)
		*widgetSize = params.widgetSize;
}


// Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldSetAlarmColorOn          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinimizableWidget_C::SetAlarmColor(bool shouldSetAlarmColorOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor");

	struct
	{
		bool                           shouldSetAlarmColorOn;
	} params;

	params.shouldSetAlarmColorOn = shouldSetAlarmColorOn;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::SetInitialIconsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.Minimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Minimize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.Maximize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Maximize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMinimizableWidget_C::OnMaximizeImageMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown");

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


// Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMinimizableWidget_C::OnMinimizeImageMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown");

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


// Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::Event_Widget_Size_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinimizableWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::Event_Widget_Maximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMinimizableWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::Event_Widget_Minimized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinimizableWidget_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinimizableWidget_C::ExecuteUbergraph_MinimizableWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinimizableWidget_C::WidgetSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
