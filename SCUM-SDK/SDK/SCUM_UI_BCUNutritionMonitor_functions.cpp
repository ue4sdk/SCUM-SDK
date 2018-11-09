// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_BCUNutritionMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.CheckIfNutritionPercentageIsSatisfying
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          satisfying                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_BCUNutritionMonitor_C::CheckIfNutritionPercentageIsSatisfying(float percentage, float* satisfying)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.CheckIfNutritionPercentageIsSatisfying");

	struct
	{
		float                          percentage;
		float                          satisfying;
	} params;

	params.percentage = percentage;

	UObject::ProcessEvent(fn, &params);

	if (satisfying != nullptr)
		*satisfying = params.satisfying;
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritionLines
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateNutritionLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritionLines");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateMinerals
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateMinerals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateMinerals");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateVitamins
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateVitamins()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateVitamins");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateNutritions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_BCUNutritionMonitor_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.SetPrisoner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_BCUNutritionMonitor_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.SetPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_BCUNutritionMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_BCUNutritionMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.ExecuteUbergraph_UI_BCUNutritionMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_BCUNutritionMonitor_C::ExecuteUbergraph_UI_BCUNutritionMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.ExecuteUbergraph_UI_BCUNutritionMonitor");

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
