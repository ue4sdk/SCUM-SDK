// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_SpawnScreenWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_PenaltyCountdown_Visibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_SpawnScreenWidget_C::Get_PenaltyCountdown_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_PenaltyCountdown_Visibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_WaitTimeText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_SpawnScreenWidget_C::Get_WaitTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_WaitTimeText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetWaitTimeInSeconds
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            WaitSeconds                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnScreenWidget_C::GetWaitTimeInSeconds(int* WaitSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetWaitTimeInSeconds");

	struct
	{
		int                            WaitSeconds;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (WaitSeconds != nullptr)
		*WaitSeconds = params.WaitSeconds;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.CanSpawn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanSpawn                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnScreenWidget_C::CanSpawn(bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.CanSpawn");

	struct
	{
		bool                           CanSpawn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_SpawnScreenWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetButtonVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_SpawnScreenWidget_C::GetButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetButtonVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnSpawnAccept
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_SpawnScreenWidget_C::OnSpawnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnSpawnAccept");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.UpdateInfo
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_SpawnScreenWidget_C::UpdateInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.UpdateInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnScreenWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnScreenWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ExecuteUbergraph_UI_SpawnScreenWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnScreenWidget_C::ExecuteUbergraph_UI_SpawnScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ExecuteUbergraph_UI_SpawnScreenWidget");

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
