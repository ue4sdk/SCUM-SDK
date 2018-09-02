#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_OceanPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OceanPlugin.AdvancedBuoyancyComponent
// 0x0120 (0x03B0 - 0x0290)
class UAdvancedBuoyancyComponent : public USceneComponent
{
public:
	bool                                               bUseDrag;                                                 // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDebugOn;                                                 // 0x0291(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0292(0x0006) MISSED OFFSET
	class AOceanManager*                               TheOcean;                                                 // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterDensity;                                             // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gravity;                                                  // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeshDensity;                                              // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x02AC(0x0014) MISSED OFFSET
	class UStaticMeshComponent*                        BuoyantMesh;                                              // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FTransform                                  MeshTransform;                                            // 0x02D0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              FalseVolume;                                              // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuoyancyReductionCoefficient;                             // 0x0304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuoyancyPitchReductionCoefficient;                        // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DensityCorrection;                                        // 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DensityCorrectionModifier;                                // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SubmergedVolume;                                          // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactCoefficient;                                        // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DragCoefficient;                                          // 0x031C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     SuctionCoefficient;                                       // 0x0328(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              ViscousDragCoefficient;                                   // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSlamAcceleration;                                      // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             AdvancedGridHeight;                                       // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FForceTriangle>                      SubmergedTris;                                            // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<float>                                      TriSizes;                                                 // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<float>                                      TriSubmergedArea;                                         // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x30];                                      // 0x0380(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.AdvancedBuoyancyComponent");
		return ptr;
	}


	float TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C);
	TArray<struct FForceTriangle> SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow);
	void SetMeshDensity(float NewDensity, float NewWaterDensity);
	float GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation);
	void GetOcean();
	void DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor);
	void ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter);
	void ApplyForce(const struct FForceTriangle& TriForce);
};


// Class OceanPlugin.BuoyancyComponent
// 0x0090 (0x01C8 - 0x0138)
class UBuoyancyComponent : public UMovementComponent
{
public:
	class AOceanManager*                               OceanManager;                                             // 0x0138(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeshDensity;                                              // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidDensity;                                             // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x0150(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x015C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVector>                             TestPoints;                                               // 0x0168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<float>                                      PointDensityOverride;                                     // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               DrawDebugPoints;                                          // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EnableStayUprightConstraint;                              // 0x0189(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	float                                              StayUprightStiffness;                                     // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StayUprightDamping;                                       // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    StayUprightDesiredRotation;                               // 0x0194(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x01A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x01A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x01A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.BuoyancyComponent");
		return ptr;
	}

};


// Class OceanPlugin.BuoyancyForceComponent
// 0x00A0 (0x0330 - 0x0290)
class UBuoyancyForceComponent : public USceneComponent
{
public:
	class AOceanManager*                               OceanManager;                                             // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MeshDensity;                                              // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidDensity;                                             // 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x02A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x02B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVector>                             TestPoints;                                               // 0x02C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               ApplyForceToBones;                                        // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SnapToSurfaceIfNoPhysics;                                 // 0x02D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TwoGerstnerIterations;                                    // 0x02D2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x02D3(0x0005) MISSED OFFSET
	TArray<float>                                      PointDensityOverride;                                     // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FStructBoneOverride>                 BoneOverride;                                             // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               DrawDebugPoints;                                          // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EnableStayUprightConstraint;                              // 0x02F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02FA(0x0002) MISSED OFFSET
	float                                              StayUprightStiffness;                                     // 0x02FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StayUprightDamping;                                       // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    StayUprightDesiredRotation;                               // 0x0304(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x0310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x0319(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.BuoyancyForceComponent");
		return ptr;
	}

};


// Class OceanPlugin.BuoyantDestructible
// 0x0008 (0x0320 - 0x0318)
class ABuoyantDestructible : public AActor
{
public:
	class UBuoyantDestructibleComponent*               BuoyantDestructibleComponent;                             // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.BuoyantDestructible");
		return ptr;
	}

};


