#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0008
struct FLiveLinkInterpolationSettings
{
	bool                                               bUseInterpolation;                                        // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              InterpolationOffset;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0020
struct FLiveLinkRefSkeleton
{
	TArray<struct FName>                               BoneNames;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        BoneParents;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x0010
struct FLiveLinkCurveElement
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurveValue;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0010
struct FLiveLinkWorldTime
{
	double                                             Time;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	double                                             Offset;                                                   // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0008
struct FLiveLinkFrameRate
{
	uint32_t                                           Numerator;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           Denominator;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0010
struct FLiveLinkTimeCode
{
	int                                                Seconds;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Frames;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLiveLinkFrameRate                          FrameRate;                                                // 0x0008(0x0008)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0060
struct FLiveLinkMetaData
{
	TMap<struct FName, struct FString>                 StringMetaData;                                           // 0x0000(0x0050) (CPF_ZeroConstructor)
	struct FLiveLinkTimeCode                           SceneTime;                                                // 0x0050(0x0010)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0090
struct FLiveLinkFrameData
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FLiveLinkCurveElement>               CurveElements;                                            // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FLiveLinkWorldTime                          WorldTime;                                                // 0x0020(0x0010)
	struct FLiveLinkMetaData                           MetaData;                                                 // 0x0030(0x0060)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0008
struct FLiveLinkSubjectName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
