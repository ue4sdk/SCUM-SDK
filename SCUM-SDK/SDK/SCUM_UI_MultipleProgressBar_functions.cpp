// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_MultipleProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetDisplayValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          value1                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          value2                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          value3                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          value4                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          value5                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MultipleProgressBar_C::SetDisplayValues(float value1, float value2, float value3, float value4, float value5)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetDisplayValues");

	struct
	{
		float                          value1;
		float                          value2;
		float                          value3;
		float                          value4;
		float                          value5;
	} params;

	params.value1 = value1;
	params.value2 = value2;
	params.value3 = value3;
	params.value4 = value4;
	params.value5 = value5;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetMaxValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          limitMaxValue                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DisplayMaxValue                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MultipleProgressBar_C::SetMaxValue(float MaxValue, float limitMaxValue, float DisplayMaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetMaxValue");

	struct
	{
		float                          MaxValue;
		float                          limitMaxValue;
		float                          DisplayMaxValue;
	} params;

	params.MaxValue = MaxValue;
	params.limitMaxValue = limitMaxValue;
	params.DisplayMaxValue = DisplayMaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_MultipleProgressBar_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnMouseMove");

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


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetPercentages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Percentage1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          percentage2                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          percentage3                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Percentage4                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          percentage5                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MultipleProgressBar_C::SetPercentages(float Percentage1, float percentage2, float percentage3, float Percentage4, float percentage5)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.SetPercentages");

	struct
	{
		float                          Percentage1;
		float                          percentage2;
		float                          percentage3;
		float                          Percentage4;
		float                          percentage5;
	} params;

	params.Percentage1 = Percentage1;
	params.percentage2 = percentage2;
	params.percentage3 = percentage3;
	params.Percentage4 = Percentage4;
	params.percentage5 = percentage5;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_MultipleProgressBar_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_MultipleProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.ExecuteUbergraph_UI_MultipleProgressBar
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MultipleProgressBar_C::ExecuteUbergraph_UI_MultipleProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MultipleProgressBar.UI_MultipleProgressBar_C.ExecuteUbergraph_UI_MultipleProgressBar");

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
