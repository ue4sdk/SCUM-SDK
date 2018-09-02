#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_WeatherCaptureCamNew_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeatherCaptureCamNew.WeatherCaptureCamNew_C
// 0x0000 (0x0338 - 0x0338)
class AWeatherCaptureCamNew_C : public AWeatherCapture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WeatherCaptureCamNew.WeatherCaptureCamNew_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
