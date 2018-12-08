#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MIDIDevice.EMIDIEventType
enum class EMIDIEventType : uint8_t
{
	EMIDIEventType__Unknown        = 0,
	EMIDIEventType__NoteOff        = 1,
	EMIDIEventType__NoteOn         = 2,
	EMIDIEventType__NoteAfterTouch = 3,
	EMIDIEventType__ControlChange  = 4,
	EMIDIEventType__ProgramChange  = 5,
	EMIDIEventType__ChannelAfterTouch = 6,
	EMIDIEventType__PitchBend      = 7,
	EMIDIEventType__EMIDIEventType_MAX = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MIDIDevice.FoundMIDIDevice
// 0x0020
struct FFoundMIDIDevice
{
	int                                                DeviceID;                                                 // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     DeviceName;                                               // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               bCanReceiveFrom;                                          // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanSendTo;                                               // 0x0019(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAlreadyInUse;                                          // 0x001A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDefaultInputDevice;                                    // 0x001B(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDefaultOutputDevice;                                   // 0x001C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
