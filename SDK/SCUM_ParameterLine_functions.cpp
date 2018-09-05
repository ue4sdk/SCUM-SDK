// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ParameterLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ParameterLine.ParameterLine_C.ActivateCustomAlarmColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            LinearColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UParameterLine_C::ActivateCustomAlarmColor(const struct FLinearColor& LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateCustomAlarmColor");

	struct
	{
		struct FLinearColor            LinearColor;
	} params;

	params.LinearColor = LinearColor;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.AlarmControl
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            alarmColorCode                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterLine_C::AlarmControl(int alarmColorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.AlarmControl");

	struct
	{
		int                            alarmColorCode;
	} params;

	params.alarmColorCode = alarmColorCode;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UParameterLine_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetAlarmColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   parameterNameToSet             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   parameterValueToSet            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   maxParameterValueToSet         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterLine_C::Update(const struct FText& parameterNameToSet, const struct FText& parameterValueToSet, const struct FText& maxParameterValueToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.Update");

	struct
	{
		struct FText                   parameterNameToSet;
		struct FText                   parameterValueToSet;
		struct FText                   maxParameterValueToSet;
	} params;

	params.parameterNameToSet = parameterNameToSet;
	params.parameterValueToSet = parameterValueToSet;
	params.maxParameterValueToSet = maxParameterValueToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetValuesColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterLine_C::SetValuesColor(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetValuesColor");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetParameterValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   parameterValueText             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterLine_C::SetParameterValueText(const struct FText& parameterValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueText");

	struct
	{
		struct FText                   parameterValueText;
	} params;

	params.parameterValueText = parameterValueText;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetMaxValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   maxValueText                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterLine_C::SetMaxValueText(const struct FText& maxValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetMaxValueText");

	struct
	{
		struct FText                   maxValueText;
	} params;

	params.maxValueText = maxValueText;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetParameterValueSlashText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            decimalPlaces                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterLine_C::SetParameterValueSlashText(float Value, int decimalPlaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueSlashText");

	struct
	{
		float                          Value;
		int                            decimalPlaces;
	} params;

	params.Value = Value;
	params.decimalPlaces = decimalPlaces;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetParameterValueTextDecimal
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            decimalPlaces                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterLine_C::SetParameterValueTextDecimal(float Value, int decimalPlaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueTextDecimal");

	struct
	{
		float                          Value;
		int                            decimalPlaces;
	} params;

	params.Value = Value;
	params.decimalPlaces = decimalPlaces;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.GetValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UParameterLine_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.SetColorOfMaxValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterLine_C::SetColorOfMaxValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfMaxValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetColorOfValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterLine_C::SetColorOfValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetColorOfParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterLine_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfParameterName");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UParameterLine_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.GetMaxValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UParameterLine_C::GetMaxValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetMaxValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.GetParameterNameTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UParameterLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetParameterNameTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.GetParameterNameText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (CPF_Parm, CPF_OutParm)

void UParameterLine_C::GetParameterNameText(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetParameterNameText");

	struct
	{
		struct FText                   ParameterName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function ParameterLine.ParameterLine_C.SetParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterLine_C::SetParameterName(const struct FText& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterName");

	struct
	{
		struct FText                   ParameterName;
	} params;

	params.ParameterName = ParameterName;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UParameterLine_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ParameterLine.ParameterLine_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void UParameterLine_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function ParameterLine.ParameterLine_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterLine_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UParameterLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterLine.ParameterLine_C.ExecuteUbergraph_ParameterLine
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterLine_C::ExecuteUbergraph_ParameterLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ExecuteUbergraph_ParameterLine");

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
