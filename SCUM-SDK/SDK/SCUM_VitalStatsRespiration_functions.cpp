// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_VitalStatsRespiration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsRespiration_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsRespiration_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsRespiration_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            respiratoryRate                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsRespiration_C::GetRespiratoryRateInt(int* respiratoryRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt");

	struct
	{
		int                            respiratoryRate;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (respiratoryRate != nullptr)
		*respiratoryRate = params.respiratoryRate;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsRespiration_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsRespiration_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStatsRespiration_C::GetBreathRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UVitalStatsRespiration_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVitalStatsRespiration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsRespiration_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsRespiration_C::ExecuteUbergraph_VitalStatsRespiration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration");

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
