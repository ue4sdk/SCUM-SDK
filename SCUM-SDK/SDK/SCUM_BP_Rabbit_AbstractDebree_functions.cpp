// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Rabbit_AbstractDebree_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.SpawnDebris
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InImpulseDirection             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void ABP_Rabbit_AbstractDebree_C::SpawnDebris(const struct FVector& InImpulseDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.SpawnDebris");

	struct
	{
		struct FVector                 InImpulseDirection;
	} params;

	params.InImpulseDirection = InImpulseDirection;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Rabbit_AbstractDebree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.ReceivePointDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ShotFromDirection              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              HitInfo                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_Rabbit_AbstractDebree_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.ReceivePointDamage");

	struct
	{
		float                          Damage;
		class UDamageType*             DamageType;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
		class UPrimitiveComponent*     HitComponent;
		struct FName                   BoneName;
		struct FVector                 ShotFromDirection;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
		struct FHitResult              HitInfo;
	} params;

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.ExecuteUbergraph_BP_Rabbit_AbstractDebree
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Rabbit_AbstractDebree_C::ExecuteUbergraph_BP_Rabbit_AbstractDebree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rabbit_AbstractDebree.BP_Rabbit_AbstractDebree_C.ExecuteUbergraph_BP_Rabbit_AbstractDebree");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
