// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_FullParameterProgressBarLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            decimalPlacesToSet             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::SetDecimalPlacesForValue(int decimalPlacesToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue");

	struct
	{
		int                            decimalPlacesToSet;
	} params;

	params.decimalPlacesToSet = decimalPlacesToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            decimalPlacesToSet             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::SetDecimalPlaces(int decimalPlacesToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces");

	struct
	{
		int                            decimalPlacesToSet;
	} params;

	params.decimalPlacesToSet = decimalPlacesToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          fillColumn0                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          fillColumn1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          fillColumn2                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::AdjustHorizontalFillRules(float fillColumn0, float fillColumn1, float fillColumn2)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules");

	struct
	{
		float                          fillColumn0;
		float                          fillColumn1;
		float                          fillColumn2;
	} params;

	params.fillColumn0 = fillColumn0;
	params.fillColumn1 = fillColumn1;
	params.fillColumn2 = fillColumn2;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   percentText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UFullParameterProgressBarLine_C::SetPercentageText(const struct FText& percentText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText");

	struct
	{
		struct FText                   percentText;
	} params;

	params.percentText = percentText;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdatePercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   valueStr                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UFullParameterProgressBarLine_C::SetCurrentValueText(const struct FText& valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText");

	struct
	{
		struct FText                   valueStr;
	} params;

	params.valueStr = valueStr;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateCurrentValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateDefaultCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   measurementUnit                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UFullParameterProgressBarLine_C::SetMeasurementUnit(const struct FText& measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit");

	struct
	{
		struct FText                   measurementUnit;
	} params;

	params.measurementUnit = measurementUnit;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   measurementUnit                (CPF_Parm, CPF_OutParm)

void UFullParameterProgressBarLine_C::GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit");

	struct
	{
		struct FText                   measurementUnit;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (measurementUnit != nullptr)
		*measurementUnit = params.measurementUnit;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 MUString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFullParameterProgressBarLine_C::IsMeasurementUnitDefault(const struct FString& MUString)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault");

	struct
	{
		struct FString                 MUString;
		bool                           ReturnValue;
	} params;

	params.MUString = MUString;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::UpdateRDAValue(float MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue");

	struct
	{
		float                          MaxValue;
	} params;

	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   valueStr                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UFullParameterProgressBarLine_C::SetRDAText(const struct FText& valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText");

	struct
	{
		struct FText                   valueStr;
	} params;

	params.valueStr = valueStr;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateRDAText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::SetRDAValue(float MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue");

	struct
	{
		float                          MaxValue;
	} params;

	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::SetCurrentValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UFullParameterProgressBarLine_C::GetPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::UpdateNutrientTextValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::GetCurrentValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UFullParameterProgressBarLine_C::SetColorOfMaxValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UFullParameterProgressBarLine_C::SetColorOfValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UFullParameterProgressBarLine_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::GetRDAValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ParameterName                  (CPF_Parm, CPF_OutParm)

void UFullParameterProgressBarLine_C::GetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName");

	struct
	{
		struct FText                   ParameterName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UFullParameterProgressBarLine_C::SetParameterName(const struct FText& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName");

	struct
	{
		struct FText                   ParameterName;
	} params;

	params.ParameterName = ParameterName;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UFullParameterProgressBarLine_C::OnMouseButtonDownOnMinimizeParameterLine(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UFullParameterProgressBarLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFullParameterProgressBarLine_C::ExecuteUbergraph_FullParameterProgressBarLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine");

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
