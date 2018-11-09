// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BodyCondition_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BodyCondition.BodyCondition_C.CheckBloodVolumeAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          currentBlood                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          initialBlood                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MinBlood                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyCondition_C::CheckBloodVolumeAlarm(float currentBlood, float initialBlood, float MinBlood, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckBloodVolumeAlarm");

	struct
	{
		float                          currentBlood;
		float                          initialBlood;
		float                          MinBlood;
		int                            alarmCode;
	} params;

	params.currentBlood = currentBlood;
	params.initialBlood = initialBlood;
	params.MinBlood = MinBlood;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckTemperatureAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          temperatureDeviation           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Temperature                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyCondition_C::CheckTemperatureAlarm(float temperatureDeviation, float Temperature, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckTemperatureAlarm");

	struct
	{
		float                          temperatureDeviation;
		float                          Temperature;
		int                            alarmCode;
	} params;

	params.temperatureDeviation = temperatureDeviation;
	params.Temperature = Temperature;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckTeethNumberAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Age                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TeethNumber                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyCondition_C::CheckTeethNumberAlarm(float Age, float TeethNumber, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckTeethNumberAlarm");

	struct
	{
		float                          Age;
		float                          TeethNumber;
		int                            alarmCode;
	} params;

	params.Age = Age;
	params.TeethNumber = TeethNumber;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckBFPAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          bodyFatPercentage              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          bodyFatAlarmThreshold          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyCondition_C::CheckBFPAlarm(float bodyFatPercentage, float bodyFatAlarmThreshold, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckBFPAlarm");

	struct
	{
		float                          bodyFatPercentage;
		float                          bodyFatAlarmThreshold;
		int                            alarmCode;
	} params;

	params.bodyFatPercentage = bodyFatPercentage;
	params.bodyFatAlarmThreshold = bodyFatAlarmThreshold;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.SetMeasurementUnits
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::SetMeasurementUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.SetMeasurementUnits");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.UpdateParameterLines
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.UpdateParameterLines");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBodyCondition_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BodyCondition.BodyCondition_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void UBodyCondition_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function BodyCondition.BodyCondition_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UBodyCondition_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BodyCondition.BodyCondition_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyCondition_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBodyCondition_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.UpdateContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.UpdateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.ShouldActivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::ShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.ShouldDeactivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::ShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldDeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.ShouldActivateBFPAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::ShouldActivateBFPAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldActivateBFPAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.ExecuteUbergraph_BodyCondition
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyCondition_C::ExecuteUbergraph_BodyCondition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ExecuteUbergraph_BodyCondition");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::AlarmOffBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyCondition.BodyCondition_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyCondition_C::AlarmOnBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
