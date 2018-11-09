// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_PerformanceMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerformanceMonitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UPerformanceMonitor_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize");

	struct
	{
		struct FVector2D               contentSize;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerformanceMonitor_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PerformanceMonitor.PerformanceMonitor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPerformanceMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerformanceMonitor_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerformanceMonitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPerformanceMonitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPerformanceMonitor_C::ExecuteUbergraph_PerformanceMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor");

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
