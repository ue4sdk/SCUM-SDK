#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_TimeManagement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (0x0030 - 0x0028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                           // 0x0028(0x0008) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}


	static struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
	static struct FTimecode GetTimecode();
	static struct FString Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
	static float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	static float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
};


// Class TimeManagement.TimeSynchronizationSource
// 0x0010 (0x0038 - 0x0028)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                   // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                NumberOfExtraBufferedFrame;                               // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeDelay;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
