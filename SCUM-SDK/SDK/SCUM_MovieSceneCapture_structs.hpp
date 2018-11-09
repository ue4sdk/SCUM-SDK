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

// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010
struct FCompositionGraphCapturePasses
{
	TArray<struct FString>                             Value;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct MovieSceneCapture.CaptureProtocolID
// 0x0008
struct FCaptureProtocolID
{
	struct FName                                       Identifier;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	int                                                ResX;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ResY;                                                     // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0050
struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath                              OutputDirectory;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	class UClass*                                      GameModeOverride;                                         // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     OutputFormat;                                             // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config)
	bool                                               bOverwriteExisting;                                       // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bUseRelativeFrameNumbers;                                 // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                HandleFrames;                                             // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      ZeroPadFrameNumbers;                                      // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FFrameRate                                  FrameRate;                                                // 0x0034(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	struct FCaptureResolution                          Resolution;                                               // 0x003C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	bool                                               bEnableTextureStreaming;                                  // 0x0044(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bCinematicEngineScalability;                              // 0x0045(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bCinematicMode;                                           // 0x0046(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bAllowMovement;                                           // 0x0047(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bAllowTurning;                                            // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bShowPlayer;                                              // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bShowHUD;                                                 // 0x004A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
