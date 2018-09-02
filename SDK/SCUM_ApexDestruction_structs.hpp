#pragma once

// SCUM (0.1.17.8320) SDK

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

// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ApexDestruction.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   UVOffset;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0010(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              UAngle;                                                   // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InteriorElementIndex;                                     // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	bool                                               bIsSupportChunk;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDoNotFracture;                                           // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDoNotDamage;                                             // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDoNotCrumble;                                            // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageSpread;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableImpactDamage;                                      // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ImpactDamage;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DefaultImpactDamageDepth;                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCustomImpactResistance;                                  // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ImpactResistance;                                         // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebrisLifetimeMax;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebrisMaxSeparationMin;                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebrisMaxSeparationMax;                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox                                        ValidBounds;                                              // 0x0010(0x001C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactVelocityThreshold;                                  // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxChunkSpeed;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FractureImpulseScale;                                     // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinimumFractureDepth;                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableDebris;                                            // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                DebrisDepth;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EssentialDepth;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                                    // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAssetDefinedSupport : 1;                                 // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bWorldSupport : 1;                                        // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bDebrisTimeout : 1;                                       // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bDebrisMaxSeparation : 1;                                 // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bCrumbleSmallestChunks : 1;                               // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAccurateRaycasts : 1;                                    // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bUseValidBounds : 1;                                      // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bFormExtendedStructures : 1;                              // 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleParameters
// 0x0088
struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                         // 0x0000(0x001C) (CPF_Edit)
	struct FDestructibleDebrisParameters               DebrisParameters;                                         // 0x001C(0x002C) (CPF_Edit)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                       // 0x0048(0x0010) (CPF_Edit)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                   // 0x0058(0x0014) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                          // 0x0070(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	struct FDestructibleParametersFlag                 Flags;                                                    // 0x0080(0x0004) (CPF_Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
