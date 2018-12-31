#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_AIModule_enums.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_GameplayTasks_classes.hpp"
#include "SCUM_NavigationSystem_classes.hpp"
#include "SCUM_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.AIDataProviderValue
// 0x0020
struct FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UProperty*                                   CachedProperty;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UAIDataProvider*                             DataBinding;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       DataField;                                                // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// 0x0008 (0x0028 - 0x0020)
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
	class UClass*                                      PropertyType;                                             // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
	bool                                               DefaultValue;                                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
	float                                              DefaultValue;                                             // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.AIRequestID
// 0x0004
struct FAIRequestID
{
	uint32_t                                           RequestID;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.AIStimulus
// 0x0048
struct FAIStimulus
{
	float                                              Age;                                                      // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExpirationAge;                                            // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     StimulusLocation;                                         // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     ReceiverLocation;                                         // 0x0018(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       Tag;                                                      // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData02 : 1;                                        // 0x0040(0x0001)
	unsigned char                                      bSuccessfullySensed : 1;                                  // 0x0040(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x0020
struct FActorPerceptionBlueprintInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAIStimulus>                         LastSensedStimuli;                                        // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bIsHostile : 1;                                           // 0x0018(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIDamageEvent
// 0x0030
struct FAIDamageEvent
{
	float                                              amount;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      DamagedActor;                                             // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.AINoiseEvent
// 0x0030
struct FAINoiseEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     NoiseLocation;                                            // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Loudness;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AIPredictionEvent
// 0x0018
struct FAIPredictionEvent
{
	class AActor*                                      Requestor;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      PredictedActor;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AITeamStimulusEvent
// 0x0038
struct FAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class AActor*                                      Broadcaster;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Enemy;                                                    // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.AITouchEvent
// 0x0020
struct FAITouchEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class AActor*                                      TouchReceiver;                                            // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x0004
struct FAISenseAffiliationFilter
{
	unsigned char                                      bDetectEnemies : 1;                                       // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bDetectNeutrals : 1;                                      // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bDetectFriendlies : 1;                                    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.AIMoveRequest
// 0x0040
struct FAIMoveRequest
{
	class AActor*                                      GoalActor;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AIModule.BTDecoratorLogic
// 0x0004
struct FBTDecoratorLogic
{
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Number;                                                   // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x0018
struct FBehaviorTreeTemplateInfo
{
	class UBehaviorTree*                               Asset;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBTCompositeNode*                            Template;                                                 // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.BlackboardEntry
// 0x0018
struct FBlackboardEntry
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlackboardKeyType*                          KeyType;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bInstanceSynced : 1;                                      // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.BTCompositeChild
// 0x0030
struct FBTCompositeChild
{
	class UBTCompositeNode*                            ChildComposite;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBTTaskNode*                                 ChildTask;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UBTDecorator*>                        Decorators;                                               // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   DecoratorOps;                                             // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct AIModule.BlackboardKeySelector
// 0x0028
struct FBlackboardKeySelector
{
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient)
	struct FName                                       SelectedKeyName;                                          // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class UClass*                                      SelectedKeyType;                                          // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      SelectedKeyID;                                            // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	unsigned char                                      bNoneIsAllowedValue : 1;                                  // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.AIDynamicParam
// 0x0038
struct FAIDynamicParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	EAIParamType                                       ParamType;                                                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBlackboardKeySelector                      BBKey;                                                    // 0x0010(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// 0x0048
struct FEQSParametrizedQueryExecutionRequest
{
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x0018(0x0028) (CPF_Edit)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	unsigned char                                      bUseBBKeyForQueryTemplate : 1;                            // 0x0044(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.EnvNamedValue
// 0x0010
struct FEnvNamedValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAIParamType                                       ParamType;                                                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// 0x001C
struct FCrowdAvoidanceConfig
{
	float                                              VelocityBias;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DesiredVelocityWeight;                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentVelocityWeight;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SideBiasWeight;                                           // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactTimeWeight;                                         // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactTimeRange;                                          // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomPatternIdx;                                         // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AdaptiveDivisions;                                        // 0x0019(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AdaptiveRings;                                            // 0x001A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AdaptiveDepth;                                            // 0x001B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// 0x0020
struct FCrowdAvoidanceSamplingPattern
{
	TArray<float>                                      Angles;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      Radii;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct AIModule.EnvTraceData
// 0x0030
struct FEnvTraceData
{
	int                                                VersionNum;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      NavigationFilter;                                         // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProjectDown;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProjectUp;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtentY;                                                  // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PostProjectionVerticalOffset;                             // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                        // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                               // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTraceComplex : 1;                                        // 0x002C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bOnlyBlockingHits : 1;                                    // 0x002C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanTraceOnNavMesh : 1;                                   // 0x002C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanTraceOnGeometry : 1;                                  // 0x002C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanDisableTrace : 1;                                     // 0x002C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanProjectDown : 1;                                      // 0x002C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderIntValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
	int                                                DefaultValue;                                             // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.EnvDirection
// 0x0020
struct FEnvDirection
{
	class UClass*                                      LineFrom;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LineTo;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Rotation;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EEnvDirection>                         DirMode;                                                  // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// 0x0178
struct FEnvQueryInstanceCache
{
	class UEnvQuery*                                   Template;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x170];                                     // 0x0008(0x0170) MISSED OFFSET
};

// ScriptStruct AIModule.EnvOverlapData
// 0x0020
struct FEnvOverlapData
{
	float                                              ExtentX;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     ShapeOffset;                                              // 0x000C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EEnvOverlapShape>                      OverlapShape;                                             // 0x0019(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	unsigned char                                      bOnlyBlockingHits : 1;                                    // 0x001C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bOverlapComplex : 1;                                      // 0x001C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.PawnActionStack
// 0x0008
struct FPawnActionStack
{
	class UPawnAction*                                 TopAction;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.PawnActionEvent
// 0x0018
struct FPawnActionEvent
{
	class UPawnAction*                                 action;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderStructValue
// 0x0010 (0x0030 - 0x0020)
struct FAIDataProviderStructValue : public FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.AISightEvent
// 0x0018
struct FAISightEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SeenActor;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Observer;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AIModule.EnvQueryRequest
// 0x0068
struct FEnvQueryRequest
{
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWorld*                                      World;                                                    // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryResult
// 0x0040
struct FEnvQueryResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0018(0x0014) MISSED OFFSET
	int                                                OptionIndex;                                              // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                QueryID;                                                  // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct AIModule.GenericTeamId
// 0x0001
struct FGenericTeamId
{
	unsigned char                                      teamId;                                                   // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
