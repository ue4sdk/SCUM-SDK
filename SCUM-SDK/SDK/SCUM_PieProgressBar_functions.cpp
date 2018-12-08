// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_PieProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PieProgressBar.PieProgressBar_C.HidePieImages
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPieProgressBar_C::HidePieImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.HidePieImages");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.GetPercentageText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UPieProgressBar_C::GetPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetPercentageText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PieProgressBar.PieProgressBar_C.SetImageColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UPieProgressBar_C::SetImageColor(class UImage* Image, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetImageColor");

	struct
	{
		class UImage*                  Image;
		struct FLinearColor            Color;
	} params;

	params.Image = Image;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.SetTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              textWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UPieProgressBar_C::SetTextColor(class UTextBlock* textWidget, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetTextColor");

	struct
	{
		class UTextBlock*              textWidget;
		struct FLinearColor            Color;
	} params;

	params.textWidget = textWidget;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.SetCircularBarColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            CircularBarColor               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UPieProgressBar_C::SetCircularBarColor(const struct FLinearColor& CircularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetCircularBarColor");

	struct
	{
		struct FLinearColor            CircularBarColor;
	} params;

	params.CircularBarColor = CircularBarColor;

	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.GetCircularBarColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            CircularBarColor               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UPieProgressBar_C::GetCircularBarColor(struct FLinearColor* CircularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetCircularBarColor");

	struct
	{
		struct FLinearColor            CircularBarColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CircularBarColor != nullptr)
		*CircularBarColor = params.CircularBarColor;
}


// Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            outerCircleColor               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UPieProgressBar_C::SetOuterCircleColor(const struct FLinearColor& outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor");

	struct
	{
		struct FLinearColor            outerCircleColor;
	} params;

	params.outerCircleColor = outerCircleColor;

	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            outerCircleColor               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UPieProgressBar_C::GetOuterCircleColor(struct FLinearColor* outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor");

	struct
	{
		struct FLinearColor            outerCircleColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (outerCircleColor != nullptr)
		*outerCircleColor = params.outerCircleColor;
}


// Function PieProgressBar.PieProgressBar_C.GetNormalColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NormalColor                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UPieProgressBar_C::GetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetNormalColor");

	struct
	{
		struct FLinearColor            NormalColor;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NormalColor != nullptr)
		*NormalColor = params.NormalColor;
}


// Function PieProgressBar.PieProgressBar_C.SetNormalColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            NormalColor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UPieProgressBar_C::SetNormalColor(const struct FLinearColor& NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetNormalColor");

	struct
	{
		struct FLinearColor            NormalColor;
	} params;

	params.NormalColor = NormalColor;

	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPieProgressBar_C::UpdatePercentageArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.OnPercentageChanged
// (FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPieProgressBar_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.OnPercentageChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPieProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPieProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UPieProgressBar_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPieProgressBar_C::ExecuteUbergraph_PieProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar");

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
