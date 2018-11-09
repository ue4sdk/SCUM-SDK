// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_OxygenSaturationMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            alarmCode                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOxygenSaturationMonitor_C::AlarmControl(int alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl");

	struct
	{
		int                            alarmCode;
	} params;

	params.alarmCode = alarmCode;

	UObject::ProcessEvent(fn, &params);
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOxygenSaturationMonitor_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOxygenSaturationMonitor_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          oxygenationLevel               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            alarmCode                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOxygenSaturationMonitor_C::CheckBloodOxygenationAlarm(float oxygenationLevel, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm");

	struct
	{
		float                          oxygenationLevel;
		int                            alarmCode;
	} params;

	params.oxygenationLevel = oxygenationLevel;

	UObject::ProcessEvent(fn, &params);

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               prisonerToSet                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOxygenSaturationMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner* prisonerToSet, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor");

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


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   oxygenSaturationExtremes       (CPF_Parm, CPF_OutParm)

void UOxygenSaturationMonitor_C::ProvideOxygenSaturationExtremes(struct FText* oxygenSaturationExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes");

	struct
	{
		struct FText                   oxygenSaturationExtremes;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (oxygenSaturationExtremes != nullptr)
		*oxygenSaturationExtremes = params.oxygenSaturationExtremes;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UOxygenSaturationMonitor_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOxygenSaturationMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOxygenSaturationMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOxygenSaturationMonitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOxygenSaturationMonitor_C::ExecuteUbergraph_OxygenSaturationMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor");

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
