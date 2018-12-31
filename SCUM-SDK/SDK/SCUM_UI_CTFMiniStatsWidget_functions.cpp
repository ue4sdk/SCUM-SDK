// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CTFMiniStatsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UUI_CTFMiniStatsWidget_C::GetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CTFMiniStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CTFMiniStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CTFMiniStatsWidget_C::ExecuteUbergraph_UI_CTFMiniStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget");

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
