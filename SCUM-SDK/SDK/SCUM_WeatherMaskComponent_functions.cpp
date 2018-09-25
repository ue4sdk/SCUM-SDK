// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_WeatherMaskComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeatherMaskComponent.WeatherMaskComponent_C.ShowComponents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeatherMaskComponent_C::ShowComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.ShowComponents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherMaskComponent.WeatherMaskComponent_C.HideComponents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeatherMaskComponent_C::HideComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.HideComponents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherMaskComponent.WeatherMaskComponent_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeatherMaskComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherMaskComponent.WeatherMaskComponent_C.OnActorDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeatherMaskComponent_C::OnActorDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.OnActorDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function WeatherMaskComponent.WeatherMaskComponent_C.ExecuteUbergraph_WeatherMaskComponent
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeatherMaskComponent_C::ExecuteUbergraph_WeatherMaskComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherMaskComponent.WeatherMaskComponent_C.ExecuteUbergraph_WeatherMaskComponent");

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
