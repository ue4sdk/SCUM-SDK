// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BracketedBackground_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BracketedBackground.BracketedBackground_C.SetAlarmBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBracketedBackground_C::SetAlarmBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetAlarmBackgroundColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BracketedBackground.BracketedBackground_C.SetNormalBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBracketedBackground_C::SetNormalBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetNormalBackgroundColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BracketedBackground.BracketedBackground_C.SetBackgroundColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            colorToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UBracketedBackground_C::SetBackgroundColor(const struct FLinearColor& colorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetBackgroundColor");

	struct
	{
		struct FLinearColor            colorToSet;
	} params;

	params.colorToSet = colorToSet;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
