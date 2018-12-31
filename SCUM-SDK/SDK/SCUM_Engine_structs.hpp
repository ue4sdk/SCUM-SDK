#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_Engine_enums.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_InputCore_classes.hpp"
#include "SCUM_Slate_classes.hpp"
#include "SCUM_SlateCore_classes.hpp"
#include "SCUM_PacketHandler_classes.hpp"
#include "SCUM_AudioPlatformConfiguration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0050
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000C(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x33];                                      // 0x000D(0x0033) MISSED OFFSET
	float                                              TickInterval;                                             // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                           // 0x0000(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x000C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0018(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0024(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                // 0x0030(0x0001) (CPF_Transient)
	unsigned char                                      bRepPhysics : 1;                                          // 0x0030(0x0001) (CPF_Transient)
	EVectorQuantization                                LocationQuantizationLevel;                                // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	EVectorQuantization                                VelocityQuantizationLevel;                                // 0x0032(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	ERotatorQuantization                               RotationQuantizationLevel;                                // 0x0033(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      LocationOffset;                                           // 0x0008(0x000C)
	struct FVector_NetQuantize100                      RelativeScale3D;                                          // 0x0014(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x0020(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             AttachComponent;                                          // 0x0038(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.HitResult
// 0x0088
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bStartPenetrating : 1;                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                FaceIndex;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x0010(0x000C)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x001C(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0028(0x000C)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0034(0x000C)
	struct FVector_NetQuantize                         TraceStart;                                               // 0x0040(0x000C)
	struct FVector_NetQuantize                         TraceEnd;                                                 // 0x004C(0x000C)
	float                                              PenetrationDepth;                                         // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Item;                                                     // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0070(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MyBoneName;                                               // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLockOutgoing : 1;                                        // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x0010
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVisible : 1;                                           // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0027 (0x0028 - 0x0001)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
	TArray<unsigned char>                              ReplicationBytes;                                         // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UUID;                                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ExecutionFunction;                                        // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     CallbackTarget;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x0010
struct FUpdateLevelStreamingLevelStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNewShouldBeLoaded : 1;                                   // 0x000C(0x0001)
	unsigned char                                      bNewShouldBeVisible : 1;                                  // 0x000C(0x0001)
	unsigned char                                      bNewShouldBlockOnLoad : 1;                                // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MemberName;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0010(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightingChannels
// 0x0001
struct FLightingChannels
{
	unsigned char                                      bChannel0 : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bChannel1 : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bChannel2 : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<ECollisionResponse>                    WorldStatic;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    WorldDynamic;                                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Pawn;                                                     // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Visibility;                                               // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Camera;                                                   // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    PhysicsBody;                                              // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Vehicle;                                                  // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Destructible;                                             // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel1;                                      // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel2;                                      // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel3;                                      // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel4;                                      // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel5;                                      // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel6;                                      // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel1;                                        // 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel2;                                        // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel3;                                        // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel4;                                        // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel5;                                        // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel6;                                        // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel7;                                        // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel8;                                        // 0x0015(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel9;                                        // 0x0016(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel10;                                       // 0x0017(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel11;                                       // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel12;                                       // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel13;                                       // 0x001A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel14;                                       // 0x001B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel15;                                       // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel16;                                       // 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel17;                                       // 0x001E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel18;                                       // 0x001F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ResponseChannel
// 0x0010
struct FResponseChannel
{
	struct FName                                       Channel;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Response;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                       // 0x0000(0x0020) (CPF_Transient)
	TArray<struct FResponseChannel>                    ResponseArray;                                            // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0010
struct FWalkableSlopeOverride
{
	TEnumAsByte<EWalkableSlopeBehavior>                WalkableSlopeBehavior;                                    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WalkableSlopeAngle;                                       // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BodyInstance
// 0x0158
struct FBodyInstance
{
	unsigned char                                      UnknownData00[0xA];                                       // 0x0000(0x000A) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               // 0x000A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x000D(0x0001) MISSED OFFSET
	ESleepFamily                                       SleepFamily;                                              // 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EDOFMode>                              DOFMode;                                                  // 0x000F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseCCD : 1;                                              // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData03 : 1;                                        // 0x0010(0x0001)
	unsigned char                                      bSimulatePhysics : 1;                                     // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverrideMass : 1;                                        // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      bEnableGravity : 1;                                       // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAutoWeld : 1;                                            // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bStartAwake : 1;                                          // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bGenerateWakeEvents : 1;                                  // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                          // 0x0011(0x0001)
	unsigned char                                      bLockTranslation : 1;                                     // 0x0011(0x0001) (CPF_Edit)
	unsigned char                                      bLockRotation : 1;                                        // 0x0011(0x0001) (CPF_Edit)
	unsigned char                                      bLockXTranslation : 1;                                    // 0x0011(0x0001) (CPF_Edit)
	unsigned char                                      bLockYTranslation : 1;                                    // 0x0011(0x0001) (CPF_Edit)
	unsigned char                                      bLockZTranslation : 1;                                    // 0x0011(0x0001) (CPF_Edit)
	unsigned char                                      bLockXRotation : 1;                                       // 0x0011(0x0001) (CPF_Edit)
	unsigned char                                      bLockYRotation : 1;                                       // 0x0012(0x0001) (CPF_Edit)
	unsigned char                                      bLockZRotation : 1;                                       // 0x0012(0x0001) (CPF_Edit)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          // 0x0012(0x0001) (CPF_Edit)
	unsigned char                                      bUseAsyncScene : 1;                                       // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData04 : 2;                                        // 0x0012(0x0001)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    // 0x0012(0x0001) (CPF_Edit)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     // 0x0012(0x0001) (CPF_Edit)
	unsigned char                                      bInterpolateWhenSubStepping : 1;                          // 0x0013(0x0001)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCollisionResponse                          CollisionResponses;                                       // 0x0028(0x0030) (CPF_Edit)
	float                                              MaxDepenetrationVelocity;                                 // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MassInKgOverride;                                         // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	float                                              LinearDamping;                                            // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularDamping;                                           // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CustomDOFPlaneNormal;                                     // 0x0070(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     COMNudge;                                                 // 0x007C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              MassScale;                                                // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x008C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                     // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CustomSleepThresholdMultiplier;                           // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StabilizationThresholdMultiplier;                         // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x00CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PositionSolverIterationCount;                             // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                VelocitySolverIterationCount;                             // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x80];                                      // 0x00D8(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0020
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x0028
struct FSkelMeshSkinWeightInfo
{
	int                                                Bones[0x8];                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Weights[0x8];                                             // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0014
struct FMeshUVChannelInfo
{
	bool                                               bInitialized;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideDensities;                                       // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LocalUVDensities[0x4];                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0030
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableShadowCasting;                                     // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bRecomputeTangent;                                        // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FName                                       MaterialSlotName;                                         // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0018(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformFloat
// 0x0004
struct FPerPlatformFloat
{
	float                                              Default;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BoneReference
// 0x0018
struct FBoneReference
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0048
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRemapMorphTargets;                                       // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        // 0x000E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        // 0x000F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              WeldingThreshold;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxBonesPerVertex;                                        // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FBoneReference>                      BonesToRemove;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	int                                                BaseLOD;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UAnimSequence*                               BakePose;                                                 // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x00B8
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (CPF_Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<bool>                                       bEnableShadowCasting;                                     // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x0028(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0030(0x0048) (CPF_Edit)
	TArray<struct FName>                               RemovedBones;                                             // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<struct FBoneReference>                      BonesToRemove;                                            // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UAnimSequence*                               BakePose;                                                 // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SourceImportFilename;                                     // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      bHasPerLODVertexColors : 1;                               // 0x00B0(0x0001)
	unsigned char                                      bAllowCPUAccess : 1;                                      // 0x00B0(0x0001) (CPF_Edit)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x00B0(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformInt
// 0x0004
struct FPerPlatformInt
{
	int                                                Default;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x0050
struct FClothPhysicsProperties_Legacy
{
	float                                              VerticalResistance;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HorizontalResistance;                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BendResistance;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShearResistance;                                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Friction;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damping;                                                  // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TetherStiffness;                                          // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TetherLimit;                                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Drag;                                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GravityScale;                                             // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MassScale;                                                // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InertiaBlend;                                             // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelfCollisionThickness;                                   // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelfCollisionSquashScale;                                 // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiberCompression;                                         // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiberExpansion;                                           // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiberResistance;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x0078
struct FClothingAssetData_Legacy
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ApexFileName;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
	bool                                               bClothPropertiesChanged;                                  // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FClothPhysicsProperties_Legacy              PhysicsProperties;                                        // 0x001C(0x0050) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x006C(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// 0x0008
struct FSkeletalMeshSamplingRegionMaterialFilter
{
	struct FName                                       MaterialName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// 0x0010
struct FSkeletalMeshSamplingRegionBoneFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIncludeOrExclude : 1;                                    // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// 0x0030
struct FSkeletalMeshSamplingRegion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;                                          // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;                                              // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// 0x0048
struct FSkeletalMeshSamplingLODBuiltData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// 0x0068
struct FSkeletalMeshSamplingRegionBuiltData
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// 0x0020
struct FSkeletalMeshSamplingBuiltData
{
	TArray<struct FSkeletalMeshSamplingLODBuiltData>   WholeMeshBuiltData;                                       // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;                                          // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// 0x0030
struct FSkeletalMeshSamplingInfo
{
	TArray<struct FSkeletalMeshSamplingRegion>         Regions;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FSkeletalMeshSamplingBuiltData              BuiltData;                                                // 0x0010(0x0020)
};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0010
struct FSoundConcurrencySettings
{
	int                                                MaxCount;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLimitToOwner : 1;                                        // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TEnumAsByte<EMaxConcurrentResolutionRule>          ResolutionRule;                                           // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              VolumeScale;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x0010
struct FSoundSubmixSendInfo
{
	float                                              SendLevel;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USoundSubmix*                                SoundSubmix;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// 0x0010
struct FSoundSourceBusSendInfo
{
	float                                              SendLevel;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USoundSourceBus*                             SoundSourceBus;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Index;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SelectionIndex;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x0080
struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AGameStateBase*                              GameState;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDemoNetDriver*                              DemoNetDriver;                                            // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULevel*                                      PersistentLevel;                                          // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty Engine.LevelCollection.Levels
	unsigned char                                      UnknownData02[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PSCPoolElem
// 0x0010
struct FPSCPoolElem
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PSCPool
// 0x0038
struct FPSCPool
{
	TArray<struct FPSCPoolElem>                        FreeElements;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UParticleSystemComponent*>            InUseComponents_Auto;                                     // 0x0010(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	TArray<class UParticleSystemComponent*>            InUseComponents_Manual;                                   // 0x0020(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldPSCPool
// 0x0058
struct FWorldPSCPool
{
	TMap<class UParticleSystem*, struct FPSCPool>      WorldParticleSystemPools;                                 // 0x0000(0x0050) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0018
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSavedLooping : 1;                                        // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bSavedPlaying : 1;                                        // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SavedPosition;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SavedPlayRate;                                            // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PoseSnapshot
// 0x0038
struct FPoseSnapshot
{
	TArray<struct FTransform>                          LocalTransforms;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FName                                       SkeletalMeshName;                                         // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SnapshotName;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEventReference
// 0x0010
struct FAnimNotifyEventReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     NotifySource;                                             // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyArray
// 0x0010
struct FAnimNotifyArray
{
	TArray<struct FAnimNotifyEventReference>           Notifies;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct Engine.AnimNotifyQueue
// 0x0070
struct FAnimNotifyQueue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEventReference>           AnimNotifies;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TMap<struct FName, struct FAnimNotifyArray>        UnfilteredMontageAnimNotifies;                            // 0x0020(0x0050) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAnimMontage*                                LinkedMontage;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SegmentIndex;                                             // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                               // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                         // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              SegmentBeginTime;                                         // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SegmentLength;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinkValue;                                                // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           LinkedSequence;                                           // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                              // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTriggerTimeOffset;                                     // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TriggerWeightThreshold;                                   // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimNotify*                                 Notify;                                                   // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAnimNotifyState*                            NotifyStateClass;                                         // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FAnimLinkableElement                        EndLink;                                                  // 0x0060(0x0030)
	bool                                               bConvertedFromBranchingPoint;                             // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                          // 0x0091(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              NotifyTriggerChance;                                      // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                         // 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                NotifyFilterLOD;                                          // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTriggerOnDedicatedServer;                                // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTriggerOnFollower;                                       // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	int                                                TrackIndex;                                               // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0018
struct FMarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NextMarkerName;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositionBetweenMarkers;                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                           // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCanJump : 1;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCanWalk : 1;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCanSwim : 1;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCanFly : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.NavAgentProperties
// 0x002C (0x0030 - 0x0004)
struct FNavAgentProperties : public FMovementProperties
{
	float                                              AgentRadius;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AgentStepHeight;                                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NavWalkingSearchHeightScale;                              // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSoftClassPath                              PreferredNavData;                                         // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.PaintedVertex
// 0x0030
struct FPaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector4                                    Normal;                                                   // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0020(0x0004) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x00B0
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          // 0x0020(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0030(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x000C
struct FStreamingTextureBuildInfo
{
	uint32_t                                           PackedRelativeBox;                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TextureLevelIndex;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                 // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bShadowIndirectOnly : 1;                                  // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveLightFalloffExponent;                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ExpressionInput
// 0x0030
struct FExpressionInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       InputName;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Mask;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskR;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskG;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskB;                                                    // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskA;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       ExpressionName;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (CPF_IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bServerHasVelocity;                                       // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FRootMotionSourceSettings
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x0100
struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
	bool                                               bHasAdditiveSources;                                      // 0x00E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasOverrideSources;                                      // 0x00E9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	struct FVector_NetQuantize10                       LastPreAdditiveVelocity;                                  // 0x00EC(0x000C)
	bool                                               bIsAdditiveVelocityApplied;                               // 0x00F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRootMotionSourceSettings                   LastAccumulatedSettings;                                  // 0x00F9(0x0001)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                           // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RootMotionTransform;                                      // 0x0010(0x0030) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0160
struct FRepRootMotionMontage
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0014(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       MovementBaseBoneName;                                     // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRelativePosition;                                        // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FRootMotionSourceGroup                      AuthoritativeRootMotion;                                  // 0x0048(0x0100)
	struct FVector_NetQuantize10                       Acceleration;                                             // 0x0148(0x000C)
	struct FVector_NetQuantize10                       LinearVelocity;                                           // 0x0154(0x000C)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0168
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FRepRootMotionMontage                       RootMotion;                                               // 0x0008(0x0160)
};

// ScriptStruct Engine.SplineCurves
// 0x0060
struct FSplineCurves
{
	struct FInterpCurveVector                          Position;                                                 // 0x0000(0x0018)
	struct FInterpCurveQuat                            Rotation;                                                 // 0x0018(0x0018)
	struct FInterpCurveVector                          Scale;                                                    // 0x0030(0x0018)
	struct FInterpCurveFloat                           ReparamTable;                                             // 0x0048(0x0018)
};

// ScriptStruct Engine.SplinePoint
// 0x0044
struct FSplinePoint
{
	float                                              InputKey;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0034(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<ESplinePointType>                      Type;                                                     // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloatParam;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               BoolParam;                                                // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                IntParam;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWaveParam;                                           // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.KeyHandleMap
// 0x0050
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0058
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      // 0x0008(0x0050) (CPF_Transient)
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RichCurve
// 0x0018 (0x0070 - 0x0058)
struct FRichCurve : public FIndexedCurve
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0059(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              DefaultValue;                                             // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FRichCurveKey>                       Keys;                                                     // 0x0060(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0078
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                          // 0x0000(0x0070)
	class UCurveFloat*                                 ExternalCurve;                                            // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x00A0
struct FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EAttenuationDistanceModel                          DistanceAlgorithm;                                        // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              dBAttenuationAtMax;                                       // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AttenuationShapeExtents;                                  // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              ConeOffset;                                               // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   // 0x0028(0x0078) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// 0x0030
struct FSoundAttenuationPluginSettings
{
	TArray<class USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;                        // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UOcclusionPluginSourceSettingsBase*>  OcclusionPluginSettingsArray;                             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UReverbPluginSourceSettingsBase*>     ReverbPluginSettingsArray;                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.SoundAttenuationSettings
// 0x0208 (0x02A8 - 0x00A0)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                           // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bSpatialize : 1;                                          // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAttenuateWithLPF : 1;                                    // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bEnableListenerFocus : 1;                                 // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bEnableFocusInterpolation : 1;                            // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bEnableOcclusion : 1;                                     // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;                     // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bEnableReverbSend : 1;                                    // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bApplyNormalizationToStereoSounds : 1;                    // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bEnableLogFrequencyScaling : 1;                           // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<ESoundSpatializationAlgorithm>         SpatializationAlgorithm;                                  // 0x00A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAirAbsorptionMethod                               AbsorptionMethod;                                         // 0x00A3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                    // 0x00A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EReverbSendMethod                                  ReverbSendMethod;                                         // 0x00A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00A6(0x0002) MISSED OFFSET
	float                                              OmniRadius;                                               // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StereoSpread;                                             // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPFRadiusMin;                                             // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPFRadiusMax;                                             // 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomLowpassAirAbsorptionCurve;                          // 0x00B8(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FRuntimeFloatCurve                          CustomHighpassAirAbsorptionCurve;                         // 0x0130(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	float                                              LPFFrequencyAtMin;                                        // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPFFrequencyAtMax;                                        // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HPFFrequencyAtMin;                                        // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HPFFrequencyAtMax;                                        // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusAzimuth;                                             // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NonFocusAzimuth;                                          // 0x01BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusDistanceScale;                                       // 0x01C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NonFocusDistanceScale;                                    // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusPriorityScale;                                       // 0x01C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NonFocusPriorityScale;                                    // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusVolumeAttenuation;                                   // 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NonFocusVolumeAttenuation;                                // 0x01D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusAttackInterpSpeed;                                   // 0x01D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusReleaseInterpSpeed;                                  // 0x01DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionLowPassFilterFrequency;                          // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionVolumeAttenuation;                               // 0x01E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionInterpolationTime;                               // 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReverbWetLevelMin;                                        // 0x01EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReverbWetLevelMax;                                        // 0x01F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReverbDistanceMin;                                        // 0x01F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReverbDistanceMax;                                        // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ManualReverbSendLevel;                                    // 0x01FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomReverbSendCurve;                                    // 0x0200(0x0078) (CPF_Edit, CPF_BlueprintVisible)
	struct FSoundAttenuationPluginSettings             PluginSettings;                                           // 0x0278(0x0030) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.FindFloorResult
// 0x0098
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst)
	unsigned char                                      bWalkableFloor : 1;                                       // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst)
	unsigned char                                      bLineTrace : 1;                                           // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloorDist;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	float                                              LineDist;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0010(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup1 : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup2 : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup3 : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup4 : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup5 : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup6 : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup7 : 1;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup8 : 1;                                              // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup9 : 1;                                              // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup10 : 1;                                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup11 : 1;                                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup12 : 1;                                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup13 : 1;                                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup14 : 1;                                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup15 : 1;                                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup16 : 1;                                             // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup17 : 1;                                             // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup18 : 1;                                             // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup19 : 1;                                             // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup20 : 1;                                             // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup21 : 1;                                             // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup22 : 1;                                             // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup23 : 1;                                             // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup24 : 1;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup25 : 1;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup26 : 1;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup27 : 1;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup28 : 1;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup29 : 1;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup30 : 1;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup31 : 1;                                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0054
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumIndirectLightingBounces;                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSkyLightingBounces;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndirectLightingQuality;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndirectLightingSmoothness;                               // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      EnvironmentColor;                                         // 0x0014(0x0004) (CPF_Edit, CPF_IsPlainOldData)
	float                                              EnvironmentIntensity;                                     // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVolumeLightingMethod>                 VolumeLightingMethod;                                     // 0x0024(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              VolumetricLightmapDetailCellSize;                         // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumetricLightmapMaximumBrickMemoryMb;                   // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumetricLightmapSphericalHarmonicSmoothing;             // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumeLightSamplePlacementScale;                          // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseAmbientOcclusion : 1;                                 // 0x0038(0x0001) (CPF_Edit)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                // 0x0038(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              DirectIlluminationOcclusionFraction;                      // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionExponent;                                        // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            // 0x0050(0x0001) (CPF_Edit)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           // 0x0050(0x0001) (CPF_Edit)
	unsigned char                                      bCompressLightmaps : 1;                                   // 0x0050(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ReverbSettings
// 0x0020
struct FReverbSettings
{
	unsigned char                                      bApplyReverb : 1;                                         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TEnumAsByte<EReverbPreset>                         ReverbType;                                               // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UReverbEffect*                               ReverbEffect;                                             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundEffectSubmixPreset*                    ReverbPluginEffect;                                       // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Volume;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeTime;                                                 // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned char                                      bIsWorldSettings : 1;                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExteriorVolume;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExteriorTime;                                             // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExteriorLPF;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExteriorLPFTime;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InteriorVolume;                                           // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InteriorTime;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InteriorLPF;                                              // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InteriorLPFTime;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NetViewer
// 0x0030
struct FNetViewer
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      InViewer;                                                 // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // 0x0018(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     ViewDir;                                                  // 0x0024(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.BroadphaseSettings
// 0x0024
struct FBroadphaseSettings
{
	bool                                               bUseMBPOnClient;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseMBPOnServer;                                          // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FBox                                        MBPBounds;                                                // 0x0004(0x001C) (CPF_Edit, CPF_IsPlainOldData)
	uint32_t                                           MBPNumSubdivs;                                            // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.PostProcessSettings
// 0x0520
struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_WhiteTint : 1;                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorContrast : 1;                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGamma : 1;                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGain : 1;                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorOffset : 1;                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationShadows : 1;                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastShadows : 1;                       // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaShadows : 1;                          // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGainShadows : 1;                           // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetShadows : 1;                         // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationMidtones : 1;                    // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastMidtones : 1;                      // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaMidtones : 1;                         // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGainMidtones : 1;                          // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetMidtones : 1;                        // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationHighlights : 1;                  // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastHighlights : 1;                    // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaHighlights : 1;                       // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGainHighlights : 1;                        // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetHighlights : 1;                      // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionShadowsMax : 1;                  // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionHighlightsMin : 1;               // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BlueCorrection : 1;                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ExpandGamut : 1;                                // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmSaturation : 1;                             // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                        // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                      // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                       // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmContrast : 1;                               // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                           // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmHealAmount : 1;                             // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmToeAmount : 1;                              // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTint : 1;                             // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                        // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                       // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmSlope : 1;                                  // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmToe : 1;                                    // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmShoulder : 1;                               // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmBlackClip : 1;                              // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_SceneColorTint : 1;                             // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ChromaticAberrationStartOffset : 1;             // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomMethod : 1;                                // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomIntensity : 1;                             // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomThreshold : 1;                             // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Size : 1;                                 // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Size : 1;                                 // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Size : 1;                                 // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Size : 1;                                 // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Size : 1;                                 // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Size : 1;                                 // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomSizeScale : 1;                             // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionTexture : 1;                    // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionSize : 1;                       // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionCenterUV : 1;                   // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilter : 1;                  // 0x0008(0x0001) (CPF_Deprecated)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMin : 1;               // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMax : 1;               // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMult : 1;              // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionBufferScale : 1;                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMask : 1;                              // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_CameraShutterSpeed : 1;                         // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_CameraISO : 1;                                  // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureCalibrationConstant : 1;            // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBias : 1;                           // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMin : 1;                            // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMax : 1;                            // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTint : 1;                              // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTints : 1;                             // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_GrainIntensity : 1;                             // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_GrainJitter : 1;                                // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   // 0x000C(0x0001) (CPF_Deprecated)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x000D(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x000E(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x000E(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x000E(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x000E(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x000E(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVFadeRange : 1;                               // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionFadeRange : 1;           // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMinFstop : 1;                       // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBladeCount : 1;                     // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSensorWidth : 1;                    // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                   // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                         // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_MobileHQGaussian : 1;                           // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                     // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                 // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                  // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;                   // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           // 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurMax : 1;                              // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenPercentage : 1;                           // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        // 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	float                                              WhiteTemp;                                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WhiteTint;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector4                                    ColorSaturation;                                          // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorContrast;                                            // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorGamma;                                               // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorGain;                                                // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorOffset;                                              // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorSaturationShadows;                                   // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorContrastShadows;                                     // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorGammaShadows;                                        // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorGainShadows;                                         // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorOffsetShadows;                                       // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              ColorCorrectionShadowsMax;                                // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
	struct FVector4                                    ColorSaturationMidtones;                                  // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorContrastMidtones;                                    // 0x00E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorGammaMidtones;                                       // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorGainMidtones;                                        // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorOffsetMidtones;                                      // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorSaturationHighlights;                                // 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorContrastHighlights;                                  // 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorGammaHighlights;                                     // 0x0140(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorGainHighlights;                                      // 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    ColorOffsetHighlights;                                    // 0x0160(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              ColorCorrectionHighlightsMin;                             // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlueCorrection;                                           // 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExpandGamut;                                              // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmSlope;                                                // 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmToe;                                                  // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmShoulder;                                             // 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmBlackClip;                                            // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmWhiteClip;                                            // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x0190(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                FilmShadowTint;                                           // 0x01A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              FilmShadowTintBlend;                                      // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmShadowTintAmount;                                     // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmSaturation;                                           // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerRed;                                      // 0x01BC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerGreen;                                    // 0x01CC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerBlue;                                     // 0x01DC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              FilmContrast;                                             // 0x01EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmToeAmount;                                            // 0x01F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmHealAmount;                                           // 0x01F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmDynamicRange;                                         // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                           // 0x01FC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              SceneFringeIntensity;                                     // 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChromaticAberrationStartOffset;                           // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBloomMethod>                          BloomMethod;                                              // 0x0214(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	float                                              BloomIntensity;                                           // 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomThreshold;                                           // 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomSizeScale;                                           // 0x0220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom1Size;                                               // 0x0224(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom2Size;                                               // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom3Size;                                               // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom4Size;                                               // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom5Size;                                               // 0x0234(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom6Size;                                               // 0x0238(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                               // 0x023C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                               // 0x024C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                               // 0x025C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                               // 0x026C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                               // 0x027C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                               // 0x028C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class UTexture2D*                                  BloomConvolutionTexture;                                  // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomConvolutionSize;                                     // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   BloomConvolutionCenterUV;                                 // 0x02AC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     BloomConvolutionPreFilter;                                // 0x02B4(0x000C) (CPF_Deprecated, CPF_IsPlainOldData)
	float                                              BloomConvolutionPreFilterMin;                             // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomConvolutionPreFilterMax;                             // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomConvolutionPreFilterMult;                            // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomConvolutionBufferScale;                              // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    BloomDirtMask;                                            // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                                   // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x02DC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x02EC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              AmbientCubemapIntensity;                                  // 0x02FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureCube*                                AmbientCubemap;                                           // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraShutterSpeed;                                       // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraISO;                                                // 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldMinFstop;                                     // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DepthOfFieldBladeCount;                                   // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureBias;                                         // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                       // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	float                                              AutoExposureLowPercent;                                   // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureHighPercent;                                  // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureMinBrightness;                                // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                                // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureSpeedUp;                                      // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureSpeedDown;                                    // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureCalibrationConstant;                          // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LensFlareIntensity;                                       // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                            // 0x034C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              LensFlareBokehSize;                                       // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LensFlareThreshold;                                       // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UTexture*                                    LensFlareBokehShape;                                      // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x0370(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrainJitter;                                              // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                                // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                           // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionRadius;                                   // 0x0404(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           // 0x0408(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionFadeDistance;                             // 0x040C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                               // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionDistance;                                 // 0x0414(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AmbientOcclusionPower;                                    // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionBias;                                     // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionQuality;                                  // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                                 // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                                 // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                             // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                IndirectLightingColor;                                    // 0x0430(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              IndirectLightingIntensity;                                // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ColorGradingIntensity;                                    // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    ColorGradingLUT;                                          // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EDepthOfFieldMethod>                   DepthOfFieldMethod;                                       // 0x0450(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	unsigned char                                      bMobileHQGaussian : 1;                                    // 0x0454(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	float                                              DepthOfFieldSensorWidth;                                  // 0x0458(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x046C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldScale;                                        // 0x0474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldMaxBokehSize;                                 // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UTexture*                                    DepthOfFieldBokehShape;                                   // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                                    // 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldColorThreshold;                               // 0x0494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldSizeThreshold;                                // 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldVignetteSize;                                 // 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MotionBlurMax;                                            // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                                  // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVIntensity;                                             // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSize;                                                  // 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x04BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x04C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenSpaceReflectionIntensity;                           // 0x04E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenSpaceReflectionQuality;                             // 0x04E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x04EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVFadeRange;                                             // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDirectionalOcclusionFadeRange;                         // 0x04F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenPercentage;                                         // 0x04F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FWeightedBlendables                         WeightedBlendables;                                       // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UObject*>                             Blendables;                                               // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0040
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SrcActorOffset;                                           // 0x0008(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0014(0x000C) (CPF_IsPlainOldData)
	struct FString                                     DebugText;                                                // 0x0020(0x0010) (CPF_ZeroConstructor)
	float                                              TimeRemaining;                                            // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x0038(0x0004) (CPF_IsPlainOldData)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x003C(0x0001)
	unsigned char                                      bKeepAttachedToActor : 1;                                 // 0x003C(0x0001)
	unsigned char                                      bDrawShadow : 1;                                          // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     OrigActorLocation;                                        // 0x0040(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FontScale;                                                // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MinimalViewInfo
// 0x0570
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DesiredFOV;                                               // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              OrthoWidth;                                               // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OrthoNearClipPlane;                                       // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OrthoFarClipPlane;                                        // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AspectRatio;                                              // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              PostProcessBlendWeight;                                   // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0040(0x0520) (CPF_BlueprintVisible)
	struct FVector2D                                   OffCenterProjectionOffset;                                // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0568(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x0580
struct FCameraCacheEntry
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x0570)
};

// ScriptStruct Engine.TViewTarget
// 0x0590
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x0570) (CPF_Edit, CPF_BlueprintVisible)
	class APlayerState*                                PlayerState;                                              // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                                  // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveBoost;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExportResolutionScale;                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          // 0x0010(0x0001)
	unsigned char                                      bOverrideEmissiveBoost : 1;                               // 0x0010(0x0001)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                // 0x0010(0x0001)
	unsigned char                                      bOverrideExportResolutionScale : 1;                       // 0x0010(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0010
struct FMaterialTextureInfo
{
	float                                              SamplingScale;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UVChannelIndex;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TextureName;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterInfo
// 0x0010
struct FMaterialParameterInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMaterialParameterAssociation>         Association;                                              // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ScalarParameterValue
// 0x0028
struct FScalarParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.VectorParameterValue
// 0x0030
struct FVectorParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0020(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.TextureParameterValue
// 0x0028
struct FTextureParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UTexture*                                    ParameterValue;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.FontParameterValue
// 0x0030
struct FFontParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	class UFont*                                       FontValue;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FontPage;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x001C(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0014
struct FMaterialInstanceBasePropertyOverrides
{
	bool                                               bOverride_OpacityMaskClipValue;                           // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverride_BlendMode;                                      // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverride_ShadingModel;                                   // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverride_DitheredLODTransition;                          // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverride_CastDynamicShadowAsMasked;                      // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverride_TwoSided;                                       // 0x0005(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              OpacityMaskClipValue;                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	unsigned char                                      TwoSided : 1;                                             // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      bCastDynamicShadowAsMasked : 1;                           // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.StaticSwitchParameter
// 0x0028
struct FStaticSwitchParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010)
	bool                                               Value;                                                    // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverride;                                                // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticComponentMaskParameter
// 0x0028
struct FStaticComponentMaskParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010)
	bool                                               R;                                                        // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               G;                                                        // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               B;                                                        // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               A;                                                        // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverride;                                                // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// 0x0030
struct FStaticTerrainLayerWeightParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010)
	bool                                               bOverride;                                                // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (CPF_IsPlainOldData)
	int                                                WeightmapIndex;                                           // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeightBasedBlend;                                        // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.MaterialLayersFunctions
// 0x0040
struct FMaterialLayersFunctions
{
	TArray<class UMaterialFunctionInterface*>          Layers;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UMaterialFunctionInterface*>          Blends;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<bool>                                       LayerStates;                                              // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     KeyString;                                                // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// 0x0068
struct FStaticMaterialLayersParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010)
	struct FMaterialLayersFunctions                    Value;                                                    // 0x0010(0x0040)
	bool                                               bOverride;                                                // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0054(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticParameterSet
// 0x0040
struct FStaticParameterSet
{
	TArray<struct FStaticSwitchParameter>              StaticSwitchParameters;                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FStaticComponentMaskParameter>       StaticComponentMaskParameters;                            // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FStaticTerrainLayerWeightParameter>  TerrainLayerWeightParameters;                             // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<struct FStaticMaterialLayersParameter>      MaterialLayersParameters;                                 // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0018
struct FBlueprintComponentChangedPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     PropertyScope;                                            // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0050
struct FBlueprintCookedComponentInstancingData
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                                      // 0x0008(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0018(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFilterInterpolationType>              InterpolationType;                                        // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0020
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0018) (CPF_Edit)
	float                                              InterpolationSpeedPerSec;                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SampleValue;                                              // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              RateScale;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weights[0x3];                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Min;                                                      // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Max;                                                      // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GridNum;                                                  // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0020
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CustomResultNodeIndex;                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransitionIndex;                                          // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDesiredTransitionReturnValue;                            // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAutomaticRemainingTimeRule;                              // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<int>                                        PoseEvaluatorLinks;                                       // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0048
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBakedStateExitTransition>           Transitions;                                              // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAConduit;                                              // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                EntryRuleNodeIndex;                                       // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0030(0x0010) (CPF_ZeroConstructor)
	bool                                               bAlwaysResetOnEntry;                                      // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0038 (0x0040 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NextState;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrossfadeDuration;                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartNotify;                                              // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EndNotify;                                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InterruptNotify;                                          // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAlphaBlendOption                                  BlendMode;                                                // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialState;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBakedAnimationState>                States;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                              // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.SmartName
// 0x0010
struct FSmartName
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x0020
struct FAnimCurveBase
{
	struct FName                                       LastObservedName;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FSmartName                                  Name;                                                     // 0x0008(0x0010)
	int                                                CurveTypeFlags;                                           // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FloatCurve
// 0x0070 (0x0090 - 0x0020)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                               // 0x0020(0x0070)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartPos;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              AnimStartTime;                                            // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimEndTime;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LoopingCount;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                             // 0x0000(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Engine.AlphaBlend
// 0x0038
struct FAlphaBlend
{
	EAlphaBlendOption                                  BlendOption;                                              // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0014(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.AnimSyncMarker
// 0x0010
struct FAnimSyncMarker
{
	struct FName                                       MarkerName;                                               // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncData
// 0x0020
struct FMarkerSyncData
{
	TArray<struct FAnimSyncMarker>                     AuthoredSyncMarkers;                                      // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                              // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       NextSectionName;                                          // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x0048(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAnimTrack                                  AnimTrack;                                                // 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DisplayTime;                                              // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TriggerTime;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAnimNotifyEventType>                  NotifyEventType;                                          // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveMarker
// 0x0010
struct FTimeStretchCurveMarker
{
	float                                              Time[0x3];                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Alpha;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TimeStretchCurve
// 0x0028
struct FTimeStretchCurve
{
	float                                              SamplingRate;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurveValueMinPrecision;                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTimeStretchCurveMarker>             Markers;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	float                                              Sum_dT_i_by_C_i[0x3];                                     // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.PrimaryAssetRules
// 0x0010
struct FPrimaryAssetRules
{
	int                                                Priority;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bApplyRecursively;                                        // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                ChunkId;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPrimaryAssetCookRule                              CookRule;                                                 // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x0088
struct FPrimaryAssetTypeInfo
{
	struct FName                                       PrimaryAssetType;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UClass>                       AssetBaseClass;                                           // 0x0008(0x0028) (CPF_Edit)
	class UClass*                                      AssetBaseClassLoaded;                                     // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bHasBlueprintClasses;                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsEditorOnly;                                            // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<struct FDirectoryPath>                      Directories;                                              // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FSoftObjectPath>                     SpecificAssets;                                           // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0060(0x0010) (CPF_Edit)
	TArray<struct FString>                             AssetScanPaths;                                           // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	bool                                               bIsDynamicAsset;                                          // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                NumberOfAssets;                                           // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x0020
struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // 0x0000(0x0010) (CPF_Edit)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0010(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.AssetManagerRedirect
// 0x0020
struct FAssetManagerRedirect
{
	struct FString                                     Old;                                                      // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     New;                                                      // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.AssetMapping
// 0x0010
struct FAssetMapping
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimationAsset*                             TargetAsset;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecayHeight;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                MaxScatteringOrder;                                       // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransmittanceTexWidth;                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransmittanceTexHeight;                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IrradianceTexWidth;                                       // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IrradianceTexHeight;                                      // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InscatterAltitudeSampleNum;                               // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InscatterMuNum;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InscatterMuSNum;                                          // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InscatterNuNum;                                           // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0020
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit)
	int                                                MaxChannels;                                              // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0020
struct FEditorMapPerformanceTestDefinition
{
	struct FSoftObjectPath                             PerformanceTestmap;                                       // 0x0000(0x0018) (CPF_Edit, CPF_Config)
	int                                                TestTimer;                                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	struct FString                                     FilePath;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (CPF_Edit, CPF_Config)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                  // 0x0000(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             Normal;                                                   // 0x0020(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                               // 0x0040(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                       // 0x0060(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                           // 0x0080(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                // 0x00A0(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                             // 0x00C0(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             Animation;                                                // 0x00E0(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             Sound;                                                    // 0x0100(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                            // 0x0120(0x0020) (CPF_Edit, CPF_Config)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                      // 0x0140(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                           // 0x0000(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   MaterialAsset;                                            // 0x0010(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   ParticleSystemAsset;                                      // 0x0020(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   SkeletalMeshAsset;                                        // 0x0030(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   StaticMeshAsset;                                          // 0x0040(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   TextureAsset;                                             // 0x0050(0x0010) (CPF_Edit, CPF_Config)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                 // 0x0000(0x0010) (CPF_Edit)
	struct FString                                     NewProjectNameOverride;                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x01F0
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                   // 0x0000(0x0010) (CPF_Edit)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                           // 0x0010(0x0150) (CPF_Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                               // 0x0160(0x0060) (CPF_Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                       // 0x01C0(0x0020) (CPF_Edit)
	struct FFilePath                                   SourceControlMaterial;                                    // 0x01E0(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                     // 0x0000(0x0010) (CPF_Edit)
	struct FFilePath                                   DefaultDiffuseTexture;                                    // 0x0010(0x0010) (CPF_Edit)
	struct FFilePath                                   DefaultNormalTexture;                                     // 0x0020(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0000(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0030
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath                                   FirstMeshPath;                                            // 0x0000(0x0010) (CPF_Edit)
	struct FFilePath                                   SecondMeshPath;                                           // 0x0010(0x0010) (CPF_Edit)
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0020(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FFilePath                                   ExecutablePath;                                           // 0x0010(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     CommandLineOptions;                                       // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FDirectoryPath                              WorkingDirectory;                                         // 0x0030(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     ScriptExtension;                                          // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FDirectoryPath                              ScriptDirectory;                                          // 0x0050(0x0010) (CPF_Edit, CPF_Config)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     ExportFileExtension;                                      // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	bool                                               bSkipExport;                                              // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                          // 0x0000(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     DeviceID;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                               // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VirtualBone
// 0x0018
struct FVirtualBone
{
	struct FName                                       SourceBoneName;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetBoneName;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       VirtualBoneName;                                          // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               SlotNames;                                                // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0020
struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0018) (CPF_Edit)
	float                                              BlendScale;                                               // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KShapeElem
// 0x0030
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              RestOffset;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	unsigned char                                      bContributeToMass : 1;                                    // 0x001C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData03[0x13];                                      // 0x001D(0x0013) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0050 (0x0080 - 0x0030)
struct FKSphereElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                       // 0x0030(0x0040) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x0070(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.KBoxElem
// 0x0080 (0x00B0 - 0x0030)
struct FKBoxElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                       // 0x0030(0x0040) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x0070(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x0080(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x008C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              X;                                                        // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Z;                                                        // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00A4(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.KSphylElem
// 0x0070 (0x00A0 - 0x0030)
struct FKSphylElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                       // 0x0030(0x0040) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x0070(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x0080(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x008C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Length;                                                   // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x00A0 - 0x0030)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                               // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        ElemBox;                                                  // 0x0040(0x001C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0060(0x0030) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KTaperedCapsuleElem
// 0x0028 (0x0058 - 0x0030)
struct FKTaperedCapsuleElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Radius0;                                                  // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius1;                                                  // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Length;                                                   // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0058
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x0000(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x0020(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0030(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FKTaperedCapsuleElem>                TaperedCapsuleElems;                                      // 0x0040(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BranchFilter
// 0x0010
struct FBranchFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BlendDepth;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.BuilderPoly
// 0x0028
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Direction;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       ItemName;                                                 // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PolyFlags;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                    // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FFOscillator                                Yaw;                                                      // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FFOscillator                                Roll;                                                     // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                        // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FFOscillator                                Y;                                                        // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible)
	struct FFOscillator                                Z;                                                        // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   V0_UV;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                V0_Color;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                                   // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   V1_UV;                                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                V1_Color;                                                 // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                                   // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   V2_UV;                                                    // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                V2_Color;                                                 // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       ObjectTypeName;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     HelpMessage;                                              // 0x0028(0x0010) (CPF_ZeroConstructor)
	bool                                               bCanModify;                                               // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0039(0x0027) MISSED OFFSET
};

// ScriptStruct Engine.CustomChannelSetup
// 0x0018
struct FCustomChannelSetup
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    DefaultResponse;                                          // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTraceType;                                               // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStaticObject;                                            // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewName;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	struct FColor                                      Out;                                                      // 0x0004(0x0004) (CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                         // 0x0020(0x0001) (CPF_Config, CPF_GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FGameNameRedirect
{
	struct FName                                       OldGameName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewGameName;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ClassRedirect
// 0x0040
struct FClassRedirect
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       OldClassName;                                             // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewClassName;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       OldSubobjName;                                            // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewSubobjName;                                            // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewClassClass;                                            // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewClassPackage;                                          // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InstanceOnly;                                             // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     NewPluginName;                                            // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FStructRedirect
{
	struct FName                                       OldStructName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewStructName;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DriverClassName;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DriverClassNameFallback;                                  // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      WithinClass;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CullDistance;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NamedCurveValue
// 0x0010
struct FNamedCurveValue
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TableRowBase
// 0x0008
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x00A0
struct FRollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Archetype;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class ULevel*                                      Level;                                                    // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
	TArray<class UObject*>                             ObjReferences;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.TextureLODGroup
// 0x0050
struct FTextureLODGroup
{
	TEnumAsByte<ETextureGroup>                         Group;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
	int                                                LODBias;                                                  // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODBias_Smaller;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODBias_Smallest;                                         // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	int                                                NumStreamedMips;                                          // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                MinLODSize;                                               // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLODSize;                                               // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLODSize_Smaller;                                       // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLODSize_Smallest;                                      // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OptionalLODBias;                                          // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OptionalMaxLODSize;                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       MinMagFilter;                                             // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MipFilter;                                                // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UDialogueVoice*>                      Targets;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0038
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                  // 0x0000(0x0018) (CPF_Edit)
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     LocalizationKeyFormat;                                    // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UDialogueSoundWaveProxy*                     Proxy;                                                    // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x0020
struct FEdGraphTerminalType
{
	struct FName                                       TerminalCategory;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TerminalSubCategory;                                      // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UObject>                      TerminalSubCategoryObject;                                // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTerminalIsConst;                                         // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTerminalIsWeakPointer;                                   // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x0060
struct FEdGraphPinType
{
	struct FName                                       PinCategory;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       PinSubCategory;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                            // 0x0018(0x0020)
	struct FEdGraphTerminalType                        PinValueType;                                             // 0x0038(0x0020)
	EPinContainerType                                  ContainerType;                                            // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsArray : 1;                                             // 0x0059(0x0001) (CPF_Deprecated)
	unsigned char                                      bIsReference : 1;                                         // 0x0059(0x0001)
	unsigned char                                      bIsConst : 1;                                             // 0x0059(0x0001)
	unsigned char                                      bIsWeakPointer : 1;                                       // 0x0059(0x0001)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartV;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                USize;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                VSize;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Height;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAntialiasing : 1;                                  // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bEnableBold : 1;                                          // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bEnableItalic : 1;                                        // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bEnableUnderline : 1;                                     // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bAlphaOnly : 1;                                           // 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Chars;                                                    // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     UnicodeRange;                                             // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     CharsFilePath;                                            // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     CharsFileWildcard;                                        // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                                 // 0x0060(0x0001) (CPF_Edit)
	unsigned char                                      bIncludeASCIIRange : 1;                                   // 0x0060(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ForegroundColor;                                          // 0x0064(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bEnableDropShadow : 1;                                    // 0x0074(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                TexturePageWidth;                                         // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TexturePageMaxHeight;                                     // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                XPadding;                                                 // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                YPadding;                                                 // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExtendBoxTop;                                             // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExtendBoxBottom;                                          // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExtendBoxRight;                                           // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExtendBoxLeft;                                            // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableLegacyMode : 1;                                    // 0x0098(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                Kerning;                                                  // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               // 0x00A0(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                DistanceFieldScaleFactor;                                 // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceFieldScanRadiusScale;                             // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0x0000 (0x00A0 - 0x00A0)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{

};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0080
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                    // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAffectsLeftSmall : 1;                                    // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAffectsRightLarge : 1;                                   // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAffectsRightSmall : 1;                                   // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0078) (CPF_Edit)
};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x0060
struct FPredictProjectilePathParams
{
	struct FVector                                     startLocation;                                            // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               bTraceWithCollision;                                      // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ProjectileRadius;                                         // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSimTime;                                               // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTraceWithChannel;                                        // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              SimFrequency;                                             // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideGravityZ;                                         // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              DrawDebugTime;                                            // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x001C
struct FPredictProjectilePathPointData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Time;                                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x00B8
struct FPredictProjectilePathResult
{
	TArray<struct FPredictProjectilePathPointData>     PathData;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	struct FPredictProjectilePathPointData             LastTraceDestination;                                     // 0x0010(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0030(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x00F0
struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve                          Frequency;                                                // 0x0000(0x0078) (CPF_Edit)
	struct FRuntimeFloatCurve                          Amplitude;                                                // 0x0078(0x0078) (CPF_Edit)
};

// ScriptStruct Engine.HLODProxyMesh
// 0x0030
struct FHLODProxyMesh
{
	TLazyObjectPtr<class ALODActor>                    LODActor;                                                 // 0x0000(0x001C) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       Key;                                                      // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ImportanceTexture
// 0x0050
struct FImportanceTexture
{
	struct FIntPoint                                   Size;                                                     // 0x0000(0x0008) (CPF_IsPlainOldData)
	int                                                NumMips;                                                  // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      MarginalCDF;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      ConditionalCDF;                                           // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<struct FColor>                              TextureData;                                              // 0x0030(0x0010) (CPF_ZeroConstructor)
	TWeakObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EImportanceWeight>                     Weighting;                                                // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	class UClass*                                      OwnerClass;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SCSVariableName;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       AssociatedGuid;                                           // 0x0010(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0080
struct FComponentOverrideRecord
{
	class UClass*                                      ComponentClass;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ComponentTemplate;                                        // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FComponentKey                               ComponentKey;                                             // 0x0010(0x0020)
	struct FBlueprintCookedComponentInstancingData     CookedComponentInstancingData;                            // 0x0030(0x0050)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bExecuteWhenPaused : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bOverrideParentBinding : 1;                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x001C (0x0020 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       InputActionName;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       InputAxisName;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FKey                                        AxisKey;                                                  // 0x0008(0x0018)
	struct FName                                       FunctionNameToBind;                                       // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// 0x0070
struct FCachedKeyToActionInfo
{
	class UPlayerInput*                                PlayerInput;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInputChord                                 InputChord;                                               // 0x0008(0x0020)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Exponent;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInvert : 1;                                              // 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FInputAxisProperties                        AxisProperties;                                           // 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0028
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShift : 1;                                               // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0028
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      CurveColor;                                               // 0x0008(0x0004) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CurveName;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                bHideCurve;                                               // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bColorCurve;                                              // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bFloatingPointColorCurve;                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bClamp;                                                   // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClampLow;                                                 // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClampHigh;                                                // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              ViewStartInput;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewEndInput;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewStartOutput;                                          // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewEndOutput;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                     // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               bPositionIsRelative;                                      // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x000D(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimStartOffset;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimEndOffset;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x001C(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Value : 1;                                                // 0x0004(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0018
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TransitionTime;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ShotNumber;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EventTrackKey
// 0x0010
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ElementIndex;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x0010
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ClipIDNumber;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Volume;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pitch;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVisibilityTrackAction>                action;                                                   // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          // 0x0005(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.VectorSpringState
// 0x0018
struct FVectorSpringState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.FloatSpringState
// 0x0008
struct FFloatSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0010
struct FDrawToRenderTargetContext
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.UserActivity
// 0x0018
struct FUserActivity
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TimerHandle
// 0x0008
struct FTimerHandle
{
	uint64_t                                           Handle;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              MaxSamples;                                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinValue;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAutoAdjustMinMax;                                        // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FormatArgumentData
// 0x0040
struct FFormatArgumentData
{
	struct FString                                     ArgumentName;                                             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TEnumAsByte<EFormatArgumentType>                   ArgumentValueType;                                        // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       ArgumentValue;                                            // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	int                                                ArgumentValueInt;                                         // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              ArgumentValueFloat;                                       // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	ETextGender                                        ArgumentValueGender;                                      // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Total;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// 0x0028
struct FReplicatedStaticActorDestructionInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	class UClass*                                      ObjClass;                                                 // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.MaterialInput
// 0x0030
struct FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       InputName;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Mask;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskR;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskG;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskB;                                                    // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskA;                                                    // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       ExpressionName;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ColorMaterialInput
// 0x0008 (0x0038 - 0x0030)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FColor                                      Constant;                                                 // 0x0034(0x0004) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0008 (0x0038 - 0x0030)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Constant;                                                 // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VectorMaterialInput
// 0x0010 (0x0040 - 0x0030)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector                                     Constant;                                                 // 0x0034(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0010 (0x0040 - 0x0030)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ConstantX;                                                // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConstantY;                                                // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0008 (0x0038 - 0x0030)
struct FMaterialAttributesInput : public FExpressionInput
{
	int                                                PropertyConnectedBitmask;                                 // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (CPF_IsPlainOldData)
	class UMaterialFunctionInterface*                  Function;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (CPF_IsPlainOldData)
	class UMaterialParameterCollection*                ParameterCollection;                                      // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              BaseSizeX;                                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BaseSizeY;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CustomInput
// 0x0038
struct FCustomInput
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0008(0x0030)
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0008 (0x0020 - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                             // 0x0018(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	float                                              Timestamp;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0038
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFallDownLength;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     Direction;                                                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	float                                              SnapRadius;                                               // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SnapHeight;                                               // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0018(0x0004) (CPF_Edit)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	unsigned char                                      bUseSnapHeight : 1;                                       // 0x0020(0x0001) (CPF_Edit)
	unsigned char                                      bSnapToCheapestArea : 1;                                  // 0x0020(0x0001) (CPF_Edit)
	unsigned char                                      bCustomFlag0 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag1 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag2 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag3 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag4 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag5 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag6 : 1;                                         // 0x0021(0x0001)
	unsigned char                                      bCustomFlag7 : 1;                                         // 0x0021(0x0001)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0050 - 0x0038)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0038(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0044(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0068 - 0x0038)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                // 0x0038(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     LeftEnd;                                                  // 0x0044(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     RightStart;                                               // 0x0050(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     RightEnd;                                                 // 0x005C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NodeItem
// 0x0040
struct FNodeItem
{
	struct FName                                       ParentName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0028
struct FDistributionLookupTable
{
	unsigned char                                      Op;                                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EntryCount;                                               // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EntryStride;                                              // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SubEntryStride;                                           // 0x0003(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeScale;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeBias;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      LockFlag;                                                 // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.RawDistribution
// 0x0028
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0028 (0x0050 - 0x0028)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     MinValueVec;                                              // 0x0030(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     MaxValueVec;                                              // 0x003C(0x000C) (CPF_IsPlainOldData)
	class UDistributionVector*                         Distribution;                                             // 0x0048(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoClear, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDistributionFloat*                          Distribution;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoClear, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                              // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bScale : 1;                                               // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bLock : 1;                                                // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGetSeedFromInstance : 1;                                 // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bRandomlySelectSeedArray : 1;                             // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<int>                                        RandomSeeds;                                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ParticleFrequency;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      FirstTimeOnly : 1;                                        // 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      LastTimeOnly : 1;                                         // 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      UseReflectedImpactVector : 1;                             // 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bUseOrbitOffset : 1;                                      // 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       CustomName;                                               // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         // 0x0018(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0018
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned char                                      bScaleVelocityByParamValue : 1;                           // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FRawDistributionFloat                       ParamValue;                                               // 0x0018(0x0038) (CPF_Edit)
};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                count;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CountLow;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_IsPlainOldData)
	struct FRotator                                    MinInitialRotation;                                       // 0x0040(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    MaxInitialRotation;                                       // 0x004C(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x0058(0x000C) (CPF_IsPlainOldData)
	float                                              Intensity;                                                // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Tightness;                                                // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x006C(0x0001)
	unsigned char                                      bTileX : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileY : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileZ : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bUseFixDT : 1;                                            // 0x006C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FloatDistribution
// 0x0028
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x02C0
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleModuleSpawn*                        SpawnModule;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                       // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UParticleModule*>                     SpawnModules;                                             // 0x0018(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                         // 0x0030(0x0070)
	struct FFloatDistribution                          VectorFieldScale;                                         // 0x00A0(0x0028)
	struct FFloatDistribution                          DragCoefficient;                                          // 0x00C8(0x0028)
	struct FFloatDistribution                          PointAttractorStrength;                                   // 0x00F0(0x0028)
	struct FFloatDistribution                          Resilience;                                               // 0x0118(0x0028)
	struct FVector                                     ConstantAcceleration;                                     // 0x0140(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     PointAttractorPosition;                                   // 0x014C(0x000C) (CPF_IsPlainOldData)
	float                                              PointAttractorRadiusSq;                                   // 0x0158(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x015C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x0168(0x000C) (CPF_IsPlainOldData)
	struct FVector2D                                   InvMaxSize;                                               // 0x0174(0x0008) (CPF_IsPlainOldData)
	float                                              InvRotationRateScale;                                     // 0x017C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x0180(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxParticleCount;                                         // 0x0184(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0188(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0189(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	unsigned char                                      bEnableCollision : 1;                                     // 0x018C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            // 0x0190(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0194(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0198(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x019C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRawDistributionVector                      DynamicColor;                                             // 0x01A0(0x0050)
	struct FRawDistributionFloat                       DynamicAlpha;                                             // 0x01F0(0x0038)
	struct FRawDistributionVector                      DynamicColorScale;                                        // 0x0228(0x0050)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                        // 0x0278(0x0038)
	unsigned char                                      UnknownData05[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0160
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FVector4                                    ColorScale;                                               // 0x0030(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    ColorBias;                                                // 0x0040(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    MiscScale;                                                // 0x0050(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    MiscBias;                                                 // 0x0060(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveScale;                                 // 0x0070(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveBias;                                  // 0x0080(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    SubImageSize;                                             // 0x0090(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    SizeBySpeed;                                              // 0x00A0(0x0010) (CPF_IsPlainOldData)
	struct FVector                                     ConstantAcceleration;                                     // 0x00B0(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x00BC(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x00C8(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     OrbitFrequencyBase;                                       // 0x00D4(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     OrbitFrequencyRange;                                      // 0x00E0(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     OrbitPhaseBase;                                           // 0x00EC(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     OrbitPhaseRange;                                          // 0x00F8(0x000C) (CPF_IsPlainOldData)
	float                                              GlobalVectorFieldScale;                                   // 0x0104(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                               // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PerParticleVectorFieldScale;                              // 0x010C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PerParticleVectorFieldBias;                               // 0x0110(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DragCoefficientScale;                                     // 0x0114(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DragCoefficientBias;                                      // 0x0118(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ResilienceScale;                                          // 0x011C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ResilienceBias;                                           // 0x0120(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionRadiusScale;                                     // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionRadiusBias;                                      // 0x0128(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionTimeBias;                                        // 0x012C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionRandomSpread;                                    // 0x0130(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionRandomDistribution;                              // 0x0134(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OneMinusFriction;                                         // 0x0138(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateScale;                                        // 0x013C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraMotionBlurAmount;                                   // 0x0140(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0144(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0145(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                              // 0x0148(0x0008) (CPF_IsPlainOldData)
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0150(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0154(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0158(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ParticleSysParam
// 0x0080
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scalar_Low;                                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0014(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Vector_Low;                                               // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0028
struct FPhysicalAnimationData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsLocalSimulation : 1;                                   // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              OrientationStrength;                                      // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularVelocityStrength;                                  // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositionStrength;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityStrength;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLinearForce;                                           // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngularForce;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x0030
struct FPhysicalAnimationProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPhysicalAnimationData                      PhysicalAnimationData;                                    // 0x0008(0x0028) (CPF_Edit)
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0014
struct FConstraintBaseParams
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Restitution;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ContactDistance;                                          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSoftConstraint : 1;                                      // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearConstraint
// 0x0008 (0x001C - 0x0014)
struct FLinearConstraint : public FConstraintBaseParams
{
	float                                              Limit;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               XMotion;                                                  // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               YMotion;                                                  // 0x0019(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               ZMotion;                                                  // 0x001A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ConeConstraint
// 0x000C (0x0020 - 0x0014)
struct FConeConstraint : public FConstraintBaseParams
{
	float                                              Swing1LimitDegrees;                                       // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Swing2LimitDegrees;                                       // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              Swing1Motion;                                             // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              Swing2Motion;                                             // 0x001D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.TwistConstraint
// 0x0008 (0x001C - 0x0014)
struct FTwistConstraint : public FConstraintBaseParams
{
	float                                              TwistLimitDegrees;                                        // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              TwistMotion;                                              // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintDrive
// 0x0010
struct FConstraintDrive
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bEnableVelocityDrive : 1;                                 // 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x004C
struct FLinearDriveConstraint
{
	struct FVector                                     PositionTarget;                                           // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     VelocityTarget;                                           // 0x000C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FConstraintDrive                            XDrive;                                                   // 0x0018(0x0010) (CPF_Edit)
	struct FConstraintDrive                            YDrive;                                                   // 0x0028(0x0010) (CPF_Edit)
	struct FConstraintDrive                            ZDrive;                                                   // 0x0038(0x0010) (CPF_Edit)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x0048(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x004C
struct FAngularDriveConstraint
{
	struct FConstraintDrive                            TwistDrive;                                               // 0x0000(0x0010) (CPF_Edit)
	struct FConstraintDrive                            SwingDrive;                                               // 0x0010(0x0010) (CPF_Edit)
	struct FConstraintDrive                            SlerpDrive;                                               // 0x0020(0x0010) (CPF_Edit)
	struct FRotator                                    OrientationTarget;                                        // 0x0030(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     AngularVelocityTarget;                                    // 0x003C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	TEnumAsByte<EAngularDriveMode>                     AngularDriveMode;                                         // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0104
struct FConstraintProfileProperties
{
	float                                              ProjectionLinearTolerance;                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProjectionAngularTolerance;                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearBreakThreshold;                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularBreakThreshold;                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearConstraint                           LinearLimit;                                              // 0x0010(0x001C) (CPF_Edit)
	struct FConeConstraint                             ConeLimit;                                                // 0x002C(0x0020) (CPF_Edit)
	struct FTwistConstraint                            TwistLimit;                                               // 0x004C(0x001C) (CPF_Edit)
	struct FLinearDriveConstraint                      LinearDrive;                                              // 0x0068(0x004C) (CPF_Edit)
	struct FAngularDriveConstraint                     AngularDrive;                                             // 0x00B4(0x004C) (CPF_Edit)
	unsigned char                                      bDisableCollision : 1;                                    // 0x0100(0x0001) (CPF_Edit)
	unsigned char                                      bParentDominates : 1;                                     // 0x0100(0x0001) (CPF_Edit)
	unsigned char                                      bEnableProjection : 1;                                    // 0x0100(0x0001) (CPF_Edit)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x0100(0x0001) (CPF_Edit)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x0100(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintInstance
// 0x01B8
struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FName                                       JointName;                                                // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       ConstraintBone1;                                          // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ConstraintBone2;                                          // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Pos1;                                                     // 0x0030(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     PriAxis1;                                                 // 0x003C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     SecAxis1;                                                 // 0x0048(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x0054(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     PriAxis2;                                                 // 0x0060(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     SecAxis2;                                                 // 0x006C(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    AngularRotationOffset;                                    // 0x0078(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bScaleLinearLimits : 1;                                   // 0x0084(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0085(0x0007) MISSED OFFSET
	struct FConstraintProfileProperties                ProfileInstance;                                          // 0x008C(0x0104) (CPF_Edit)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0190(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x0110
struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties                ProfileProperties;                                        // 0x0000(0x0104)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FName                                       ProfileName;                                              // 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x002C
struct FRigidBodyErrorCorrection
{
	float                                              PingExtrapolation;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ErrorPerLinearDifference;                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ErrorPerAngularDifference;                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRestoredStateError;                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositionLerp;                                             // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngleLerp;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearVelocityCoefficient;                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularVelocityCoefficient;                               // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ErrorAccumulationSeconds;                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ErrorAccumulationDistanceSq;                              // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ErrorAccumulationSimilarity;                              // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x0010
struct FPhysicalSurfaceName
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                             // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               Enabled;                                                  // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.KeyBind
// 0x0030
struct FKeyBind
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Config)
	struct FString                                     Command;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      Control : 1;                                              // 0x0028(0x0001) (CPF_Config)
	unsigned char                                      Shift : 1;                                                // 0x0028(0x0001) (CPF_Config)
	unsigned char                                      Alt : 1;                                                  // 0x0028(0x0001) (CPF_Config)
	unsigned char                                      Cmd : 1;                                                  // 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bIgnoreCtrl : 1;                                          // 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bIgnoreShift : 1;                                         // 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bIgnoreAlt : 1;                                           // 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bIgnoreCmd : 1;                                           // 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bDisabled : 1;                                            // 0x0029(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.PoseData
// 0x0030
struct FPoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                           // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<bool>                                       LocalSpacePoseMask;                                       // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      CurveData;                                                // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.PoseDataContainer
// 0x0090
struct FPoseDataContainer
{
	TArray<struct FSmartName>                          PoseNames;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FPoseData>                           Poses;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               Tracks;                                                   // 0x0020(0x0010) (CPF_ZeroConstructor)
	TMap<struct FName, int>                            TrackMap;                                                 // 0x0030(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FAnimCurveBase>                      Curves;                                                   // 0x0080(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0028
struct FPreviewMeshCollectionEntry
{
	TSoftObjectPtr<class USkeletalMesh>                SkeletalMesh;                                             // 0x0000(0x0028) (CPF_Edit)
};

// ScriptStruct Engine.CollectionReference
// 0x0008
struct FCollectionReference
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0018
struct FRigTransformConstraint
{
	TEnumAsByte<EConstraintTransform>                  TranformType;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ParentSpace;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransformBaseConstraint                    Constraints[0x2];                                         // 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_IsPlainOldData)
	struct FString                                     DisplayName;                                              // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               bAdvanced;                                                // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DataValue;                                                // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.BoneFilter
// 0x0010
struct FBoneFilter
{
	bool                                               bExcludeSelf;                                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0068
struct FSkeletalMeshLODGroupSettings
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (CPF_Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EBoneFilterActionOption                            BoneFilterActionOption;                                   // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FBoneFilter>                         BoneList;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0020(0x0048) (CPF_Edit)
};

// ScriptStruct Engine.SoundClassProperties
// 0x002C
struct FSoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StereoBleed;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LFEBleed;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VoiceCenterChannelVolume;                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadioFilterVolume;                                        // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadioFilterVolumeThreshold;                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplyEffects : 1;                                        // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAlwaysPlay : 1;                                          // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsUISound : 1;                                           // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsMusic : 1;                                             // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bReverb : 1;                                              // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              Default2DReverbSendAmount;                                // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCenterChannelOnly : 1;                                   // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bApplyAmbientVolumes : 1;                                 // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	TEnumAsByte<EAudioOutputTarget>                    OutputTarget;                                             // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinVolumeThreshold;                                       // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxVolumeThreshold;                                       // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x0010
struct FSourceEffectChainEntry
{
	class USoundEffectSourcePreset*                    preset;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBypass : 1;                                              // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              // 0x0018(0x0001) (CPF_Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DecompressedDuration;                                     // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AudioEQEffect
// 0x0038
struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FrequencyCenter0;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gain0;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bandwidth0;                                               // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrequencyCenter1;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gain1;                                                    // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bandwidth1;                                               // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrequencyCenter2;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gain2;                                                    // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bandwidth2;                                               // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrequencyCenter3;                                         // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gain3;                                                    // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bandwidth3;                                               // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0018
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumeAdjuster;                                           // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchAdjuster;                                            // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDialogueContext                            Context;                                                  // 0x0008(0x0018) (CPF_Edit)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Default;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinInput;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxInput;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinOutput;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxOutput;                                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EModulationParamMode>                  ParamMode;                                                // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SubtitleCue
// 0x0020
struct FSubtitleCue
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (CPF_Edit)
	float                                              Time;                                                     // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LocalizedSubtitle
// 0x0028
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FSubtitleCue>                        Subtitles;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bMature : 1;                                              // 0x0020(0x0001)
	unsigned char                                      bManualWordWrap : 1;                                      // 0x0020(0x0001)
	unsigned char                                      bSingleLine : 1;                                          // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   StartScale;                                               // 0x0018(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	float                                              StartRoll;                                                // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   StartOffset;                                              // 0x0024(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x002C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0038(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   EndScale;                                                 // 0x0044(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	float                                              EndRoll;                                                  // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   EndOffset;                                                // 0x0050(0x0008) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct Engine.StaticMaterial
// 0x0030
struct FStaticMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ImportedMaterialSlotName;                                 // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0018(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0050
struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                SubsurfaceColor;                                          // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                FalloffColor;                                             // 0x0014(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                BoundaryColorBleed;                                       // 0x0024(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              ExtinctionScale;                                          // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalScale;                                              // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScatteringDistribution;                                   // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IOR;                                                      // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Roughness0;                                               // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Roughness1;                                               // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LobeMix;                                                  // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0018
struct FTimelineEventEntry
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FScriptDelegate                             EventFunc;                                                // 0x0008(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0040
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       VectorPropertyName;                                       // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStructProperty*                             VectorProperty;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0040
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FloatPropertyName;                                        // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFloatProperty*                              FloatProperty;                                            // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0040
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LinearColorPropertyName;                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStructProperty*                             LinearColorProperty;                                      // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x0098
struct FTimeline
{
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0001(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0001(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Length;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTimelineEventEntry>                 Events;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                       // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                   // 0x0050(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                                     // 0x0060(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                    // 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UProperty*                                   DirectionProperty;                                        // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.TTTrackBase
// 0x0010
struct FTTTrackBase
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsExternalCurve;                                         // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TTEventTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTEventTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveKeys;                                                // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTFloatTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveFloat;                                               // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTVectorTrack : public FTTTrackBase
{
	class UCurveVector*                                CurveVector;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTLinearColorTrack : public FTTTrackBase
{
	class UCurveLinearColor*                           CurveLinearColor;                                         // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TouchInputControl
// 0x0068
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  Image2;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Center;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   VisualSize;                                               // 0x0018(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   ThumbSize;                                                // 0x0020(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   InteractionSize;                                          // 0x0028(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   InputScale;                                               // 0x0030(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FKey                                        MainInputKey;                                             // 0x0038(0x0018) (CPF_Edit)
	struct FKey                                        AltInputKey;                                              // 0x0050(0x0018) (CPF_Edit)
};

// ScriptStruct Engine.HardwareCursorReference
// 0x0010
struct FHardwareCursorReference
{
	struct FName                                       CursorPath;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   HotSpot;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VoiceSettings
// 0x0018
struct FVoiceSettings
{
	class USceneComponent*                             ComponentToAttachTo;                                      // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialProxySettings
// 0x008C
struct FMaterialProxySettings
{
	struct FIntPoint                                   TextureSize;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<ETextureSizingType>                    TextureSizingType;                                        // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              GutterSpace;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNormalMap;                                               // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMetallicMap;                                             // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              MetallicConstant;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRoughnessMap;                                            // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              RoughnessConstant;                                        // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSpecularMap;                                             // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              SpecularConstant;                                         // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEmissiveMap;                                             // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOpacityMap;                                              // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              OpacityConstant;                                          // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOpacityMaskMap;                                          // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              OpacityMaskConstant;                                      // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAmbientOcclusionMap;                                     // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionConstant;                                 // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   DiffuseTextureSize;                                       // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FIntPoint                                   NormalTextureSize;                                        // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FIntPoint                                   MetallicTextureSize;                                      // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FIntPoint                                   RoughnessTextureSize;                                     // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FIntPoint                                   SpecularTextureSize;                                      // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FIntPoint                                   EmissiveTextureSize;                                      // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FIntPoint                                   OpacityTextureSize;                                       // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FIntPoint                                   OpacityMaskTextureSize;                                   // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FIntPoint                                   AmbientOcclusionTextureSize;                              // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EMaterialMergeType>                    MaterialMergeType;                                        // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x0089(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.MeshProxySettings
// 0x00D4
struct FMeshProxySettings
{
	int                                                ScreenSize;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideVoxelSize : 1;                                   // 0x0004(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              VoxelSize;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x000C(0x008C) (CPF_Edit)
	int                                                TextureWidth;                                             // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                TextureHeight;                                            // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bExportNormalMap;                                         // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bExportMetallicMap;                                       // 0x00A1(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bExportRoughnessMap;                                      // 0x00A2(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bExportSpecularMap;                                       // 0x00A3(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bCalculateCorrectLODModel;                                // 0x00A4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              MergeDistance;                                            // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      UnresolvedGeometryColor;                                  // 0x00AC(0x0004) (CPF_Edit, CPF_IsPlainOldData)
	bool                                               bOverrideTransferDistance;                                // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              MaxRayCastDist;                                           // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseHardAngleThreshold;                                   // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              HardAngleThreshold;                                       // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EProxyNormalComputationMethod>         NormalCalculationMethod;                                  // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	int                                                LightMapResolution;                                       // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bComputeLightMapResolution;                               // 0x00C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x00C9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bBakeVertexData;                                          // 0x00CA(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bUseLandscapeCulling;                                     // 0x00CB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeCullingPrecision>            LandscapeCullingPrecision;                                // 0x00CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowAdjacency;                                          // 0x00CD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowDistanceField;                                      // 0x00CE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReuseMeshLightmapUVs;                                    // 0x00CF(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCreateCollision;                                         // 0x00D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowVertexColors;                                       // 0x00D1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bGenerateLightmapUVs;                                     // 0x00D2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x00D3(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MeshMergingSettings
// 0x00CC
struct FMeshMergingSettings
{
	bool                                               bGenerateLightMapUV;                                      // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TargetLightMapResolution;                                 // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bComputedLightMapResolution;                              // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bImportVertexColors;                                      // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bPivotPointAtZero;                                        // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMergePhysicsData;                                        // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMergeMaterials;                                          // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x0010(0x008C) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               bBakeVertexDataToMesh;                                    // 0x009C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseVertexDataForBakingMaterial;                          // 0x009D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseTextureBinning;                                       // 0x009E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReuseMeshLightmapUVs;                                    // 0x009F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMergeEquivalentMaterials;                                // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EUVOutput                                          OutputUVs[0x8];                                           // 0x00A1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	int                                                GutterSize;                                               // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCalculateCorrectLODModel;                                // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	EMeshLODSelectionType                              LODSelectionType;                                         // 0x00B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	int                                                ExportSpecificLOD;                                        // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                SpecificLOD;                                              // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseLandscapeCulling;                                     // 0x00BC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIncludeImposters;                                        // 0x00BD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowDistanceField;                                      // 0x00BE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExportNormalMap;                                         // 0x00BF(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bExportMetallicMap;                                       // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bExportRoughnessMap;                                      // 0x00C1(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bExportSpecularMap;                                       // 0x00C2(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x00C3(0x0001) MISSED OFFSET
	int                                                MergedMaterialAtlasResolution;                            // 0x00C4(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00C8(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x01C0
struct FHierarchicalSimplification
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              TransitionScreenSize;                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideDrawDistance;                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseOverrideDrawDistance;                                 // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAllowSpecificExclusion : 1;                              // 0x000D(0x0001) (CPF_Edit)
	bool                                               bSimplifyMesh;                                            // 0x000E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FMeshProxySettings                          ProxySetting;                                             // 0x0010(0x00D4) (CPF_Edit)
	struct FMeshMergingSettings                        MergeSetting;                                             // 0x00E4(0x00CC) (CPF_Edit)
	float                                              DesiredBoundRadius;                                       // 0x01B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DesiredFillingPercentage;                                 // 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinNumberOfActorsToBuild;                                 // 0x01B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOnlyGenerateClustersForVolumes;                          // 0x01BC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReusePreviousLevelClusters;                              // 0x01BD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x01BE(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.VectorDistribution
// 0x0028
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028)
};

// ScriptStruct Engine.Vector4Distribution
// 0x0028
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// 0x0008
struct FFloatRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// 0x0008
struct FVectorRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ExpressionOutput
// 0x0020
struct FExpressionOutput
{
	struct FName                                       OutputName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Mask;                                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskR;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskG;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskB;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskA;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0020
struct FBranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloatValue;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     StringValue;                                              // 0x0018(0x0010) (CPF_ZeroConstructor)
	class UObject*                                     ObjectValue;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPlatformInterfaceData                      Data;                                                     // 0x0008(0x0030)
};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PointDamageEvent
// 0x0098 (0x00A8 - 0x0010)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0014(0x000C)
	struct FHitResult                                  HitInfo;                                                  // 0x0020(0x0088) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0068
struct FExposedValueCopyRecord
{
	class UProperty*                                   SourceProperty;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FName                                       SourcePropertyName;                                       // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceSubPropertyName;                                    // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SourceArrayIndex;                                         // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UProperty*                                   DestProperty;                                             // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DestArrayIndex;                                           // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Size;                                                     // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInstanceIsTarget;                                        // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPostCopyOperation                                 PostCopyOperation;                                        // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECopyType                                          CopyType;                                                 // 0x0032(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	class UProperty*                                   CachedSourceProperty;                                     // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UProperty*                                   CachedSourceStructSubProperty;                            // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                              // 0x0008(0x0010) (CPF_ZeroConstructor)
	class UFunction*                                   Function;                                                 // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Base
// 0x0030
struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                               // 0x0008(0x0028)
};

// ScriptStruct Engine.InputRange
// 0x0008
struct FInputRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x003C
struct FInputScaleBiasClamp
{
	bool                                               bMapRange;                                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FInputRange                                 OutRange;                                                 // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Scale;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bias;                                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bClampResult;                                             // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              ClampMin;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              InterpSpeedIncreasing;                                    // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InterpolatedResult;                                       // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x0058
struct FInputAlphaBoolBlend
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAlphaBlendOption                                  BlendOption;                                              // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAlphaBlend                                 AlphaBlend;                                               // 0x0018(0x0038) (CPF_Transient)
	bool                                               bInitialized;                                             // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bias;                                                     // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PoseLinkBase
// 0x0018
struct FPoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0018 - 0x0018)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimInstanceProxy
// 0x05E0
struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x5E0];                                     // 0x0000(0x05E0) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0040 - 0x0010)
struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                   // 0x0010(0x0014)
	struct FVector                                     Origin;                                                   // 0x0024(0x000C) (CPF_IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.KeyHandleLookupTable
// 0x0060
struct FKeyHandleLookupTable
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	bool                                               bIgnoreForRelevancyTest;                                  // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                GroupIndex;                                               // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x003C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              InternalTimeAccumulator;                                  // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0044(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.BlendSampleData
// 0x0040
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                          // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               Animation;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalWeight;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                                     // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SamplePlayRate;                                           // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0090
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0018 - 0x0018)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimCurveParam
// 0x0010
struct FAnimCurveParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimationGroupReference
// 0x0010
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0078
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.AnimTickRecord
// 0x0048
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x0010
struct FAnimationRecordingSettings
{
	bool                                               bRecordInWorldSpace;                                      // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRemoveRootAnimation;                                     // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAutoSaveAsset;                                           // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              SampleRate;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Length;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePose
// 0x0020
struct FComponentSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.LocalSpacePose
// 0x0020
struct FLocalSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.NamedTransform
// 0x0040
struct FNamedTransform
{
	struct FTransform                                  Value;                                                    // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NamedColor
// 0x0010
struct FNamedColor
{
	struct FColor                                      Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NamedVector
// 0x0018
struct FNamedVector
{
	struct FVector                                     Value;                                                    // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NamedFloat
// 0x0010
struct FNamedFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ParentNodeGuid;                                           // 0x0008(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartPosition;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndPosition;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VectorCurve
// 0x0150 (0x0170 - 0x0020)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                         // 0x0020(0x0070)
};

// ScriptStruct Engine.TransformCurve
// 0x0450 (0x0470 - 0x0020)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                         // 0x0020(0x0170)
	struct FVectorCurve                                RotationCurve;                                            // 0x0190(0x0170)
	struct FVectorCurve                                ScaleCurve;                                               // 0x0300(0x0170)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0040
struct FSlotEvaluationPose
{
	TEnumAsByte<EAdditiveAnimationType>                AdditiveType;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                                      // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x0068
struct FQueuedDrawDebugItem
{
	TEnumAsByte<EDrawDebugItemType>                    ItemType;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     StartLoc;                                                 // 0x0004(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // 0x0010(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x001C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Size;                                                     // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Segments;                                                 // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0040(0x0004) (CPF_Transient, CPF_IsPlainOldData)
	bool                                               bPersistentLines;                                         // 0x0044(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Thickness;                                                // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	struct FVector2D                                   TextScale;                                                // 0x0060(0x0008) (CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimMontageInstance
// 0x01B0
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
	bool                                               bPlaying;                                                 // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              DefaultBlendTimeMultiplier;                               // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET
	TArray<int>                                        NextSections;                                             // 0x00E8(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        PrevSections;                                             // 0x00F8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0108(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                               // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              Position;                                                 // 0x0128(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x012C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAlphaBlend                                 Blend;                                                    // 0x0130(0x0038) (CPF_Transient)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0168(0x0020) MISSED OFFSET
	int                                                DisableRootMotionCount;                                   // 0x0188(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x24];                                      // 0x018C(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                                    // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0064(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   Pose;                                                     // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       CachePoseName;                                            // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GlobalWeight;                                             // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0054(0x008C) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0058 (0x00B0 - 0x0058)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              PlayRateBasis;                                            // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBiasClamp                        PlayRateScaleBiasClamp;                                   // 0x006C(0x003C) (CPF_Edit, CPF_BlueprintVisible)
	float                                              StartPosition;                                            // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                 // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                                   // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSkipFirstUpdateTransition;                               // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReinitializeOnBecomingRelevant;                          // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x003A(0x000E) MISSED OFFSET
	int                                                CurrentState;                                             // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0050(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0030
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x00D0
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
	class UBlendProfile*                               BlendProfile;                                             // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0098(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInput
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_SubInput : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInstance
// 0x0098 (0x00C8 - 0x0030)
struct FAnimNode_SubInstance : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                                   // 0x0030(0x0018)
	class UClass*                                      InstanceClass;                                            // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimInstance*                               InstanceToRun;                                            // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UProperty*>                           InstanceProperties;                                       // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UProperty*>                           SubInstanceProperties;                                    // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FName>                               SourcePropertyNames;                                      // 0x0078(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               DestPropertyNames;                                        // 0x0088(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<EEvaluatorDataSource>                  DataSource;                                               // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEvaluatorMode>                        EvaluatorMode;                                            // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                FramesToCachePose;                                        // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0038(0x0038) MISSED OFFSET
	int                                                CacheFramesRemaining;                                     // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                      // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0031(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0020 (0x0050 - 0x0030)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                        // 0x0030(0x0018)
	struct FName                                       CachePoseName;                                            // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              Mins[0x3];                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Ranges[0x3];                                              // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      CurveWeights;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                               // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0190 (0x0770 - 0x05E0)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x05E0(0x0190) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_SingleNode : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TransitionReturnVal;                                      // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                TransitionIndex;                                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                              // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0038
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                TrackColor;                                               // 0x0008(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                              // 0x0000(0x0018)
	float                                              BlendWeight;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// 0x0038
struct FBPEditorBookmarkNode
{
	struct FGuid                                       NodeGuid;                                                 // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0020(0x0018)
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0030
struct FEditedDocumentInfo
{
	struct FSoftObjectPath                             EditedObjectPath;                                         // 0x0000(0x0018)
	struct FVector2D                                   SavedViewOffset;                                          // 0x0018(0x0008) (CPF_IsPlainOldData)
	float                                              SavedZoomAmount;                                          // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UObject*                                     EditedObject;                                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UEdGraph*>                            Graphs;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BPVariableDescription
// 0x00D8
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       VarGuid;                                                  // 0x0008(0x0010) (CPF_IsPlainOldData)
	struct FEdGraphPinType                             VarType;                                                  // 0x0018(0x0060) (CPF_Edit)
	struct FString                                     FriendlyName;                                             // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FText                                       Category;                                                 // 0x0088(0x0018) (CPF_Edit)
	uint64_t                                           PropertyFlags;                                            // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RepNotifyFunc;                                            // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELifetimeCondition>                    ReplicationCondition;                                     // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     DefaultValue;                                             // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0001
struct FBlueprintMacroCosmeticInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x0080
struct FCompilerNativizationOptions
{
	struct FName                                       PlatformName;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ServerOnlyPlatform;                                       // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ClientOnlyPlatform;                                       // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExcludeMonolithicHeaders;                                // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FName>                               ExcludedModules;                                          // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty Engine.CompilerNativizationOptions.ExcludedAssets
	TArray<struct FString>                             ExcludedFolderPaths;                                      // 0x0070(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                          // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EventGraphCallOffset;                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0190
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimTransitionData
// 0x0028
struct FCachedAnimTransitionData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FromStateName;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ToStateName;                                              // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimRelevancyData
// 0x0020
struct FCachedAnimRelevancyData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// 0x0018
struct FCachedAnimAssetPlayerData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateData
// 0x0020
struct FCachedAnimStateData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateArray
// 0x0018
struct FCachedAnimStateArray
{
	TArray<struct FCachedAnimStateData>                States;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              U;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              V;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UL;                                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VL;                                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FVector2D                                   LineExtent;                                               // 0x0010(0x0008) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DrawY;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DrawXL;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DrawYL;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0008) (CPF_IsPlainOldData)
	class UFont*                                       DrawFont;                                                 // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0020(0x0008) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x01C8
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x0000(0x0070)
	class UCurveLinearColor*                           ExternalCurve;                                            // 0x01C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ColumnName;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RowContents;                                              // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LevelNameAndTime
// 0x0018
struct FLevelNameAndTime
{
	struct FString                                     LevelName;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	uint32_t                                           LevelChangeTimeInMS;                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlueprint*                                  GraphBlueprint;                                           // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       GraphGuid;                                                // 0x0010(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.EdGraphPinReference
// 0x0018
struct FEdGraphPinReference
{
	TWeakObjectPtr<class UEdGraphNode>                 OwningNode;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       PinId;                                                    // 0x0008(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0100
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       MenuDescription;                                          // 0x0008(0x0018)
	struct FText                                       TooltipDescription;                                       // 0x0020(0x0018)
	struct FText                                       Category;                                                 // 0x0038(0x0018)
	struct FText                                       Keywords;                                                 // 0x0050(0x0018)
	int                                                Grouping;                                                 // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SectionID;                                                // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             MenuDescriptionArray;                                     // 0x0070(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             FullSearchTitlesArray;                                    // 0x0080(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             FullSearchKeywordsArray;                                  // 0x0090(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             FullSearchCategoryArray;                                  // 0x00A0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             LocalizedMenuDescriptionArray;                            // 0x00B0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchTitlesArray;                           // 0x00C0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchKeywordsArray;                         // 0x00D0(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchCategoryArray;                         // 0x00E0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SearchText;                                               // 0x00F0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x0108 - 0x0100)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                             // 0x0100(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ScreenMessageString
// 0x0030
struct FScreenMessageString
{
	uint64_t                                           Key;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     ScreenMessage;                                            // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	struct FColor                                      DisplayColor;                                             // 0x0018(0x0004) (CPF_Transient, CPF_IsPlainOldData)
	float                                              TimeToDisplay;                                            // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentTimeDisplayed;                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector2D                                   TextScale;                                                // 0x0024(0x0008) (CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x0070
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Map;                                                      // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     RedirectURL;                                              // 0x0038(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             Op;                                                       // 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Portal;                                                   // 0x0058(0x0010) (CPF_ZeroConstructor)
	int                                                Valid;                                                    // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0001)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           LODIndex;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x0290
struct FWorldContext
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
	struct FURL                                        LastURL;                                                  // 0x00E8(0x0070)
	struct FURL                                        LastRemoteURL;                                            // 0x0158(0x0070)
	class UPendingNetGame*                             PendingNetGame;                                           // 0x01C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                      // 0x01D0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                          // 0x01F0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0200(0x0018) MISSED OFFSET
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                        // 0x0218(0x0010) (CPF_ZeroConstructor)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                       // 0x0228(0x0010) (CPF_ZeroConstructor)
	class UGameViewportClient*                         GameViewport;                                             // 0x0238(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameInstance*                               OwningGameInstance;                                       // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                         // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x38];                                      // 0x0258(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	float                                              FixedEV100;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFixed;                                                   // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                          // 0x0000(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x0004(0x0010) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   GlowOuterRadius;                                          // 0x0014(0x0008) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   GlowInnerRadius;                                          // 0x001C(0x0008) (CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                            // 0x0000(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      bEnableShadow : 1;                                        // 0x0000(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x0004(0x0024) (CPF_BlueprintVisible)
};

// ScriptStruct Engine.ComponentReference
// 0x0018
struct FComponentReference
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0030
struct FMeshBuildSettings
{
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bBuildReversedIndexBuffer : 1;                            // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bGenerateDistanceFieldAsIfTwoSided : 1;                   // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuildScale;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     BuildScale3D;                                             // 0x0014(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              DistanceFieldResolutionScale;                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                             // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0088
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	EUpdateRateShiftBucket                             ShiftBucket;                                              // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInterpolateSkippedFrames : 1;                            // 0x0002(0x0001)
	unsigned char                                      bShouldUseLodMap : 1;                                     // 0x0002(0x0001)
	unsigned char                                      bShouldUseMinLod : 1;                                     // 0x0002(0x0001)
	unsigned char                                      bSkipUpdate : 1;                                          // 0x0002(0x0001)
	unsigned char                                      bSkipEvaluation : 1;                                      // 0x0002(0x0001)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                UpdateRate;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EvaluationRate;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickedPoseOffestTime;                                     // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              AdditionalTime;                                           // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	int                                                BaseNonRenderedUpdateRate;                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxEvalRateForInterpolation;                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0020(0x0010) (CPF_ZeroConstructor)
	TMap<int, int>                                     LODToFrameSkipMap;                                        // 0x0030(0x0050) (CPF_ZeroConstructor)
	int                                                SkippedUpdateFrames;                                      // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SkippedEvalFrames;                                        // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotDesc
// 0x0010
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumChannels;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                 // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bForceContentExport : 1;                                  // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bInitialized : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                           // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bStatsEnabled : 1;                                        // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CoplanarTolerance;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseImmediateImport : 1;                                  // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bImmediateProcessMappings : 1;                            // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bSortMappings : 1;                                        // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bDumpBinaryFiles : 1;                                     // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bDebugMaterials : 1;                                      // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bPadMappings : 1;                                         // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bDebugPaddings : 1;                                       // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bUseRandomColors : 1;                                     // 0x0009(0x0001) (CPF_Edit)
	unsigned char                                      bColorBordersGreen : 1;                                   // 0x0009(0x0001) (CPF_Edit)
	unsigned char                                      bColorByExecutionTime : 1;                                // 0x0009(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ExecutionTimeDivisor;                                     // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                                       // 0x0014(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0020(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     CachedTransPosition;                                      // 0x002C(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     ContactNormal;                                            // 0x000C(0x000C) (CPF_IsPlainOldData)
	float                                              ContactPenetration;                                       // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                       // 0x0010(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     TotalFrictionImpulse;                                     // 0x001C(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                 // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      LinVel;                                                   // 0x0020(0x000C)
	struct FVector_NetQuantize100                      AngVel;                                                   // 0x002C(0x000C)
	unsigned char                                      Flags;                                                    // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0018
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x0040
struct FClusterNode
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (CPF_IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     MinInstanceScale;                                         // 0x0028(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     MaxInstanceScale;                                         // 0x0034(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// 0x0028
struct FClusterNode_DEPRECATED
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (CPF_IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0070 - 0x0058)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                     // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseDefaultValueBeforeFirstKey;                           // 0x006C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInterpTrack*                                Track;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                KeyIndex;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UnsnappedPosition;                                        // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
	class APawn*                                       PawnInst;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        TrackIndices;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bIsSelected : 1;                                          // 0x0020(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SubTrackName;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                GroupIndex;                                               // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionManager
// 0x00F0
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x0134
struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                   // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DetailsPercentage;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMaterialProxySettings                      StaticMeshMaterialSettings;                               // 0x0008(0x008C) (CPF_Edit)
	bool                                               bOverrideLandscapeExportLOD;                              // 0x0094(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	int                                                LandscapeExportLOD;                                       // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMaterialProxySettings                      LandscapeMaterialSettings;                                // 0x009C(0x008C) (CPF_Edit)
	bool                                               bBakeFoliageToLandscape;                                  // 0x0128(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bBakeGrassToLandscape;                                    // 0x0129(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bGenerateMeshNormalMap;                                   // 0x012A(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bGenerateMeshMetallicMap;                                 // 0x012B(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bGenerateMeshRoughnessMap;                                // 0x012C(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bGenerateMeshSpecularMap;                                 // 0x012D(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bGenerateLandscapeNormalMap;                              // 0x012E(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bGenerateLandscapeMetallicMap;                            // 0x012F(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bGenerateLandscapeRoughnessMap;                           // 0x0130(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bGenerateLandscapeSpecularMap;                            // 0x0131(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0028
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0010 (0x0038 - 0x0028)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                                  // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAttached;                                                // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              OriginalRadius;                                           // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (CPF_IsPlainOldData)
	float                                              PointSize;                                                // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (CPF_IsPlainOldData)
	float                                              Thickness;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MessageType;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MessageIndex;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MessageString;                                            // 0x0018(0x0010) (CPF_ZeroConstructor)
	class APlayerState*                                RelatedPlayerState_2;                                     // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ParameterGroupData
// 0x0018
struct FParameterGroupData
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	int                                                GroupSortPriority;                                        // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0038
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionOutputId;                                       // 0x0008(0x0010) (CPF_IsPlainOldData)
	struct FExpressionOutput                           Output;                                                   // 0x0018(0x0020)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0048
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionInputId;                                        // 0x0008(0x0010) (CPF_IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0018(0x0030)
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// 0x0058
struct FScalarParameterAtlasInstanceData
{
	bool                                               bIsUsedAsAtlasPosition;                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UCurveLinearColor>            Curve;                                                    // 0x0008(0x0028)
	TSoftObjectPtr<class UCurveLinearColorAtlas>       Atlas;                                                    // 0x0030(0x0028)
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     MemberScope;                                              // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FName                                       MemberName;                                               // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0020(0x0010) (CPF_IsPlainOldData)
	bool                                               bSelfContext;                                             // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWasDeprecated;                                           // 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.MeshInstancingSettings
// 0x0018
struct FMeshInstancingSettings
{
	class UClass*                                      ActorClassToUse;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData)
	int                                                InstanceReplacementThreshold;                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EMeshInstancingReplacementMethod                   MeshReplacementMethod;                                    // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bSkipMeshesWithVertexColors;                              // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseHLODVolumes;                                          // 0x0011(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0024
struct FMeshReductionSettings
{
	float                                              PercentTriangles;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDeviation;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PixelError;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                SilhouetteImportance;                                     // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                TextureImportance;                                        // 0x0015(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                ShadingImportance;                                        // 0x0016(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x0017(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BaseLODModel;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bGenerateUniqueLightmapUVs;                               // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bKeepSymmetry;                                            // 0x001D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVisibilityAided;                                         // 0x001E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCullOccluded;                                            // 0x001F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VisibilityAggressiveness;                                 // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VertexColorImportance;                                    // 0x0021(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x0010
struct FNameCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Value;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0068 - 0x0058)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                     // 0x0058(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Engine.NavDataConfig
// 0x0038 (0x0068 - 0x0030)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                     // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     DefaultQueryExtent;                                       // 0x003C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UClass*                                      NavigationDataClass;                                      // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FSoftClassPath                              NavigationDataClassName;                                  // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0014
struct FPacketSimulationSettings
{
	int                                                PktLoss;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PktOrder;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PktDup;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PktLag;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PktLagVariance;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FastArraySerializer
// 0x00B0
struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x000C
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                ReplicationKey;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                MostRecentArrayReplicationKey;                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BeamTargetData
// 0x0010
struct FBeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetPercentage;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PlayerMuteList
// 0x0038
struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	bool                                               bHasVoiceHandshakeCompleted;                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                VoiceChannelIdx;                                          // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0038
struct FPreviewAttachedObjectPair
{
	TSoftObjectPtr<class UObject>                      AttachedObject;                                           // 0x0000(0x0028)
	class UObject*                                     Object;                                                   // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FName                                       AttachedTo;                                               // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0038
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018)
	struct FText                                       Description;                                              // 0x0020(0x0018)
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FRootMotionSourceStatus
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x0014
struct FRootMotionFinishVelocitySettings
{
	ERootMotionFinishVelocityMode                      Mode;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     SetVelocity;                                              // 0x0004(0x000C) (CPF_IsPlainOldData)
	float                                              ClampVelocity;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource
// 0x00A0
struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           Priority;                                                 // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           LocalID;                                                  // 0x0012(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ERootMotionAccumulateMode                          AccumulateMode;                                           // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRootMotionSourceStatus                     Status;                                                   // 0x0030(0x0001)
	struct FRootMotionSourceSettings                   Settings;                                                 // 0x0031(0x0001)
	bool                                               bInLocalSpace;                                            // 0x0032(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0033(0x000D) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x0040(0x0040)
	struct FRootMotionFinishVelocitySettings           FinishVelocityParams;                                     // 0x0080(0x0014)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                                 // 0x0098(0x000C) (CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisableTimeout;                                          // 0x00AC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
	struct FVector                                     startLocation;                                            // 0x0098(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     InitialTargetLocation;                                    // 0x00A4(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00B0(0x000C) (CPF_IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00BC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0020 (0x00C0 - 0x00A0)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	struct FVector                                     startLocation;                                            // 0x0098(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00A4(0x000C) (CPF_IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0040 (0x00E0 - 0x00A0)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                                 // 0x0098(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class AActor*                                      LocationActor;                                            // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x00B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x00B9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x00D0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x00D4(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0010 (0x00B0 - 0x00A0)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	struct FVector                                     Force;                                                    // 0x0098(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CameraExposureSettings
// 0x002C
struct FCameraExposureSettings
{
	TEnumAsByte<EAutoExposureMethod>                   Method;                                                   // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LowPercent;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HighPercent;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinBrightness;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBrightness;                                            // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedUp;                                                  // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedDown;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bias;                                                     // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CalibrationConstant;                                      // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GaussianSumBloomSettings
// 0x0084
struct FGaussianSumBloomSettings
{
	float                                              Intensity;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Threshold;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SizeScale;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Filter1Size;                                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Filter2Size;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Filter3Size;                                              // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Filter4Size;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Filter5Size;                                              // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Filter6Size;                                              // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Filter1Tint;                                              // 0x0024(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Filter2Tint;                                              // 0x0034(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Filter3Tint;                                              // 0x0044(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Filter4Tint;                                              // 0x0054(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Filter5Tint;                                              // 0x0064(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Filter6Tint;                                              // 0x0074(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// 0x0028
struct FConvolutionBloomSettings
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Size;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   CenterUV;                                                 // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              PreFilterMin;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreFilterMax;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreFilterMult;                                            // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BufferScale;                                              // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensBloomSettings
// 0x00B8
struct FLensBloomSettings
{
	struct FGaussianSumBloomSettings                   GaussianSum;                                              // 0x0000(0x0084) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FConvolutionBloomSettings                   Convolution;                                              // 0x0088(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EBloomMethod>                          Method;                                                   // 0x00B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LensImperfectionSettings
// 0x0020
struct FLensImperfectionSettings
{
	class UTexture*                                    DirtMask;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DirtMaskIntensity;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                DirtMaskTint;                                             // 0x000C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensSettings
// 0x00E0
struct FLensSettings
{
	struct FLensBloomSettings                          Bloom;                                                    // 0x0000(0x00B8) (CPF_Edit, CPF_BlueprintVisible)
	struct FLensImperfectionSettings                   Imperfections;                                            // 0x00B8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ChromaticAberration;                                      // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilmStockSettings
// 0x0014
struct FFilmStockSettings
{
	float                                              Slope;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Toe;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Shoulder;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlackClip;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WhiteClip;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// 0x0050
struct FColorGradePerRangeSettings
{
	struct FVector4                                    Saturation;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    Contrast;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    Gamma;                                                    // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    Gain;                                                     // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector4                                    Offset;                                                   // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ColorGradingSettings
// 0x0150
struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings                 Global;                                                   // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FColorGradePerRangeSettings                 Shadows;                                                  // 0x0050(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FColorGradePerRangeSettings                 Midtones;                                                 // 0x00A0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FColorGradePerRangeSettings                 Highlights;                                               // 0x00F0(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ShadowsMax;                                               // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HighlightsMin;                                            // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x0058
struct FSkeletalMeshClothBuildParams
{
	TWeakObjectPtr<class UClothingAssetBase>           TargetAsset;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TargetLod;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRemapParameters;                                         // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     AssetName;                                                // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                LODIndex;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SourceSection;                                            // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRemoveFromMesh;                                          // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UPhysicsAsset>                PhysicsAsset;                                             // 0x0030(0x0028) (CPF_Edit)
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0018
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceBoneName;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNameMapping>                        BoneMappingTable;                                         // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTransform>                          ReferencePose;                                            // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                      // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                                      // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.SmartNameMapping
// 0x0060
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.CurveMetaData
// 0x0020
struct FCurveMetaData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveType
// 0x0002
struct FAnimCurveType
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0018
struct FMaterialRemapIndex
{
	uint32_t                                           ImportVersionKey;                                         // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        MaterialRemap;                                            // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     CamOrbitPoint;                                            // 0x0004(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     CamOrbitZoom;                                             // 0x0010(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    CamOrbitRotation;                                         // 0x001C(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0005(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	TMap<uint32_t, struct FMeshSectionInfo>            Map;                                                      // 0x0000(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x0070
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                            // 0x0000(0x0030) (CPF_Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                        // 0x0030(0x0024) (CPF_Edit)
	float                                              LODDistance;                                              // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0058(0x0004) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     SourceImportFilename;                                     // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<EOptimizationType>                     ReductionMethod;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SilhouetteImportance;                                     // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TextureImportance;                                        // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShadingImportance;                                        // 0x001A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FStringCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0078 - 0x0058)
struct FStringCurve : public FIndexedCurve
{
	struct FString                                     DefaultValue;                                             // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FStringCurveKey>                     Keys;                                                     // 0x0068(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Engine.TexturePlatformData
// 0x0020
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x0080
struct FTextureSource
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTexturePrimitiveInfo
// 0x0030
struct FStreamingTexturePrimitiveInfo
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0008(0x001C) (CPF_IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           PackedRelativeBox;                                        // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveInstance
// 0x0030
struct FTimeStretchCurveInstance
{
	bool                                               bHasValidData;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct Engine.StartAsyncSimulationFunction
// 0x0008 (0x0058 - 0x0050)
struct FStartAsyncSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                              // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FRotator                                    CamRotation;                                              // 0x000C(0x000C) (CPF_IsPlainOldData)
	float                                              CamOrthoZoom;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CamUpdated;                                               // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
