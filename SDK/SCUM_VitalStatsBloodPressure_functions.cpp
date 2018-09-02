// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_VitalStatsBloodPressure_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            alarmCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsBloodPressure_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl");

	struct
	{
		int                            alarmCode;
	} params;

	params.alarmCode = alarmCode;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsBloodPressure_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsBloodPressure_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            systolicPressure               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            diastolicPressure              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsBloodPressure_C::CheckBloodPressureAlarm(int systolicPressure, int diastolicPressure, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm");

	struct
	{
		int                            systolicPressure;
		int                            diastolicPressure;
		int                            alarmCode;
	} params;

	params.systolicPressure = systolicPressure;
	params.diastolicPressure = diastolicPressure;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitalStatsBloodPressure_C::GetBloodPressure()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVitalStatsBloodPressure_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitalStatsBloodPressure_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsBloodPressure_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitalStatsBloodPressure_C::ExecuteUbergraph_VitalStatsBloodPressure(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure");

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