// Class OceanPlugin.BuoyantDestructibleComponent
// 0x0050 (0x0930 - 0x08E0)
class UBuoyantDestructibleComponent : public UDestructibleComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08E0(0x0008) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x08E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChunkDensity;                                             // 0x08F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidDensity;                                             // 0x08F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidLinearDamping;                                       // 0x08F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FluidAngularDamping;                                      // 0x08FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     VelocityDamper;                                           // 0x0900(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               ClampMaxVelocity;                                         // 0x090C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x090D(0x0003) MISSED OFFSET
	float                                              MaxUnderwaterVelocity;                                    // 0x0910(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TestPointRadius;                                          // 0x0914(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DrawDebugPoints;                                          // 0x0918(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EnableWaveForces;                                         // 0x0919(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x091A(0x0002) MISSED OFFSET
	float                                              WaveForceMultiplier;                                      // 0x091C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChunkSleepThreshold;                                      // 0x0920(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChunkStabilizationThreshold;                              // 0x0924(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0928(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.BuoyantDestructibleComponent");
		return ptr;
	}

};


// Class OceanPlugin.BuoyantMeshComponent
// 0x0070 (0x0760 - 0x06F0)
class UBuoyantMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F0(0x0008) MISSED OFFSET
	bool                                               bVerticalForcesOnly;                                      // 0x06F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseWaterPatch;                                           // 0x06F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseStaticForces;                                         // 0x06FA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseDynamicForces;                                        // 0x06FB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDrawForceArrows;                                         // 0x0708(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDrawWaterline;                                           // 0x0709(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDrawVertices;                                            // 0x070A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDrawTriangles;                                           // 0x070B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDrawSubtriangles;                                        // 0x070C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	float                                              ForceArrowSize;                                           // 0x0710(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideMeshDensity;                                     // 0x0714(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	float                                              MeshDensity;                                              // 0x0718(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideMass;                                            // 0x071C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x0720(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaterDensity;                                             // 0x0724(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0728(0x0028) MISSED OFFSET
	class UWaterHeightmapComponent*                    WaterHeightmap;                                           // 0x0750(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0758(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.BuoyantMeshComponent");
		return ptr;
	}

};


// Class OceanPlugin.CustomVehicleController
// 0x0008 (0x0678 - 0x0670)
class ACustomVehicleController : public APlayerController
{
public:
	class APawn*                                       PlayerPawn;                                               // 0x0670(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.CustomVehicleController");
		return ptr;
	}


	bool GetIsDriving();
	void ExitVehicle();
	void EnterVehicle(class APawn* Vehicle);
	void EnableBuoyancy();
	void DrawBuoyancyPoints();
};


// Class OceanPlugin.FishManager
// 0x0058 (0x0370 - 0x0318)
class AFishManager : public AActor
{
public:
	TArray<class UClass*>                              flockTypes;                                               // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<float>                                      numInFlock;                                               // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              minZ;                                                     // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              maxZ;                                                     // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              underwaterBoxLength;                                      // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               attachToPlayer;                                           // 0x0344(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0345(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0346(0x0002) MISSED OFFSET
	class UClass*                                      playerType;                                               // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0350(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.FishManager");
		return ptr;
	}

};


// Class OceanPlugin.FlockFish
// 0x0180 (0x04F8 - 0x0378)
class AFlockFish : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0378(0x0010) MISSED OFFSET
	class USphereComponent*                            FishInteractionSphere;                                    // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               isLeader;                                                 // 0x0390(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	TArray<class UClass*>                              enemyTypes;                                               // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UClass*>                              preyTypes;                                                // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UClass*                                      neighborType;                                             // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              followDist;                                               // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Speed;                                                    // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              turnFrequency;                                            // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              hungerResetTime;                                          // 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              distBehindSpeedUpRange;                                   // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SeperationDistanceMultiplier;                             // 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeDistanceMultiplier;                                   // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FleeAccelerationMultiplier;                               // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChaseAccelerationMultiplier;                              // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SeekDecelerationMultiplier;                               // 0x03EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AvoidForceMultiplier;                                     // 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AvoidanceForce;                                           // 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      playerType;                                               // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     underwaterMin;                                            // 0x0400(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     underwaterMax;                                            // 0x040C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              CustomZSeekMin;                                           // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CustomZSeekMax;                                           // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NumNeighborsToEvaluate;                                   // 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateEveryTick;                                          // 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0428(0x0010) MISSED OFFSET
	bool                                               DebugMode;                                                // 0x0438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xBF];                                      // 0x0439(0x00BF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.FlockFish");
		return ptr;
	}


	void OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class OceanPlugin.InfiniteSystemComponent
