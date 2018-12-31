// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MIDIDevice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FFoundMIDIDevice> OutMIDIDevices                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMIDIDeviceManager::FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices");

	struct
	{
		TArray<struct FFoundMIDIDevice> OutMIDIDevices;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutMIDIDevices != nullptr)
		*OutMIDIDevices = params.OutMIDIDevices;
}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            DeviceID                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MIDIBufferSize                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMIDIDeviceController*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMIDIDeviceController* UMIDIDeviceManager::CreateMIDIDeviceController(int DeviceID, int MIDIBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController");

	struct
	{
		int                            DeviceID;
		int                            MIDIBufferSize;
		class UMIDIDeviceController*   ReturnValue;
	} params;

	params.DeviceID = DeviceID;
	params.MIDIBufferSize = MIDIBufferSize;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
