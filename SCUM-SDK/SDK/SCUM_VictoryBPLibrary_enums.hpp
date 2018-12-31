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

// Enum VictoryBPLibrary.ESpeedUnit
enum class ESpeedUnit : uint8_t
{
	CentimeterPerSecond            = 0,
	FootPerSecond                  = 1,
	MeterPerSecond                 = 2,
	MeterPerMinute                 = 3,
	KilometerPerSecond             = 4,
	KilometerPerMinute             = 5,
	KilometerPerHour               = 6,
	MilePerHour                    = 7,
	Knot                           = 8,
	Mach                           = 9,
	SpeedOfLight                   = 10,
	YardPerSecond                  = 11,
	ESpeedUnit_MAX                 = 12
};


// Enum VictoryBPLibrary.EJoyGraphicsFullScreen
enum class EJoyGraphicsFullScreen : uint8_t
{
	EJoyGraphicsFullScreen__FullScreen = 0,
	EJoyGraphicsFullScreen__WindowedFullScreen = 1,
	EJoyGraphicsFullScreen__WindowedFullScreenPerformance = 2,
	EJoyGraphicsFullScreen__EJoyGraphicsFullScreen_Max = 3
};


// Enum VictoryBPLibrary.EVictoryHMDDevice
enum class EVictoryHMDDevice : uint8_t
{
	EVictoryHMDDevice__None        = 0,
	EVictoryHMDDevice__OculusRift  = 1,
	EVictoryHMDDevice__Morpheus    = 2,
	EVictoryHMDDevice__ES2GenericStereoMesh = 3,
	EVictoryHMDDevice__SteamVR     = 4,
	EVictoryHMDDevice__GearVR      = 5,
	EVictoryHMDDevice__EVictoryHMDDevice_MAX = 6
};


// Enum VictoryBPLibrary.EJoyImageFormats
enum class EJoyImageFormats : uint8_t
{
	EJoyImageFormats__JPG          = 0,
	EJoyImageFormats__PNG          = 1,
	EJoyImageFormats__BMP          = 2,
	EJoyImageFormats__ICO          = 3,
	EJoyImageFormats__EXR          = 4,
	EJoyImageFormats__ICNS         = 5,
	EJoyImageFormats__EJoyImageFormats_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
