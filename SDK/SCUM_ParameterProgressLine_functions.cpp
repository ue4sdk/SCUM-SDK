// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ParameterProgressLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ParameterProgressLine.ParameterProgressLine_C.AdjustRelativeColumnSizes
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          column0_Percent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          column1_Percent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterProgressLine_C::AdjustRelativeColumnSizes(float column0_Percent, float column1_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.AdjustRelativeColumnSizes");

	struct
	{
		float                          column0_Percent;
		float                          column1_Percent;
	} params;

	params.column0_Percent = column0_Percent;
	params.column1_Percent = column1_Percent;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetPercentageText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   percentText                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterProgressLine_C::SetPercentageText(const struct FText& percentText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetPercentageText");

	struct
	{
		struct FText                   percentText;
	} params;

	params.percentText = percentText;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.UpdatePercentageText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterProgressLine_C::UpdatePercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.UpdatePercentageText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterProgressLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterProgressLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.GetPercentageToShowText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UParameterProgressLine_C::GetPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.GetPercentageToShowText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ParameterProgressLine.ParameterProgressLine_C.UpdateNutrientTextValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterProgressLine_C::UpdateNutrientTextValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.UpdateNutrientTextValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UParameterProgressLine_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetAlarmColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetColorOfParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterProgressLine_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetColorOfParameterName");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UParameterProgressLine_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.GetParameterNameTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UParameterProgressLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.GetParameterNameTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterProgressLine.ParameterProgressLine_C.GetParameterName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ParameterName                  (CPF_Parm, CPF_OutParm)

void UParameterProgressLine_C::GetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.GetParameterName");

	struct
	{
		struct FText                   ParameterName;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function ParameterProgressLine.ParameterProgressLine_C.SetParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterProgressLine_C::SetParameterName(const struct FText& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.SetParameterName");

	struct
	{
		struct FText                   ParameterName;
	} params;

	params.ParameterName = ParameterName;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.OnMouseButtonDownOnMinimizeParameterLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UParameterProgressLine_C::OnMouseButtonDownOnMinimizeParameterLine(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.OnMouseButtonDownOnMinimizeParameterLine");

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


// Function ParameterProgressLine.ParameterProgressLine_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterProgressLine_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UParameterProgressLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterProgressLine_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UParameterProgressLine_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOn
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterProgressLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOff
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterProgressLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.OnPercentageChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterProgressLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.OnPercentageChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterProgressLine.ParameterProgressLine_C.ExecuteUbergraph_ParameterProgressLine
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterProgressLine_C::ExecuteUbergraph_ParameterProgressLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterProgressLine.ParameterProgressLine_C.ExecuteUbergraph_ParameterProgressLine");

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
