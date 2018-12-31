// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_VitalStatsTemperature_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VitalStatsTemperature.VitalStatsTemperature_C.DisableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsTemperature_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.DisableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.EnableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsTemperature_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.EnableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.CheckAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsTemperature_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.CheckAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperatureFloat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsTemperature_C::GetBodyTemperatureFloat(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperatureFloat");

	struct
	{
		float                          NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsTemperature_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsTemperature_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviationText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   temperatureDeviationText       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UVitalStatsTemperature_C::SetTemperatureDeviationText(const struct FText& temperatureDeviationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviationText");

	struct
	{
		struct FText                   temperatureDeviationText;
	} params;

	params.temperatureDeviationText = temperatureDeviationText;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          temperatureDeviation           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsTemperature_C::SetTemperatureDeviation(float temperatureDeviation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviation");

	struct
	{
		float                          temperatureDeviation;
	} params;

	params.temperatureDeviation = temperatureDeviation;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureExtremes
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   tempExtremes                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UVitalStatsTemperature_C::SetTemperatureExtremes(const struct FText& tempExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureExtremes");

	struct
	{
		struct FText                   tempExtremes;
	} params;

	params.tempExtremes = tempExtremes;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetTemperatureDeviation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStatsTemperature_C::GetTemperatureDeviation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetTemperatureDeviation");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperature
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStatsTemperature_C::GetBodyTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperature");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UVitalStatsTemperature_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVitalStatsTemperature_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsTemperature_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsTemperature.VitalStatsTemperature_C.ExecuteUbergraph_VitalStatsTemperature
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsTemperature_C::ExecuteUbergraph_VitalStatsTemperature(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsTemperature.VitalStatsTemperature_C.ExecuteUbergraph_VitalStatsTemperature");

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
