// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BodyTemperatureMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.AlarmControl
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            alarmCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyTemperatureMonitor_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.AlarmControl");

	struct
	{
		int                            alarmCode;
	} params;

	params.alarmCode = alarmCode;

	UObject::ProcessEvent(fn, &params);
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.DeactivateAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyTemperatureMonitor_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.DeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ActivateAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBodyTemperatureMonitor_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.CheckBodyTemperatureAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          bodyTemperature                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyTemperatureMonitor_C::CheckBodyTemperatureAlarm(float bodyTemperature, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.CheckBodyTemperatureAlarm");

	struct
	{
		float                          bodyTemperature;
		int                            alarmCode;
	} params;

	params.bodyTemperature = bodyTemperature;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyTemperatureMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	struct
	{
		class APrisoner*               Prisoner;
		bool                           Success;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ProvideTemperatureExtremes
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   minTemp_MaxTemp                (CPF_Parm, CPF_OutParm)

void UBodyTemperatureMonitor_C::ProvideTemperatureExtremes(struct FText* minTemp_MaxTemp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ProvideTemperatureExtremes");

	struct
	{
		struct FText                   minTemp_MaxTemp;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (minTemp_MaxTemp != nullptr)
		*minTemp_MaxTemp = params.minTemp_MaxTemp;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.GetHeartRateBPM
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBodyTemperatureMonitor_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.GetHeartRateBPM");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyTemperatureMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBodyTemperatureMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ExecuteUbergraph_BodyTemperatureMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBodyTemperatureMonitor_C::ExecuteUbergraph_BodyTemperatureMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ExecuteUbergraph_BodyTemperatureMonitor");

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
