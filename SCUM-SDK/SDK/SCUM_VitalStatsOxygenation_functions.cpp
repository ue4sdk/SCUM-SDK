// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_VitalStatsOxygenation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.DisableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsOxygenation_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.DisableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.EnableAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsOxygenation_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.EnableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.CheckAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsOxygenation_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.CheckAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsOxygenation_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsOxygenation_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            colorToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsOxygenation_C::SetBackgroundColor(const struct FLinearColor& colorToSet, ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetBackgroundColor");

	struct
	{
		struct FLinearColor            colorToSet;
		ESlateVisibility               Visibility;
	} params;

	params.colorToSet = colorToSet;
	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenSaturationLevelFloat
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          oxygenSaturationLevel          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsOxygenation_C::GetOxygenSaturationLevelFloat(float* oxygenSaturationLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenSaturationLevelFloat");

	struct
	{
		float                          oxygenSaturationLevel;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (oxygenSaturationLevel != nullptr)
		*oxygenSaturationLevel = params.oxygenSaturationLevel;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenationLevel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStatsOxygenation_C::GetOxygenationLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenationLevel");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UVitalStatsOxygenation_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHeartRateBPM
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStatsOxygenation_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHeartRateBPM");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStatsOxygenation_C::GetHealthPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentBar
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVitalStatsOxygenation_C::GetHealthPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentBar");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStatsOxygenation_C::GetStaminaPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentBar
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVitalStatsOxygenation_C::GetStaminaPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentBar");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVitalStatsOxygenation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsOxygenation_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ExecuteUbergraph_VitalStatsOxygenation
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsOxygenation_C::ExecuteUbergraph_VitalStatsOxygenation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ExecuteUbergraph_VitalStatsOxygenation");

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
