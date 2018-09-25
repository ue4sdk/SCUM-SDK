// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Vitamins_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vitamins.Vitamins_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitamins_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.shouldAlarmBeOn");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function Vitamins.Vitamins_C.SetParentsForChildren
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitamins_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetParentsForChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitamins_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.SetPrisonerToMonitor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitamins_C::SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetPrisonerToMonitor");

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


// Function Vitamins.Vitamins_C.AddVitaminToParameterLines
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParameterPercentageLine_C* NewItem                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)

void UVitamins_C::AddVitaminToParameterLines(class UParameterPercentageLine_C* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AddVitaminToParameterLines");

	struct
	{
		class UParameterPercentageLine_C* NewItem;
	} params;

	params.NewItem = NewItem;

	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.PopulateVitaminsParameterLinesArray
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitamins_C::PopulateVitaminsParameterLinesArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.PopulateVitaminsParameterLinesArray");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitamins_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.SetDefaultTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UVitamins_C::SetDefaultTitle(const struct FText& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;

	params.defaultTitle = defaultTitle;

	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.SetContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitamins_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetContentVisibility");

	struct
	{
		ESlateVisibility               Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.SetTextColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UVitamins_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.SetTextColorOfVerticalBox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UVitamins_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetTextColorOfVerticalBox");

	struct
	{
		class UPanelWidget*            verticalBoxRef;
		struct FLinearColor            TextColor;
	} params;

	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVitamins_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Vitamins.Vitamins_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void UVitamins_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Vitamins.Vitamins_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UVitamins_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Vitamins.Vitamins_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UVitamins_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitamins_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitamins_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.UpdateVitaminsEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitamins_C::UpdateVitaminsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.UpdateVitaminsEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitamins_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UVitamins_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitamins_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function Vitamins.Vitamins_C.ExecuteUbergraph_Vitamins
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVitamins_C::ExecuteUbergraph_Vitamins(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.ExecuteUbergraph_Vitamins");

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
