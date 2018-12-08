#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MIDIDevice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MIDIDevice.MIDIDeviceController
// 0x0038 (0x0060 - 0x0028)
class UMIDIDeviceController : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMidiEvent;                                              // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	int                                                DeviceID;                                                 // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     DeviceName;                                               // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MIDIDevice.MIDIDeviceController");
		return ptr;
	}

};


// Class MIDIDevice.MIDIDeviceManager
// 0x0000 (0x0028 - 0x0028)
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MIDIDevice.MIDIDeviceManager");
		return ptr;
	}


	static void FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
	static class UMIDIDeviceController* CreateMIDIDeviceController(int DeviceID, int MIDIBufferSize);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
