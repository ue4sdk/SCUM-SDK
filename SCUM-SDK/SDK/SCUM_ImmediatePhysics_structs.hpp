#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_ImmediatePhysics_enums.hpp"
#include "SCUM_AnimGraphRuntime_classes.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// 0x0488 (0x05A0 - 0x0118)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x0120(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x012C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0138(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x0144(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0150(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x015C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableWorldGeometry;                                     // 0x015D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x015E(0x0002) MISSED OFFSET
	ESimulationSpace                                   SimulationSpace;                                          // 0x0160(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x015E(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
	struct FBoneReference                              BaseBoneRef;                                              // 0x0168(0x0018) (CPF_Edit)
	bool                                               bOverrideWorldGravity;                                    // 0x0180(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              CachedBoundsScale;                                        // 0x0184(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTransferBoneVelocities;                                  // 0x0188(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFreezeIncomingPoseOnStart;                               // 0x0189(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bComponentSpaceSimulation;                                // 0x018A(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x415];                                     // 0x018B(0x0415) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
