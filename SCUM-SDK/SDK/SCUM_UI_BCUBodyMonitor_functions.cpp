// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_BCUBodyMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateSicknesses
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_BCUBodyMonitor_C::UpdateSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateSicknesses");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateValues
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_BCUBodyMonitor_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateValues");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.SetPrisoner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_BCUBodyMonitor_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.SetPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_BCUBodyMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_BCUBodyMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.ExecuteUbergraph_UI_BCUBodyMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_BCUBodyMonitor_C::ExecuteUbergraph_UI_BCUBodyMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.ExecuteUbergraph_UI_BCUBodyMonitor");

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
