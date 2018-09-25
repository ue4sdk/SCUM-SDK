// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BaseProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BaseProgressBar.BaseProgressBar_C.PercentageToUITextWOPercSign
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   percentageString               (CPF_Parm, CPF_OutParm)

void UBaseProgressBar_C::PercentageToUITextWOPercSign(float Value, struct FText* percentageString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToUITextWOPercSign");

	struct
	{
		float                          Value;
		struct FText                   percentageString;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	if (percentageString != nullptr)
		*percentageString = params.percentageString;
}


// Function BaseProgressBar.BaseProgressBar_C.GetAlarmThresholdHigh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          alarmThreshold                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::GetAlarmThresholdHigh(float* alarmThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetAlarmThresholdHigh");

	struct
	{
		float                          alarmThreshold;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (alarmThreshold != nullptr)
		*alarmThreshold = params.alarmThreshold;
}


// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHigh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          alarmThreshold                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::SetAlarmThresholdHigh(float alarmThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHigh");

	struct
	{
		float                          alarmThreshold;
	} params;

	params.alarmThreshold = alarmThreshold;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThresholdHigh
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::CheckAlarmThresholdHigh(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThresholdHigh");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHighActive
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldBeActive                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::SetAlarmThresholdHighActive(bool shouldBeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHighActive");

	struct
	{
		bool                           shouldBeActive;
	} params;

	params.shouldBeActive = shouldBeActive;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.GetIsAlarmOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isAlarmOn                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::GetIsAlarmOn(bool* isAlarmOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetIsAlarmOn");

	struct
	{
		bool                           isAlarmOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (isAlarmOn != nullptr)
		*isAlarmOn = params.isAlarmOn;
}


// Function BaseProgressBar.BaseProgressBar_C.PercentageToUIText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   percentageString               (CPF_Parm, CPF_OutParm)

void UBaseProgressBar_C::PercentageToUIText(float Value, struct FText* percentageString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToUIText");

	struct
	{
		float                          Value;
		struct FText                   percentageString;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	if (percentageString != nullptr)
		*percentageString = params.percentageString;
}


// Function BaseProgressBar.BaseProgressBar_C.SetClamping
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldEnableClamping           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::SetClamping(bool shouldEnableClamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetClamping");

	struct
	{
		bool                           shouldEnableClamping;
	} params;

	params.shouldEnableClamping = shouldEnableClamping;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.PercentageToText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   percentageText                 (CPF_Parm, CPF_OutParm)

void UBaseProgressBar_C::PercentageToText(float Value, struct FText* percentageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToText");

	struct
	{
		float                          Value;
		struct FText                   percentageText;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	if (percentageText != nullptr)
		*percentageText = params.percentageText;
}


// Function BaseProgressBar.BaseProgressBar_C.GetPreviousPercentage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          prevPercentage                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::GetPreviousPercentage(float* prevPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetPreviousPercentage");

	struct
	{
		float                          prevPercentage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (prevPercentage != nullptr)
		*prevPercentage = params.prevPercentage;
}


// Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThreshold
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::CheckAlarmThreshold(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThreshold");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOn
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseProgressBar_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOff
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseProgressBar_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.GetAlarmThreshold
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          alarmThreshold                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::GetAlarmThreshold(float* alarmThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetAlarmThreshold");

	struct
	{
		float                          alarmThreshold;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (alarmThreshold != nullptr)
		*alarmThreshold = params.alarmThreshold;
}


// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThreshold
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          alarmThreshold                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::SetAlarmThreshold(float alarmThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetAlarmThreshold");

	struct
	{
		float                          alarmThreshold;
	} params;

	params.alarmThreshold = alarmThreshold;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.PercentageToString
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 percentageString               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBaseProgressBar_C::PercentageToString(float Value, struct FString* percentageString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToString");

	struct
	{
		float                          Value;
		struct FString                 percentageString;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	if (percentageString != nullptr)
		*percentageString = params.percentageString;
}


// Function BaseProgressBar.BaseProgressBar_C.PercentageToInt
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            percentageInt                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::PercentageToInt(float Value, int* percentageInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.PercentageToInt");

	struct
	{
		float                          Value;
		int                            percentageInt;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	if (percentageInt != nullptr)
		*percentageInt = params.percentageInt;
}


// Function BaseProgressBar.BaseProgressBar_C.SetPreviousPercentage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          previousPercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::SetPreviousPercentage(float previousPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetPreviousPercentage");

	struct
	{
		float                          previousPercentage;
	} params;

	params.previousPercentage = previousPercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.SavePercentageAsPrevious
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseProgressBar_C::SavePercentageAsPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SavePercentageAsPrevious");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.OnPercentageChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBaseProgressBar_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.OnPercentageChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.SetTitleBase
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBaseProgressBar_C::SetTitleBase(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetTitleBase");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.GetTitleBase
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Title                          (CPF_Parm, CPF_OutParm)

void UBaseProgressBar_C::GetTitleBase(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetTitleBase");

	struct
	{
		struct FText                   Title;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Title != nullptr)
		*Title = params.Title;
}


// Function BaseProgressBar.BaseProgressBar_C.IncreasePercentage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          IncreasePercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::IncreasePercentage(float IncreasePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.IncreasePercentage");

	struct
	{
		float                          IncreasePercentage;
	} params;

	params.IncreasePercentage = IncreasePercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.decreasePercentage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          decreasePercentage             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::decreasePercentage(float decreasePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.decreasePercentage");

	struct
	{
		float                          decreasePercentage;
	} params;

	params.decreasePercentage = decreasePercentage;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.SetPercentage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          percentInputToSet              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::SetPercentage(float percentInputToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.SetPercentage");

	struct
	{
		float                          percentInputToSet;
	} params;

	params.percentInputToSet = percentInputToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function BaseProgressBar.BaseProgressBar_C.GetPercentage
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          percentage                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBaseProgressBar_C::GetPercentage(float* percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseProgressBar.BaseProgressBar_C.GetPercentage");

	struct
	{
		float                          percentage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (percentage != nullptr)
		*percentage = params.percentage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
