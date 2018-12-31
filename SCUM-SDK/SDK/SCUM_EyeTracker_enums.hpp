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

// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected = 0,
	EEyeTrackerStatus__NotTracking = 1,
	EEyeTrackerStatus__Tracking    = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
