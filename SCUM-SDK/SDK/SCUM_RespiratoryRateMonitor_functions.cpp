// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_RespiratoryRateMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            alarmCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URespiratoryRateMonitor_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl");

	struct
	{
		int                            alarmCode;
	} params;

	params.alarmCode = alarmCode;

	UObject::ProcessEvent(fn, &params);
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URespiratoryRateMonitor_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URespiratoryRateMonitor_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            respiratoryRate                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URespiratoryRateMonitor_C::CheckRespiratoryRateAlarm(int respiratoryRate, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm");

	struct
	{
		int                            respiratoryRate;
		int                            alarmCode;
	} params;

	params.respiratoryRate = respiratoryRate;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               prisonerToSet                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URespiratoryRateMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner* prisonerToSet, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	struct
	{
		class APrisoner*               prisonerToSet;
		bool                           Success;
	} params;

	params.prisonerToSet = prisonerToSet;

	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   respiratoryRateExtremes        (CPF_Parm, CPF_OutParm)

void URespiratoryRateMonitor_C::ProvideRespiratoryRateExtremes(struct FText* respiratoryRateExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes");

	struct
	{
		struct FText                   respiratoryRateExtremes;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (respiratoryRateExtremes != nullptr)
		*respiratoryRateExtremes = params.respiratoryRateExtremes;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URespiratoryRateMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URespiratoryRateMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URespiratoryRateMonitor_C::ExecuteUbergraph_RespiratoryRateMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor");

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
