// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_PhysicalQuantityLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetValueColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            maxValueLinearColorToSet       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UPhysicalQuantityLine_C::SetValueColor(const struct FLinearColor& maxValueLinearColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetValueColor");

	struct
	{
		struct FLinearColor            maxValueLinearColorToSet;
	} params;

	params.maxValueLinearColorToSet = maxValueLinearColorToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetValueColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            maxValueColor                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UPhysicalQuantityLine_C::GetValueColor(struct FLinearColor* maxValueColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetValueColor");

	struct
	{
		struct FLinearColor            maxValueColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (maxValueColor != nullptr)
		*maxValueColor = params.maxValueColor;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            maxValueLinearColorToSet       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UPhysicalQuantityLine_C::SetMaxValueColor(const struct FLinearColor& maxValueLinearColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueColor");

	struct
	{
		struct FLinearColor            maxValueLinearColorToSet;
	} params;

	params.maxValueLinearColorToSet = maxValueLinearColorToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            maxValueColor                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UPhysicalQuantityLine_C::GetMaxValueColor(struct FLinearColor* maxValueColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueColor");

	struct
	{
		struct FLinearColor            maxValueColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (maxValueColor != nullptr)
		*maxValueColor = params.maxValueColor;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMeasurementUnit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   measurementUnitToSet           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPhysicalQuantityLine_C::SetMeasurementUnit(const struct FText& measurementUnitToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMeasurementUnit");

	struct
	{
		struct FText                   measurementUnitToSet;
	} params;

	params.measurementUnitToSet = measurementUnitToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMeasurementUnit
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   measurementUnit                (CPF_Parm, CPF_OutParm)

void UPhysicalQuantityLine_C::GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMeasurementUnit");

	struct
	{
		struct FText                   measurementUnit;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (measurementUnit != nullptr)
		*measurementUnit = params.measurementUnit;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   maxValueTextToSet              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPhysicalQuantityLine_C::SetMaxValueText(const struct FText& maxValueTextToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueText");

	struct
	{
		struct FText                   maxValueTextToSet;
	} params;

	params.maxValueTextToSet = maxValueTextToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   maxValueTxt                    (CPF_Parm, CPF_OutParm)

void UPhysicalQuantityLine_C::GetMaxValueText(struct FText* maxValueTxt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueText");

	struct
	{
		struct FText                   maxValueTxt;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (maxValueTxt != nullptr)
		*maxValueTxt = params.maxValueTxt;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetParameterValueText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   paramValueTextToSet            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UPhysicalQuantityLine_C::SetParameterValueText(const struct FText& paramValueTextToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetParameterValueText");

	struct
	{
		struct FText                   paramValueTextToSet;
	} params;

	params.paramValueTextToSet = paramValueTextToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetParameterValueText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   parameterValueTxt              (CPF_Parm, CPF_OutParm)

void UPhysicalQuantityLine_C::GetParameterValueText(struct FText* parameterValueTxt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetParameterValueText");

	struct
	{
		struct FText                   parameterValueTxt;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (parameterValueTxt != nullptr)
		*parameterValueTxt = params.parameterValueTxt;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPhysicalQuantityLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.ExecuteUbergraph_PhysicalQuantityLine
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPhysicalQuantityLine_C::ExecuteUbergraph_PhysicalQuantityLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.ExecuteUbergraph_PhysicalQuantityLine");

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
