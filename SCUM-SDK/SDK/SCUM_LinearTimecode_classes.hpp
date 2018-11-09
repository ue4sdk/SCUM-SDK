#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LinearTimecode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LinearTimecode.LinearTimecodeComponent
// 0x0060 (0x02A0 - 0x0240)
class ULinearTimecodeComponent : public USceneComponent
{
public:
	struct FDropTimecode                               DropTimecode;                                             // 0x0240(0x001C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTimecodeChange;                                         // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0270(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LinearTimecode.LinearTimecodeComponent");
		return ptr;
	}


	static void SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int FrameNumber, struct FDropTimecode* OutTimecode);
	static void GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int* FrameNumber);
	int GetDropFrameNumber();
};


// Class LinearTimecode.DropTimecodeToStringConversion
// 0x0000 (0x0028 - 0x0028)
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LinearTimecode.DropTimecodeToStringConversion");
		return ptr;
	}


	static struct FString Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
