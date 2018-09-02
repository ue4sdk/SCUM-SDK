// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CriminalRecordText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CriminalRecordText_C::SetValue(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue");

	struct
	{
		struct FText                   Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_CriminalRecordText_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CriminalRecordText_C::ExecuteUbergraph_UI_CriminalRecordText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText");

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
