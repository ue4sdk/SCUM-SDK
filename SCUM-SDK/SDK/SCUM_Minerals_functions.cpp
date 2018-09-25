// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Minerals_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Minerals.Minerals_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMinerals_C::shouldAlarmBeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.shouldAlarmBeOn");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Minerals.Minerals_C.SetParentsForChildren
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinerals_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetParentsForChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinerals_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.SetPrisonerToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinerals_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetPrisonerToMonitor");

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


// Function Minerals.Minerals_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinerals_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.SetDefaultTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 defaultTitle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UMinerals_C::SetDefaultTitle(const struct FString& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetDefaultTitle");

	struct
	{
		struct FString                 defaultTitle;
	} params;

	params.defaultTitle = defaultTitle;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.SetContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinerals_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetContentVisibility");

	struct
	{
		ESlateVisibility               Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.SetTextColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UMinerals_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.SetTextColorOfVerticalBox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UMinerals_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetTextColorOfVerticalBox");

	struct
	{
		class UPanelWidget*            verticalBoxRef;
		struct FLinearColor            TextColor;
	} params;

	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UMinerals_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Minerals.Minerals_C.SetVerticalBoxContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UVerticalBox*            verticalBoxRef                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinerals_C::SetVerticalBoxContentVisibility(class UVerticalBox* verticalBoxRef, ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetVerticalBoxContentVisibility");

	struct
	{
		class UVerticalBox*            verticalBoxRef;
		ESlateVisibility               Visibility;
	} params;

	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.SetContentMinimized
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           minimized                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinerals_C::SetContentMinimized(bool minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetContentMinimized");

	struct
	{
		bool                           minimized;
	} params;

	params.minimized = minimized;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.MinimizeContent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinerals_C::MinimizeContent(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.MinimizeContent");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void UMinerals_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Minerals.Minerals_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UMinerals_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Minerals.Minerals_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMinerals_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinerals_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinerals_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.MineralsUpdateEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinerals_C::MineralsUpdateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.MineralsUpdateEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinerals_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMinerals_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinerals_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function Minerals.Minerals_C.ExecuteUbergraph_Minerals
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMinerals_C::ExecuteUbergraph_Minerals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.ExecuteUbergraph_Minerals");

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
