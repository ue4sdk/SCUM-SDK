#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_LiveLinkInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
// 0x0008
struct FLiveLinkClearSubject
{
	struct FName                                       SubjectName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
// 0x0001
struct FLiveLinkHeartbeatMessage
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
// 0x0001
struct FLiveLinkConnectMessage
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
// 0x0030
struct FLiveLinkPongMessage
{
	struct FString                                     ProviderName;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     MachineName;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       PollRequest;                                              // 0x0020(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
// 0x0010
struct FLiveLinkPingMessage
{
	struct FGuid                                       PollRequest;                                              // 0x0000(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// 0x0090
struct FLiveLinkSubjectFrameMessage
{
	struct FName                                       SubjectName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTransform>                          Transforms;                                               // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<struct FLiveLinkCurveElement>               Curves;                                                   // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FLiveLinkMetaData                           MetaData;                                                 // 0x0028(0x0060)
	double                                             Time;                                                     // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
// 0x0028
struct FLiveLinkSubjectDataMessage
{
	struct FLiveLinkRefSkeleton                        RefSkeleton;                                              // 0x0000(0x0020)
	struct FName                                       SubjectName;                                              // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
