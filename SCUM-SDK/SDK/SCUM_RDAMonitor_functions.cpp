// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_RDAMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RDAMonitor.RDAMonitor_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDAMonitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.shouldAlarmBeOn");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function RDAMonitor.RDAMonitor_C.GetContentSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void URDAMonitor_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetContentSize");

	struct
	{
		struct FVector2D               contentSize;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText URDAMonitor_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RDAMonitor.RDAMonitor_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void URDAMonitor_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function RDAMonitor.RDAMonitor_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void URDAMonitor_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function RDAMonitor.RDAMonitor_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDAMonitor_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URDAMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDAMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::MinimizableWidgetSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::RDAMonitorSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::OnRDAMonitorContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDAMonitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDAMonitor_C::ExecuteUbergraph_RDAMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               newSize                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void URDAMonitor_C::RDASizeChangeEventDispatcher__DelegateSignature(const struct FVector2D& newSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature");

	struct
	{
		struct FVector2D               newSize;
	} params;

	params.newSize = newSize;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
