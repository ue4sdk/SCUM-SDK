#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LocationServicesBPLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (0x0028 - 0x0028)
class ULocationServices : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LocationServicesBPLibrary.LocationServices");
		return ptr;
	}


	static bool StopLocationServices();
	static bool StartLocationServices();
	static bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
	static bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	static class ULocationServicesImpl* GetLocationServicesImpl();
	static struct FLocationServicesData GetLastKnownLocation();
	static bool AreLocationServicesEnabled();
};


// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (0x0038 - 0x0028)
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                        // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LocationServicesBPLibrary.LocationServicesImpl");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
