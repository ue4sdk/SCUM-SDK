#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_EngineSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EngineSettings.ConsoleSettings
// 0x0048 (0x0070 - 0x0028)
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                        // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMapPaths;                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              BackgroundOpacityPercentage;                              // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bOrderTopToBottom;                                        // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FColor                                      InputColor;                                               // 0x0058(0x0004) (CPF_Edit, CPF_Config, CPF_IsPlainOldData)
	struct FColor                                      HistoryColor;                                             // 0x005C(0x0004) (CPF_Edit, CPF_Config, CPF_IsPlainOldData)
	struct FColor                                      AutoCompleteCommandColor;                                 // 0x0060(0x0004) (CPF_Edit, CPF_Config, CPF_IsPlainOldData)
	struct FColor                                      AutoCompleteCVarColor;                                    // 0x0064(0x0004) (CPF_Edit, CPF_Config, CPF_IsPlainOldData)
	struct FColor                                      AutoCompleteFadedColor;                                   // 0x0068(0x0004) (CPF_Edit, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EngineSettings.ConsoleSettings");
		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x00E0 (0x0108 - 0x0028)
class UGameMapsSettings : public UObject
{
public:
	struct FSoftObjectPath                             EditorStartupMap;                                         // 0x0028(0x0018) (CPF_Edit, CPF_Config)
	struct FString                                     LocalMapOptions;                                          // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FSoftObjectPath                             TransitionMap;                                            // 0x0050(0x0018) (CPF_Edit, CPF_Config)
	bool                                               bUseSplitscreen;                                          // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               // 0x0069(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             // 0x006A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bOffsetPlayerGamepadIds;                                  // 0x006B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FSoftClassPath                              GameInstanceClass;                                        // 0x0070(0x0018) (CPF_Edit, CPF_Config, CPF_NoClear)
	struct FSoftObjectPath                             GameDefaultMap;                                           // 0x0088(0x0018) (CPF_Edit, CPF_Config)
	struct FSoftObjectPath                             ServerDefaultMap;                                         // 0x00A0(0x0018) (CPF_Edit, CPF_Config)
	struct FSoftClassPath                              GlobalDefaultGameMode;                                    // 0x00B8(0x0018) (CPF_Edit, CPF_Config, CPF_NoClear)
	struct FSoftClassPath                              GlobalDefaultServerGameMode;                              // 0x00D0(0x0018) (CPF_Edit, CPF_Config)
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                      // 0x00E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FGameModeName>                       GameModeClassAliases;                                     // 0x00F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EngineSettings.GameMapsSettings");
		return ptr;
	}

};


// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                      // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                MaxDynamicBandwidth;                                      // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            // 0x0038(0x0001) (CPF_Edit, CPF_Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              StandbyRxCheatTime;                                       // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              JoinInProgressStandbyWaitTime;                            // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                            // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	unsigned char                                      bRequiresPushToTalk : 1;                                  // 0x0030(0x0001) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EngineSettings.GameSessionSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00F0 (0x0118 - 0x0028)
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                              // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CompanyDistinguishedName;                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CopyrightNotice;                                          // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Description;                                              // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Homepage;                                                 // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     LicensingTerms;                                           // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     PrivacyPolicy;                                            // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FGuid                                       ProjectID;                                                // 0x0098(0x0010) (CPF_Edit, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     ProjectName;                                              // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     ProjectVersion;                                           // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     SupportContact;                                           // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FText                                       ProjectDisplayedTitle;                                    // 0x00D8(0x0018) (CPF_Edit, CPF_Config)
	struct FText                                       ProjectDebugTitleInfo;                                    // 0x00F0(0x0018) (CPF_Edit, CPF_Config)
	bool                                               bShouldWindowPreserveAspectRatio;                         // 0x0108(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bUseBorderlessWindow;                                     // 0x0109(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bStartInVR;                                               // 0x010A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bStartInAR;                                               // 0x010B(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bSupportAR;                                               // 0x010C(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bAllowWindowResize;                                       // 0x010D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bAllowClose;                                              // 0x010E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bAllowMaximize;                                           // 0x010F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bAllowMinimize;                                           // 0x0110(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                             // 0x0028(0x0001) (CPF_Edit, CPF_Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FName>                               DebugDisplay;                                             // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EngineSettings.HudSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