// 0x0030 (0x02C0 - 0x0290)
class UInfiniteSystemComponent : public USceneComponent
{
public:
	bool                                               UpdateInEditor;                                           // 0x0290(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFollowMethod>                         FollowMethod;                                             // 0x0291(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0292(0x0002) MISSED OFFSET
	float                                              GridSnapSize;                                             // 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLookAtDistance;                                        // 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ScaleByDistance;                                          // 0x029C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	float                                              ScaleDistanceFactor;                                      // 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleStartDistance;                                       // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleMin;                                                 // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleMax;                                                 // 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.InfiniteSystemComponent");
		return ptr;
	}

};


// Class OceanPlugin.OceanManager
// 0x0088 (0x03A0 - 0x0318)
class AOceanManager : public AActor
{
public:
	bool                                               EnableGerstnerWaves;                                      // 0x0318(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	struct FVector2D                                   GlobalWaveDirection;                                      // 0x031C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              GlobalWaveSpeed;                                          // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GlobalWaveAmplitude;                                      // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceCheck;                                            // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWaveParameter>                      WaveClusters;                                             // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWaveSetParameters>                  WaveSetOffsetsOverride;                                   // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              NetWorkTimeOffset;                                        // 0x0350(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableLandscapeModulation;                               // 0x0354(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	float                                              ModulationStartHeight;                                    // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ModulationMaxHeight;                                      // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ModulationPower;                                          // 0x0360(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class ALandscape*                                  Landscape;                                                // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0378(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.OceanManager");
		return ptr;
	}


	void MySetNetworkOffset(float Offset);
	void LoadLandscapeHeightmap(class UTexture2D* Tex2D);
	struct FVector GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations);
	struct FLinearColor GetHeightmapPixel(float U, float V);
};


// Class OceanPlugin.TimeManager
// 0x00C8 (0x03E0 - 0x0318)
class ATimeManager : public AActor
{
public:
	struct FTimeDate                                   CurrentLocalTime;                                         // 0x0318(0x001C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              Latitude;                                                 // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Longitude;                                                // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OffsetUTC;                                                // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OffsetDST;                                                // 0x0340(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowDaylightSavings;                                    // 0x0344(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDaylightSavingsActive;                                   // 0x0345(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0346(0x0002) MISSED OFFSET
	float                                              TimeScaleMultiplier;                                      // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SolarTime;                                                // 0x034C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalClockTime;                                           // 0x0350(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeCorrection;                                           // 0x0354(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LSTM;                                                     // 0x0358(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DayOfYear;                                                // 0x035C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EoT;                                                      // 0x0360(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SolarAltAngle;                                            // 0x0364(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SolarDeclination;                                         // 0x0368(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SolarAzimuth;                                             // 0x036C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SolarHRA;                                                 // 0x0370(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SiderealTime;                                             // 0x0374(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LunarAltAngle;                                            // 0x0378(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LunarHRA;                                                 // 0x037C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LunarDeclination;                                         // 0x0380(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LunarAzimuth;                                             // 0x0384(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LunarRightAsc;                                            // 0x0388(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LunarElapsedDays;                                         // 0x038C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EcLongitude;                                              // 0x0390(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EcLatitude;                                               // 0x0394(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EcDistance;                                               // 0x0398(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PartL;                                                    // 0x039C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PartM;                                                    // 0x03A0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PartF;                                                    // 0x03A4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x03A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.TimeManager");
		return ptr;
	}


	void SetCurrentLocalTime(float Time);
	bool IsLeapYear(int Year);
	void InitializeCalendar(const struct FTimeDate& Time);
	void IncrementTime(float DeltaSeconds);
	float GetYearPhase();
	float GetElapsedDayInMinutes();
	int GetDaysInYear(int Year);
	int GetDaysInMonth(int Year, int Month);
	float GetDayPhase();
	int GetDayOfYear(const struct FTimeDate& Time);
	struct FRotator CalculateSunAngle();
	float CalculateMoonPhase();
	struct FRotator CalculateMoonAngle();
};


// Class OceanPlugin.WaterHeightmapComponent
// 0x0078 (0x0168 - 0x00F0)
class UWaterHeightmapComponent : public UActorComponent
{
public:
	float                                              DesiredCellSize;                                          // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOnlyCollidingComponents;                                 // 0x00F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	float                                              GridSizeMultiplier;                                       // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDrawUsedTriangles;                                       // 0x00FC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDrawHeightmap;                                           // 0x00FD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x62];                                      // 0x00FE(0x0062) MISSED OFFSET
	class AOceanManager*                               OceanManager;                                             // 0x0160(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class OceanPlugin.WaterHeightmapComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
