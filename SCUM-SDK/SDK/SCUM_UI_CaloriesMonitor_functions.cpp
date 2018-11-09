// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CaloriesMonitor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.SetPrisoner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CaloriesMonitor_C::SetPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.SetPrisoner");

	struct
	{
		class APrisoner*               Prisoner;
	} params;

	params.Prisoner = Prisoner;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Update
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_CaloriesMonitor_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CaloriesMonitor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.ExecuteUbergraph_UI_CaloriesMonitor
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_CaloriesMonitor_C::ExecuteUbergraph_UI_CaloriesMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.ExecuteUbergraph_UI_CaloriesMonitor");

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
