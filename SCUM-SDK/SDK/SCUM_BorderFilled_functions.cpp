// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BorderFilled_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BorderFilled.BorderFilled_C.UpdateBorderFilled
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBorderFilled_C::UpdateBorderFilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBorderFilled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.SetBottomMarginOn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldBottomMarginBeOn         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorderFilled_C::SetBottomMarginOn(bool shouldBottomMarginBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBottomMarginOn");

	struct
	{
		bool                           shouldBottomMarginBeOn;
	} params;

	params.shouldBottomMarginBeOn = shouldBottomMarginBeOn;

	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Margin                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          marginGap                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorderFilled_C::SetPaddingOnBackgroundImage(float Margin, float marginGap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage");

	struct
	{
		float                          Margin;
		float                          marginGap;
	} params;

	params.Margin = Margin;
	params.marginGap = marginGap;

	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UBorderFilled_C::SetColorOnBackgroundImage(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage");

	struct
	{
		struct FLinearColor            InColorAndOpacity;
	} params;

	params.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.SetBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            backgroundColorToSet           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UBorderFilled_C::SetBackgroundColor(const struct FLinearColor& backgroundColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBackgroundColor");

	struct
	{
		struct FLinearColor            backgroundColorToSet;
	} params;

	params.backgroundColorToSet = backgroundColorToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.UpdateBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NewBackgroundColor             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UBorderFilled_C::UpdateBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBackgroundColor");

	struct
	{
		struct FLinearColor            NewBackgroundColor;
	} params;

	params.NewBackgroundColor = NewBackgroundColor;

	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.SetBorderColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            borderColorToSet               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UBorderFilled_C::SetBorderColor(const struct FLinearColor& borderColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBorderColor");

	struct
	{
		struct FLinearColor            borderColorToSet;
	} params;

	params.borderColorToSet = borderColorToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBorderFilled_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBorderFilled_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorderFilled_C::ExecuteUbergraph_BorderFilled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled");

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
