// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CaloriesTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.UpdatePercentage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CaloriesTooltip_C::UpdatePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.UpdatePercentage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CaloriesTooltip_C::SetTitle(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetTitle");

	struct
	{
		struct FText                   Title;
	} params;

	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetMaxValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DisplayMaxValue                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CaloriesTooltip_C::SetMaxValue(float MaxValue, float DisplayMaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetMaxValue");

	struct
	{
		float                          MaxValue;
		float                          DisplayMaxValue;
	} params;

	params.MaxValue = MaxValue;
	params.DisplayMaxValue = DisplayMaxValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetValue
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CaloriesTooltip_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetValue");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
