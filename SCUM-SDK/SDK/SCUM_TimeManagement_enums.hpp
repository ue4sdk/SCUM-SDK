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

// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode = 1,
	EFrameNumberDisplayFormats__Seconds = 2,
	EFrameNumberDisplayFormats__Frames = 3,
	EFrameNumberDisplayFormats__MAX_Count = 4,
	EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
