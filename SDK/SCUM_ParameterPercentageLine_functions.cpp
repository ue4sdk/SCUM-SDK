// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ParameterPercentageLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterPercentageLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterPercentageLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UParameterPercentageLine_C::SetAlarmColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterPercentageLine_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UParameterPercentageLine_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterPercentageLine_C::SetColorOfValue(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UParameterPercentageLine_C::SetColorOfParameterName(const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName");

	struct
	{
		struct FSlateColor             Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UParameterPercentageLine_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UParameterPercentageLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock");

	struct
	{
		class UTextBlock*              textBox;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UParameterPercentageLine_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UParameterPercentageLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterPercentageLine_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterPercentageLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterPercentageLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UParameterPercentageLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UParameterPercentageLine_C::ExecuteUbergraph_ParameterPercentageLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine");

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
