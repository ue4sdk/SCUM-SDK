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

// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
	ESoundwaveSampleRateSettings__Max = 0,
	ESoundwaveSampleRateSettings__High = 1,
	ESoundwaveSampleRateSettings__Medium = 2,
	ESoundwaveSampleRateSettings__Low = 3,
	ESoundwaveSampleRateSettings__Min = 4,
	ESoundwaveSampleRateSettings__MatchDevice = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
