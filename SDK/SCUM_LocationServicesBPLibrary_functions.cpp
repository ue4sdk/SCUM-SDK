// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LocationServicesBPLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LocationServicesBPLibrary.LocationServices.StopLocationServices
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULocationServices::StopLocationServices()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StopLocationServices");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.StartLocationServices
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULocationServices::StartLocationServices()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StartLocationServices");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ELocationAccuracy              Accuracy                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULocationServices::IsLocationAccuracyAvailable(ELocationAccuracy Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable");

	struct
	{
		ELocationAccuracy              Accuracy;
		bool                           ReturnValue;
	} params;

	params.Accuracy = Accuracy;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.InitLocationServices
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ELocationAccuracy              Accuracy                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          UpdateFrequency                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MinDistanceFilter              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULocationServices::InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.InitLocationServices");

	struct
	{
		ELocationAccuracy              Accuracy;
		float                          UpdateFrequency;
		float                          MinDistanceFilter;
		bool                           ReturnValue;
	} params;

	params.Accuracy = Accuracy;
	params.UpdateFrequency = UpdateFrequency;
	params.MinDistanceFilter = MinDistanceFilter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULocationServicesImpl*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULocationServicesImpl* ULocationServices::GetLocationServicesImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl");

	struct
	{
		class ULocationServicesImpl*   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FLocationServicesData   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLocationServicesData ULocationServices::GetLastKnownLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation");

	struct
	{
		struct FLocationServicesData   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULocationServices::AreLocationServicesEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
