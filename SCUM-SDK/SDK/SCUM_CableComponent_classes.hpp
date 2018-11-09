#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_CableComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CableComponent.CableActor
// 0x0008 (0x0330 - 0x0328)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CableComponent.CableActor");
		return ptr;
	}

};


// Class CableComponent.CableComponent
// 0x0080 (0x0610 - 0x0590)
class UCableComponent : public UMeshComponent
{
public:
	struct FComponentReference                         AttachEndTo;                                              // 0x0590(0x0018) (CPF_Edit)
	struct FName                                       AttachEndToSocketName;                                    // 0x05A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x05B0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              CableLength;                                              // 0x05BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSegments;                                              // 0x05C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SubstepTime;                                              // 0x05C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SolverIterations;                                         // 0x05C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableStiffness;                                         // 0x05CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x05CD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x05CE(0x0002) MISSED OFFSET
	float                                              CollisionFriction;                                        // 0x05D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CableForce;                                               // 0x05D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              CableGravityScale;                                        // 0x05E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CableWidth;                                               // 0x05E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSides;                                                 // 0x05E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileMaterial;                                             // 0x05EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x05F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class CableComponent.CableComponent");
		return ptr;
	}


	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
