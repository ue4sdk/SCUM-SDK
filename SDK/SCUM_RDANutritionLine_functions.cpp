// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_RDANutritionLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RDANutritionLine.RDANutritionLine_C.SetValuesColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetValuesColor(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetValuesColor");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetPercentageText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   percentText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetPercentageText(const struct FText& percentText)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetPercentageText");

	struct
	{
		struct FText                   percentText;
	} params;

	params.percentText = percentText;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.UpdatePercentageText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::UpdatePercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdatePercentageText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetCurrentValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   valueStr                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetCurrentValueText(const struct FText& valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetCurrentValueText");

	struct
	{
		struct FText                   valueStr;
	} params;

	params.valueStr = valueStr;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValueText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::UpdateCurrentValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValueText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateDefaultCurrentValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::UpdateDefaultCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateDefaultCurrentValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetMeasurementUnit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   measurementUnit                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetMeasurementUnit(const struct FText& measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetMeasurementUnit");

	struct
	{
		struct FText                   measurementUnit;
	} params;

	params.measurementUnit = measurementUnit;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.GetMeasurementUnit
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   measurementUnit                (CPF_Parm, CPF_OutParm)

void URDANutritionLine_C::GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetMeasurementUnit");

	struct
	{
		struct FText                   measurementUnit;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (measurementUnit != nullptr)
		*measurementUnit = params.measurementUnit;
}


// Function RDANutritionLine.RDANutritionLine_C.IsMeasurementUnitDefault
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 MUString                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool URDANutritionLine_C::IsMeasurementUnitDefault(const struct FString& MUString)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.IsMeasurementUnitDefault");

	struct
	{
		struct FString                 MUString;
		bool                           ReturnValue;
	} params;

	params.MUString = MUString;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateRDAValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDANutritionLine_C::UpdateRDAValue(float MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateRDAValue");

	struct
	{
		float                          MaxValue;
	} params;

	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetRDAText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   valueStr                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetRDAText(const struct FText& valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetRDAText");

	struct
	{
		struct FText                   valueStr;
	} params;

	params.valueStr = valueStr;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateRDAText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::UpdateRDAText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateRDAText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetRDAValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDANutritionLine_C::SetRDAValue(float MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetRDAValue");

	struct
	{
		float                          MaxValue;
	} params;

	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::UpdateCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetCurrentValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDANutritionLine_C::SetCurrentValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetCurrentValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.GetPercentageToShowText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText URDANutritionLine_C::GetPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetPercentageToShowText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateNutrientTextValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::UpdateNutrientTextValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateNutrientTextValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void URDANutritionLine_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetAlarmColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.GetCurrentValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void URDANutritionLine_C::GetCurrentValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetCurrentValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function RDANutritionLine.RDANutritionLine_C.SetColorOfMaxValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetColorOfMaxValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetColorOfMaxValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetColorOfValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetColorOfValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetColorOfValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetColorOfParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetColorOfParameterName");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void URDANutritionLine_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.GetRDAValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void URDANutritionLine_C::GetRDAValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetRDAValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function RDANutritionLine.RDANutritionLine_C.GetParameterNameTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void URDANutritionLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetParameterNameTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function RDANutritionLine.RDANutritionLine_C.GetParameterName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ParameterName                  (CPF_Parm, CPF_OutParm)

void URDANutritionLine_C::GetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetParameterName");

	struct
	{
		struct FText                   ParameterName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function RDANutritionLine.RDANutritionLine_C.SetParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void URDANutritionLine_C::SetParameterName(const struct FText& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetParameterName");

	struct
	{
		struct FText                   ParameterName;
	} params;

	params.ParameterName = ParameterName;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.OnMouseButtonDownOnMinimizeParameterLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply URDANutritionLine_C::OnMouseButtonDownOnMinimizeParameterLine(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.OnMouseButtonDownOnMinimizeParameterLine");

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


// Function RDANutritionLine.RDANutritionLine_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDANutritionLine_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void URDANutritionLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDANutritionLine_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void URDANutritionLine_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOn
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOff
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.OnPercentageChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void URDANutritionLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.OnPercentageChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RDANutritionLine.RDANutritionLine_C.ExecuteUbergraph_RDANutritionLine
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URDANutritionLine_C::ExecuteUbergraph_RDANutritionLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.ExecuteUbergraph_RDANutritionLine");

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
