// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CircularParameter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          percentageSecond               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CircularParameter_C::GetPercentageSecond(float* percentageSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond");

	struct
	{
		float                          percentageSecond;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (percentageSecond != nullptr)
		*percentageSecond = params.percentageSecond;
}


// Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CircularParameter_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           above                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CircularParameter_C::EnableAlarm(bool above)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm");

	struct
	{
		bool                           above;
	} params;

	params.above = above;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CircularParameter_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CircularParameter_C::SetDescriptionText(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText");

	struct
	{
		struct FText                   Description;
	} params;

	params.Description = Description;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   unit                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CircularParameter_C::SetMeasurementUnit(const struct FText& unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit");

	struct
	{
		struct FText                   unit;
	} params;

	params.unit = unit;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UUI_CircularParameter_C::GetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UUI_CircularParameter_C::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UUI_CircularParameter_C::GetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CircularParameter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CircularParameter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CircularParameter_C::SetMaxValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CircularParameter_C::SetCurrentValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CircularParameter_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CircularParameter_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_CircularParameter_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CircularParameter_C::SetCurrentValueSecond(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CircularParameter_C::ExecuteUbergraph_UI_CircularParameter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter");

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
