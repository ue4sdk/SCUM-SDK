// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_LeanFatMuscleTriangle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateAttributesFromFatnessAndLeanness
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Fatness                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Leanness                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_LeanFatMuscleTriangle_C::UpdateAttributesFromFatnessAndLeanness(float Fatness, float Leanness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateAttributesFromFatnessAndLeanness");

	struct
	{
		float                          Fatness;
		float                          Leanness;
	} params;

	params.Fatness = Fatness;
	params.Leanness = Leanness;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseEvent
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           updateEvenWithoutCapture       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_LeanFatMuscleTriangle_C::OnMouseEvent(bool updateEvenWithoutCapture, struct FPointerEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseEvent");

	struct
	{
		struct FPointerEvent           Event;
		bool                           updateEvenWithoutCapture;
		struct FEventReply             ReturnValue;
	} params;

	params.updateEvenWithoutCapture = updateEvenWithoutCapture;

	UObject::ProcessEvent(fn, &params);

	if (Event != nullptr)
		*Event = params.Event;

	return params.ReturnValue;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_LeanFatMuscleTriangle_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonDown");

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


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateVisualsFromFatnessAndLeanness
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Fatness                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Leanness                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_LeanFatMuscleTriangle_C::UpdateVisualsFromFatnessAndLeanness(float Fatness, float Leanness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateVisualsFromFatnessAndLeanness");

	struct
	{
		float                          Fatness;
		float                          Leanness;
	} params;

	params.Fatness = Fatness;
	params.Leanness = Leanness;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_LeanFatMuscleTriangle_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonUp");

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


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.GetFactorsFromLocalCoordinatesz
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               coordinates                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          muscle                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          lean                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Fat                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_LeanFatMuscleTriangle_C::GetFactorsFromLocalCoordinatesz(const struct FVector2D& coordinates, float* muscle, float* lean, float* Fat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.GetFactorsFromLocalCoordinatesz");

	struct
	{
		struct FVector2D               coordinates;
		float                          muscle;
		float                          lean;
		float                          Fat;
	} params;

	params.coordinates = coordinates;

	UObject::ProcessEvent(fn, &params);

	if (muscle != nullptr)
		*muscle = params.muscle;
	if (lean != nullptr)
		*lean = params.lean;
	if (Fat != nullptr)
		*Fat = params.Fat;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_LeanFatMuscleTriangle_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseMove");

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


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.AttributesChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector4                attributes                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UUI_LeanFatMuscleTriangle_C::AttributesChanged__DelegateSignature(const struct FVector4& attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.AttributesChanged__DelegateSignature");

	struct
	{
		struct FVector4                attributes;
	} params;

	params.attributes = attributes;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
