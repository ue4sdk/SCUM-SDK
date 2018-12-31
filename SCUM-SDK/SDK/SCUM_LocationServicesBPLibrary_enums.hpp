#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers = 0,
	ELocationAccuracy__LA_OneKilometer = 1,
	ELocationAccuracy__LA_HundredMeters = 2,
	ELocationAccuracy__LA_TenMeters = 3,
	ELocationAccuracy__LA_Best     = 4,
	ELocationAccuracy__LA_Navigation = 5,
	ELocationAccuracy__LA_MAX      = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
