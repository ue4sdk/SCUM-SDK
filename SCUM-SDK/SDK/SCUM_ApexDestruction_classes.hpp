#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ApexDestruction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ApexDestruction.DestructibleActor
// 0x0020 (0x0348 - 0x0328)
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bAffectNavigation : 1;                                    // 0x0330(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActorFracture;                                          // 0x0338(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ApexDestruction.DestructibleActor");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleComponent
// 0x00E0 (0x0800 - 0x0720)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0720(0x0008) MISSED OFFSET
	unsigned char                                      bFractureEffectOverride : 1;                              // 0x0728(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0730(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditFixedSize, CPF_ZeroConstructor)
	bool                                               bEnableHardSleeping;                                      // 0x0740(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	float                                              LargeChunkThreshold;                                      // 0x0744(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0748(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnComponentFracture;                                      // 0x0758(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData04[0x98];                                      // 0x0768(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ApexDestruction.DestructibleComponent");
		return ptr;
	}


	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength);
};


// Class ApexDestruction.DestructibleFractureSettings
// 0x0090 (0x00B8 - 0x0028)
class UDestructibleFractureSettings : public UObject
{
public:
	int                                                CellSiteCount;                                            // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFractureMaterial                           FractureMaterialDesc;                                     // 0x002C(0x0024) (CPF_Edit, CPF_Transient)
	int                                                randomSeed;                                               // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FVector>                             VoronoiSites;                                             // 0x0058(0x0010) (CPF_ZeroConstructor)
	int                                                OriginalSubmeshCount;                                     // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0070(0x0010) (CPF_ZeroConstructor)
	TArray<struct FDestructibleChunkParameters>        ChunkParameters;                                          // 0x0080(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0090(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ApexDestruction.DestructibleFractureSettings");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleMesh
// 0x00A0 (0x03B0 - 0x0310)
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct FDestructibleParameters                     DefaultDestructibleParameters;                            // 0x0310(0x0088) (CPF_Edit)
	TArray<struct FFractureEffect>                     FractureEffects;                                          // 0x0398(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ApexDestruction.DestructibleMesh");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
