// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LevelAttributes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelAttributes.LevelAttributes_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULevelAttributes_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.shouldAlarmBeOn");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function LevelAttributes.LevelAttributes_C.UpdateReferentValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          lastReferentValue              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          currentValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          tollerance                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          timeSinceLastUpdate            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          UpdateInterval                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           referentValueUpdated           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULevelAttributes_C::UpdateReferentValue(float currentValue, float tollerance, float UpdateInterval, float* lastReferentValue, float* timeSinceLastUpdate, bool* referentValueUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.UpdateReferentValue");

	struct
	{
		float                          lastReferentValue;
		float                          currentValue;
		float                          tollerance;
		float                          timeSinceLastUpdate;
		float                          UpdateInterval;
		bool                           referentValueUpdated;
	} params;

	params.currentValue = currentValue;
	params.tollerance = tollerance;
	params.UpdateInterval = UpdateInterval;

	UObject::ProcessEvent(fn, &params);

	if (lastReferentValue != nullptr)
		*lastReferentValue = params.lastReferentValue;
	if (timeSinceLastUpdate != nullptr)
		*timeSinceLastUpdate = params.timeSinceLastUpdate;
	if (referentValueUpdated != nullptr)
		*referentValueUpdated = params.referentValueUpdated;
}


// Function LevelAttributes.LevelAttributes_C.InitAttributeValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::InitAttributeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.InitAttributeValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.CalculateChangeSpeed
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          currentValue                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          lastValue                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          UpdateInterval                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Speed                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULevelAttributes_C::CalculateChangeSpeed(float currentValue, float lastValue, float UpdateInterval, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.CalculateChangeSpeed");

	struct
	{
		float                          currentValue;
		float                          lastValue;
		float                          UpdateInterval;
		float                          Speed;
	} params;

	params.currentValue = currentValue;
	params.lastValue = lastValue;
	params.UpdateInterval = UpdateInterval;

	UObject::ProcessEvent(fn, &params);

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function LevelAttributes.LevelAttributes_C.CheckAttributeLevelAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          currentAttributeValue          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          dynamicChange                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           alarmRef                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULevelAttributes_C::CheckAttributeLevelAlarm(float currentAttributeValue, float dynamicChange, bool* alarmRef, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.CheckAttributeLevelAlarm");

	struct
	{
		float                          currentAttributeValue;
		float                          dynamicChange;
		bool                           alarmRef;
		int                            alarmCode;
	} params;

	params.currentAttributeValue = currentAttributeValue;
	params.dynamicChange = dynamicChange;

	UObject::ProcessEvent(fn, &params);

	if (alarmRef != nullptr)
		*alarmRef = params.alarmRef;
	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function LevelAttributes.LevelAttributes_C.CheckBFPAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          bodyFatPercentage              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          bodyFatAlarmThreshold          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULevelAttributes_C::CheckBFPAlarm(float bodyFatPercentage, float bodyFatAlarmThreshold, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.CheckBFPAlarm");

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


// Function LevelAttributes.LevelAttributes_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.SetMeasurementUnits
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::SetMeasurementUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.SetMeasurementUnits");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.UpdateParameterLines
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.UpdateParameterLines");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText ULevelAttributes_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelAttributes.LevelAttributes_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void ULevelAttributes_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function LevelAttributes.LevelAttributes_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ULevelAttributes_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function LevelAttributes.LevelAttributes_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULevelAttributes_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULevelAttributes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.UpdateContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.UpdateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.ShouldActivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::ShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.ShouldActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.ShouldDeactivateAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::ShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.ShouldDeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.ShouldActivateBFPAlarm
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::ShouldActivateBFPAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.ShouldActivateBFPAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.ExecuteUbergraph_LevelAttributes
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULevelAttributes_C::ExecuteUbergraph_LevelAttributes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.ExecuteUbergraph_LevelAttributes");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::AlarmOffBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LevelAttributes.LevelAttributes_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ULevelAttributes_C::AlarmOnBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
