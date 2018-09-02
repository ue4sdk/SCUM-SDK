// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SkillTypeButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillTypeButton.SkillTypeButton_C.DeactivateAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.DeactivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.ActivateAlarm
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ActivateAlarm");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.OnSelectionAdjustSizePositionAndPadding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::OnSelectionAdjustSizePositionAndPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.OnSelectionAdjustSizePositionAndPadding");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.SetTextPadding
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::SetTextPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetTextPadding");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.ResetTextPadding
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::ResetTextPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ResetTextPadding");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.SetButtonOverlaySizeAndPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               InPosition                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               InSize                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void USkillTypeButton_C::SetButtonOverlaySizeAndPosition(const struct FVector2D& InPosition, const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetButtonOverlaySizeAndPosition");

	struct
	{
		struct FVector2D               InPosition;
		struct FVector2D               InSize;
	} params;

	params.InPosition = InPosition;
	params.InSize = InSize;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.ResetButtonOverlaySizeAndPosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::ResetButtonOverlaySizeAndPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ResetButtonOverlaySizeAndPosition");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.SetSizeX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          SizeX                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTypeButton_C::SetSizeX(float SizeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetSizeX");

	struct
	{
		float                          SizeX;
	} params;

	params.SizeX = SizeX;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.GetBorderSizeX
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          borderSizeX                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTypeButton_C::GetBorderSizeX(float* borderSizeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.GetBorderSizeX");

	struct
	{
		float                          borderSizeX;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (borderSizeX != nullptr)
		*borderSizeX = params.borderSizeX;
}


// Function SkillTypeButton.SkillTypeButton_C.IncreaseSizeX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          sizeChangeX                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTypeButton_C::IncreaseSizeX(float sizeChangeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.IncreaseSizeX");

	struct
	{
		float                          sizeChangeX;
	} params;

	params.sizeChangeX = sizeChangeX;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.SetOffset
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          offsetX                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTypeButton_C::SetOffset(float offsetX)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetOffset");

	struct
	{
		float                          offsetX;
	} params;

	params.offsetX = offsetX;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.SetSkillTypeLevel
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          SkillTypeLevel                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTypeButton_C::SetSkillTypeLevel(float SkillTypeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.SetSkillTypeLevel");

	struct
	{
		float                          SkillTypeLevel;
	} params;

	params.SkillTypeLevel = SkillTypeLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.ShowBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::ShowBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ShowBorder");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.HideBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::HideBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.HideBorder");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void USkillTypeButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_137_OnButtonReleasedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.BndEvt__SkillButton_K2Node_ComponentBoundEvent_392_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void USkillTypeButton_C::BndEvt__SkillButton_K2Node_ComponentBoundEvent_392_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.BndEvt__SkillButton_K2Node_ComponentBoundEvent_392_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.BndEvt__SkillButton_K2Node_ComponentBoundEvent_75_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void USkillTypeButton_C::BndEvt__SkillButton_K2Node_ComponentBoundEvent_75_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.BndEvt__SkillButton_K2Node_ComponentBoundEvent_75_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.ExecuteUbergraph_SkillTypeButton
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USkillTypeButton_C::ExecuteUbergraph_SkillTypeButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.ExecuteUbergraph_SkillTypeButton");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function SkillTypeButton.SkillTypeButton_C.OnClickedSkillTypeButton__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USkillTypeButton_C::OnClickedSkillTypeButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTypeButton.SkillTypeButton_C.OnClickedSkillTypeButton__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
