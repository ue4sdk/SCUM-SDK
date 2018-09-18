// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ClockFaceWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.AppendZero
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Number                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_ClockFaceWidget_C::AppendZero(int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.AppendZero");

	struct
	{
		int                            Number;
		struct FText                   ReturnValue;
	} params;

	params.Number = Number;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetHours
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Hours                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ClockFaceWidget_C::SetHours(int Hours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetHours");

	struct
	{
		int                            Hours;
	} params;

	params.Hours = Hours;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetMinutes
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int                            Minutes                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ClockFaceWidget_C::SetMinutes(int Minutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.SetMinutes");

	struct
	{
		int                            Minutes;
	} params;

	params.Minutes = Minutes;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.ExecuteUbergraph_UI_ClockFaceWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ClockFaceWidget_C::ExecuteUbergraph_UI_ClockFaceWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClockFaceWidget.UI_ClockFaceWidget_C.ExecuteUbergraph_UI_ClockFaceWidget");

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
