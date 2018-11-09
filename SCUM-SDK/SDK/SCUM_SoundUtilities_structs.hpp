#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SoundUtilities.SoundVariation
// 0x0020
struct FSoundVariation
{
	class USoundWave*                                  SoundWave;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProbabilityWeight;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   VolumeRange;                                              // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   PitchRange;                                               // 0x0014(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
