// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Nutritions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Nutritions.Nutritions_C.SetParentsForChildren
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetParentsForChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.shouldAlarmBeOn
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNutritions_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.shouldAlarmBeOn");

	struct
	{
		bool                           shouldAlarmBeOn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function Nutritions.Nutritions_C.UpdateCaloryWaterConsumRates
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::UpdateCaloryWaterConsumRates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateCaloryWaterConsumRates");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.UpdateNutritionPercentages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::UpdateNutritionPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionPercentages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.UpdateRDAValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::UpdateRDAValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateRDAValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.UpdateNutritionValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::UpdateNutritionValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.SetDefaultTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UNutritions_C::SetDefaultTitle(const struct FText& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;

	params.defaultTitle = defaultTitle;

	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.SetContentVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNutritions_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetContentVisibility");

	struct
	{
		ESlateVisibility               Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.SetTextColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UNutritions_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetTextColor");

	struct
	{
		struct FLinearColor            TextColor;
	} params;

	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.SetTextColorOfVerticalBox
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FLinearColor            TextColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UNutritions_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetTextColorOfVerticalBox");

	struct
	{
		class UPanelWidget*            verticalBoxRef;
		struct FLinearColor            TextColor;
	} params;

	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UNutritions_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Nutritions.Nutritions_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void UNutritions_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Nutritions.Nutritions_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UNutritions_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Nutritions.Nutritions_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNutritions_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNutritions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNutritions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.UpdateNutritionsEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::UpdateNutritionsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionsEvent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.AlarmOnWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.AlarmOnWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.AlarmOffWindowContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNutritions_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.AlarmOffWindowContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Nutritions.Nutritions_C.ExecuteUbergraph_Nutritions
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNutritions_C::ExecuteUbergraph_Nutritions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.ExecuteUbergraph_Nutritions");

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
