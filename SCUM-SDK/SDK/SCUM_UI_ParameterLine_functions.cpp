// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ParameterLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ParameterLine.UI_ParameterLine_C.SetExpandableContainer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_ExpandableContainer_C* container                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_ParameterLine_C::SetExpandableContainer(class UUI_ExpandableContainer_C* container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetExpandableContainer");

	struct
	{
		class UUI_ExpandableContainer_C* container;
	} params;

	params.container = container;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.DisableAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ParameterLine_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.DisableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.EnableAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_ParameterLine_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.EnableAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.CheckAlarms
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ParameterLine_C::CheckAlarms(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.CheckAlarms");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_ParameterLine_C::SetName(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetName");

	struct
	{
		struct FText                   Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueInt
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ParameterLine_C::SetMaxValueInt(int MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueInt");

	struct
	{
		int                            MaxValue;
	} params;

	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueFloat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            minDecimals                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            maxDecimals                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ParameterLine_C::SetMaxValueFloat(float MaxValue, int minDecimals, int maxDecimals)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueFloat");

	struct
	{
		float                          MaxValue;
		int                            minDecimals;
		int                            maxDecimals;
	} params;

	params.MaxValue = MaxValue;
	params.minDecimals = minDecimals;
	params.maxDecimals = maxDecimals;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_ParameterLine_C::SetMaxValueText(const struct FText& MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetMaxValueText");

	struct
	{
		struct FText                   MaxValue;
	} params;

	params.MaxValue = MaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetValueInt
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ParameterLine_C::SetValueInt(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetValueInt");

	struct
	{
		int                            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetValueFloat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            minDecimals                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            maxDecimals                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ParameterLine_C::SetValueFloat(float Value, int minDecimals, int maxDecimals)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetValueFloat");

	struct
	{
		float                          Value;
		int                            minDecimals;
		int                            maxDecimals;
	} params;

	params.Value = Value;
	params.minDecimals = minDecimals;
	params.maxDecimals = maxDecimals;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.SetValueText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_ParameterLine_C::SetValueText(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.SetValueText");

	struct
	{
		struct FText                   Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_ParameterLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_ParameterLine_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ParameterLine.UI_ParameterLine_C.ExecuteUbergraph_UI_ParameterLine
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ParameterLine_C::ExecuteUbergraph_UI_ParameterLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ParameterLine.UI_ParameterLine_C.ExecuteUbergraph_UI_ParameterLine");

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
