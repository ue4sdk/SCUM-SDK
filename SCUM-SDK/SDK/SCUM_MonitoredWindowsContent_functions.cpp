// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MonitoredWindowsContent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetUpdateContentTimer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTimerHandle            updateContentTimer             (CPF_Parm, CPF_OutParm)

void UMonitoredWindowsContent_C::GetUpdateContentTimer(struct FTimerHandle* updateContentTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetUpdateContentTimer");

	struct
	{
		struct FTimerHandle            updateContentTimer;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (updateContentTimer != nullptr)
		*updateContentTimer = params.updateContentTimer;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsBCUDataInitialized
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsBCUDataInitialized           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMonitoredWindowsContent_C::IsBCUDataInitialized(bool* IsBCUDataInitialized)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsBCUDataInitialized");

	struct
	{
		bool                           IsBCUDataInitialized;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsBCUDataInitialized != nullptr)
		*IsBCUDataInitialized = params.IsBCUDataInitialized;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmSwitchedOff
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMonitoredWindowsContent_C::NotifyParentOnAlarmSwitchedOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmSwitchedOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmRaised
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMonitoredWindowsContent_C::NotifyParentOnAlarmRaised()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmRaised");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsPrisonerLifeComponentValid
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isLifeComponentValid           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMonitoredWindowsContent_C::IsPrisonerLifeComponentValid(bool* isLifeComponentValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsPrisonerLifeComponentValid");

	struct
	{
		bool                           isLifeComponentValid;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (isLifeComponentValid != nullptr)
		*isLifeComponentValid = params.isLifeComponentValid;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetPrisoner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMonitoredWindowsContent_C::GetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetDefaultPrisonerToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMonitoredWindowsContent_C::SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetDefaultPrisonerToMonitor");

	struct
	{
		bool                           Success;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Success != nullptr)
		*Success = params.Success;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetPrisonerToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMonitoredWindowsContent_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetPrisonerToMonitor");

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


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetDefaultPrisoner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMonitoredWindowsContent_C::GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetDefaultPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMonitoredWindowsContent_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.UpdateContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMonitoredWindowsContent_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.UpdateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MonitoredWindowsContent.MonitoredWindowsContent_C.ExecuteUbergraph_MonitoredWindowsContent
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMonitoredWindowsContent_C::ExecuteUbergraph_MonitoredWindowsContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonitoredWindowsContent.MonitoredWindowsContent_C.ExecuteUbergraph_MonitoredWindowsContent");

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
