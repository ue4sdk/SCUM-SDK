// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BCU_Body_Monitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBCU_Body_Monitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UBCU_Body_Monitor_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize");

	struct
	{
		struct FVector2D               contentSize;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::SetSubTitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBCU_Body_Monitor_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void UBCU_Body_Monitor_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UBCU_Body_Monitor_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnSickness
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOnSickness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnSickness");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffSickness
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOffSickness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffSickness");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnBodyCondition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOnBodyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnBodyCondition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffBodyCondition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOffBodyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffBodyCondition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorContentSizeChangedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::BCUBodyMonitorContentSizeChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorContentSizeChangedEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBCU_Body_Monitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBCU_Body_Monitor_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.WindowContentSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.WindowContentSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBCU_Body_Monitor_C::ExecuteUbergraph_BCU_Body_Monitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UBCU_Body_Monitor_C::BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature");

	struct
	{
		struct FVector2D               Size;
	} params;

	params.Size = Size;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
