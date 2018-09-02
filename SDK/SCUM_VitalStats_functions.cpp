// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_VitalStats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VitalStats.VitalStats_C.isAlarmOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isHeartBPMAlarmOn              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStats_C::isAlarmOn(bool* isHeartBPMAlarmOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.isAlarmOn");

	struct
	{
		bool                           isHeartBPMAlarmOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (isHeartBPMAlarmOn != nullptr)
		*isHeartBPMAlarmOn = params.isHeartBPMAlarmOn;
}


// Function VitalStats.VitalStats_C.AlarmControl
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            alarmCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStats_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.AlarmControl");

	struct
	{
		int                            alarmCode;
	} params;

	params.alarmCode = alarmCode;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStats.VitalStats_C.DeactivateAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStats_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.DeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStats.VitalStats_C.ActivateAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStats_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.ActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStats.VitalStats_C.CheckHeartBPMAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            BeatsPerMinute                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStats_C::CheckHeartBPMAlarm(int BeatsPerMinute, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.CheckHeartBPMAlarm");

	struct
	{
		int                            BeatsPerMinute;
		int                            alarmCode;
	} params;

	params.BeatsPerMinute = BeatsPerMinute;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function VitalStats.VitalStats_C.SetTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UVitalStats_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStats.VitalStats_C.GetHeartRateBPM
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStats_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHeartRateBPM");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetHealthPercentText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStats_C::GetHealthPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHealthPercentText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetHealthPercentBar
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVitalStats_C::GetHealthPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHealthPercentBar");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetStaminaPercentText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStats_C::GetStaminaPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetStaminaPercentText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetStaminaPercentBar
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVitalStats_C::GetStaminaPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetStaminaPercentBar");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVitalStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStats.VitalStats_C.UpdateContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStats_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.UpdateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStats.VitalStats_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStats_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStats.VitalStats_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStats_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStats_C::ExecuteUbergraph_VitalStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats");

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
