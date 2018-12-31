#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_OnlineSubsystemUtils_enums.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_OnlineSubsystem_classes.hpp"
#include "SCUM_AudioMixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Token;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient)
	struct FString                                     Type;                                                     // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<unsigned char>                              TokenBytes;                                               // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x0028) (CPF_Transient)
	struct FString                                     ValidationStr;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	struct FString                                     Platform;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	bool                                               bAllowCrossplay;                                          // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0040
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0008(0x0028) (CPF_Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
