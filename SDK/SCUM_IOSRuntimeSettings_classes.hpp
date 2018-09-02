#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_IOSRuntimeSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class IOSRuntimeSettings.IOSRuntimeSettings
// 0x0190 (0x01B8 - 0x0028)
class UIOSRuntimeSettings : public UObject
{
public:
	unsigned char                                      bEnableGameCenterSupport : 1;                             // 0x0028(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      bEnableCloudKitSupport : 1;                               // 0x0028(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      bEnableRemoteNotificationsSupport : 1;                    // 0x0028(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	bool                                               bSupportsMetal;                                           // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bSupportsMetalMRT;                                        // 0x002D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bCookPVRTCTextures;                                       // 0x002E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bCookASTCTextures;                                        // 0x002F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bSupportsOpenGLES2;                                       // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               EnableRemoteShaderCompile;                                // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bGeneratedSYMFile;                                        // 0x0032(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bGeneratedSYMBundle;                                      // 0x0033(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bGenerateCrashReportSymbols;                              // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bGenerateXCArchive;                                       // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bDevForArmV7;                                             // 0x0036(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bDevForArm64;                                             // 0x0037(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bDevForArmV7S;                                            // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bShipForArmV7;                                            // 0x0039(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bShipForArm64;                                            // 0x003A(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bShipForArmV7S;                                           // 0x003B(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bShipForBitcode;                                          // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FString                                     AdditionalLinkerFlags;                                    // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	struct FString                                     AdditionalShippingLinkerFlags;                            // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	struct FString                                     RemoteServerName;                                         // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	bool                                               bUseRSync;                                                // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FString                                     RSyncUsername;                                            // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	struct FIOSBuildResourceDirectory                  DeltaCopyInstallPath;                                     // 0x0088(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	struct FString                                     SSHPrivateKeyLocation;                                    // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	struct FIOSBuildResourceFilePath                   SSHPrivateKeyOverridePath;                                // 0x00A8(0x0010) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	bool                                               bTreatRemoteAsSeparateController;                         // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bAllowRemoteRotation;                                     // 0x00B9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bUseRemoteAsVirtualJoystick;                              // 0x00BA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	bool                                               bUseRemoteAbsoluteDpadValues;                             // 0x00BB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      bSupportsPortraitOrientation : 1;                         // 0x00BC(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      bSupportsUpsideDownOrientation : 1;                       // 0x00BC(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      bSupportsLandscapeLeftOrientation : 1;                    // 0x00BC(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      bSupportsLandscapeRightOrientation : 1;                   // 0x00BC(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	struct FString                                     BundleDisplayName;                                        // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	struct FString                                     BundleName;                                               // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	struct FString                                     BundleIdentifier;                                         // 0x00E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	struct FString                                     VersionInfo;                                              // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	EPowerUsageFrameRateLock                           FrameRateLock;                                            // 0x0100(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	EIOSVersion                                        MinimumiOSVersion;                                        // 0x0101(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	unsigned char                                      bSupportsIPad : 1;                                        // 0x0104(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      bSupportsIPhone : 1;                                      // 0x0104(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FString                                     AdditionalPlistData;                                      // 0x0108(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	bool                                               bEnableFacebookSupport;                                   // 0x0118(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FString                                     FacebookAppID;                                            // 0x0120(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	struct FString                                     MobileProvision;                                          // 0x0130(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	struct FString                                     SigningCertificate;                                       // 0x0140(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	bool                                               bAutomaticSigning;                                        // 0x0150(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	struct FString                                     IOSTeamID;                                                // 0x0158(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	bool                                               bDisableHTTPS;                                            // 0x0168(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      MaxShaderLanguageVersion;                                 // 0x0169(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               UseFastIntrinsics;                                        // 0x016A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               EnableMathOptimisations;                                  // 0x016B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bUseIntegratedKeyboard;                                   // 0x016C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	int                                                AudioSampleRate;                                          // 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                AudioCallbackBufferFrameSize;                             // 0x0174(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                AudioNumBuffersToEnqueue;                                 // 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                AudioMaxChannels;                                         // 0x017C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                AudioNumSourceWorkers;                                    // 0x0180(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FString                                     SpatializationPlugin;                                     // 0x0188(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ReverbPlugin;                                             // 0x0198(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     OcclusionPlugin;                                          // 0x01A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class IOSRuntimeSettings.IOSRuntimeSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
