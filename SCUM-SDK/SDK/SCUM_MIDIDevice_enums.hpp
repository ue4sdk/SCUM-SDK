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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
