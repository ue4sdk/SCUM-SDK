// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CC_NonSelectableText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.HighlightPartially
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_NonSelectableText_C::HighlightPartially(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.HighlightPartially");

	struct
	{
		float                          Percent;
	} params;

	params.Percent = Percent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Unhighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_NonSelectableText_C::Unhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Unhighlight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Highlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CC_NonSelectableText_C::Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Highlight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetTextColour
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Colour                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UUI_CC_NonSelectableText_C::SetTextColour(const struct FLinearColor& Colour)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetTextColour");

	struct
	{
		struct FLinearColor            Colour;
	} params;

	params.Colour = Colour;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CC_NonSelectableText_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetText");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_CC_NonSelectableText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CC_NonSelectableText_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.ExecuteUbergraph_UI_CC_NonSelectableText
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CC_NonSelectableText_C::ExecuteUbergraph_UI_CC_NonSelectableText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.ExecuteUbergraph_UI_CC_NonSelectableText");

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
