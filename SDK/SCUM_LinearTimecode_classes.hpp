#pragma once

// SCUM (0.1.17.8320) SDK

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
// 0x0070 (0x0300 - 0x0290)
class ULinearTimecodeComponent : public USceneComponent
{
public:
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDropTimecode                               DropTimecode;                                             // 0x0298(0x0028) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTimecodeChange;                                         // 0x02C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x02D0(0x0030) MISSED OFFSET

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
