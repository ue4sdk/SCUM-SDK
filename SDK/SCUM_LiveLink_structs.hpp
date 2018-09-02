#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_LiveLinkInterface_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	struct FName                                       SubjectName;                                              // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      RetargetAsset;                                            // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData)
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0050 (0x0590 - 0x0540)
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0540(0x0050) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0008
struct FLiveLinkRetargetAssetReference
{
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct LiveLink.LiveLinkVirtualSubject
// 0x0060
struct FLiveLinkVirtualSubject
{
	TArray<struct FName>                               Subjects;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FGuid                                       Source;                                                   // 0x0020(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
