#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_VictoryBPLibrary_enums.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_SlateCore_classes.hpp"
#include "SCUM_Slate_classes.hpp"
#include "SCUM_InputCore_classes.hpp"
#include "SCUM_AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VictoryBPLibrary.VictoryInputAxis
// 0x0040
struct FVictoryInputAxis
{
	struct FString                                     AxisName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     KeyAsString;                                              // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FKey                                        Key;                                                      // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Scale;                                                    // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct VictoryBPLibrary.VictoryInput
// 0x0040
struct FVictoryInput
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     KeyAsString;                                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bShift : 1;                                               // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct VictoryBPLibrary.LevelStreamInstanceInfo
// 0x0030
struct FLevelStreamInstanceInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       PackageNameToLoad;                                        // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0028(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0028(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      bShouldBlockOnLoad : 1;                                   // 0x0028(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                LODIndex;                                                 // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct VictoryBPLibrary.VictorySubtitleCue
// 0x0020
struct FVictorySubtitleCue
{
	struct FText                                       SubtitleText;                                             // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Time;                                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
