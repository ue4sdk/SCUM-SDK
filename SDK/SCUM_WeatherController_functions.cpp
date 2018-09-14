// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_WeatherController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeatherController.WeatherController_C.RecaptureSkyProbe
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeatherController_C::RecaptureSkyProbe()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.RecaptureSkyProbe");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.LerpFactors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeatherController_C::LerpFactors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.LerpFactors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.UpdateSkyParameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeatherController_C::UpdateSkyParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UpdateSkyParameters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.sunCompute
// (FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeatherController_C::sunCompute()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.sunCompute");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeatherController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeatherController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWeatherController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.NetworkSyncDayTime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeatherController_C::NetworkSyncDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.NetworkSyncDayTime");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.StartWeatherTransition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewStormIntensity              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TransitionTime                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeatherController_C::StartWeatherTransition(float NewStormIntensity, float TransitionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.StartWeatherTransition");

	struct
	{
		float                          NewStormIntensity;
		float                          TransitionTime;
	} params;

	params.NewStormIntensity = NewStormIntensity;
	params.TransitionTime = TransitionTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.Recapture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeatherController_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Recapture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.Event_SetWindDirection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void AWeatherController_C::Event_SetWindDirection(const struct FVector2D& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Event_SetWindDirection");

	struct
	{
		struct FVector2D               Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.Event_SetWindSpeed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeatherController_C::Event_SetWindSpeed(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Event_SetWindSpeed");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.ChangeWindDir
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWeatherController_C::ChangeWindDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ChangeWindDir");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeatherController_C::ExecuteUbergraph_WeatherController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController");

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
