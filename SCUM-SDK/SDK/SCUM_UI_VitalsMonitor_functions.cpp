// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_VitalsMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetOxygenSaturationExtremesText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   OxygenSaturationExtremes       (CPF_Parm, CPF_OutParm)

void UUI_VitalsMonitor_C::GetOxygenSaturationExtremesText(struct FText* OxygenSaturationExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetOxygenSaturationExtremesText");

	struct
	{
		struct FText                   OxygenSaturationExtremes;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OxygenSaturationExtremes != nullptr)
		*OxygenSaturationExtremes = params.OxygenSaturationExtremes;
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetTemperatureExtremesText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   temperatureExtremes            (CPF_Parm, CPF_OutParm)

void UUI_VitalsMonitor_C::GetTemperatureExtremesText(struct FText* temperatureExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetTemperatureExtremesText");

	struct
	{
		struct FText                   temperatureExtremes;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (temperatureExtremes != nullptr)
		*temperatureExtremes = params.temperatureExtremes;
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetRespiratoryRateExtremesText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   respiratoryRateExtremes        (CPF_Parm, CPF_OutParm)

void UUI_VitalsMonitor_C::GetRespiratoryRateExtremesText(struct FText* respiratoryRateExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetRespiratoryRateExtremesText");

	struct
	{
		struct FText                   respiratoryRateExtremes;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (respiratoryRateExtremes != nullptr)
		*respiratoryRateExtremes = params.respiratoryRateExtremes;
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.SetPrisoner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VitalsMonitor_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.SetPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VitalsMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_VitalsMonitor.UI_VitalsMonitor_C.ExecuteUbergraph_UI_VitalsMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_VitalsMonitor_C::ExecuteUbergraph_UI_VitalsMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VitalsMonitor.UI_VitalsMonitor_C.ExecuteUbergraph_UI_VitalsMonitor");

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
