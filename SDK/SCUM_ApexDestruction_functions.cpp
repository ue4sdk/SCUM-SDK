// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ApexDestruction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDestructibleMesh*       NewMesh                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDestructibleComponent::SetDestructibleMesh(class UDestructibleMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.SetDestructibleMesh");

	struct
	{
		class UDestructibleMesh*       NewMesh;
	} params;

	params.NewMesh = NewMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UDestructibleMesh*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDestructibleMesh* UDestructibleComponent::GetDestructibleMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.GetDestructibleMesh");

	struct
	{
		class UDestructibleMesh*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          BaseDamage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HurtOrigin                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          DamageRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ImpulseStrength                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFullDamage                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDestructibleComponent::ApplyRadiusDamage(float BaseDamage, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage");

	struct
	{
		float                          BaseDamage;
		struct FVector                 HurtOrigin;
		float                          DamageRadius;
		float                          ImpulseStrength;
		bool                           bFullDamage;
	} params;

	params.BaseDamage = BaseDamage;
	params.HurtOrigin = HurtOrigin;
	params.DamageRadius = DamageRadius;
	params.ImpulseStrength = ImpulseStrength;
	params.bFullDamage = bFullDamage;

	UObject::ProcessEvent(fn, &params);
}


// Function ApexDestruction.DestructibleComponent.ApplyDamage
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          DamageAmount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 impulseDir                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ImpulseStrength                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDestructibleComponent::ApplyDamage(float DamageAmount, const struct FVector& HitLocation, const struct FVector& impulseDir, float ImpulseStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApexDestruction.DestructibleComponent.ApplyDamage");

	struct
	{
		float                          DamageAmount;
		struct FVector                 HitLocation;
		struct FVector                 impulseDir;
		float                          ImpulseStrength;
	} params;

	params.DamageAmount = DamageAmount;
	params.HitLocation = HitLocation;
	params.impulseDir = impulseDir;
	params.ImpulseStrength = ImpulseStrength;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
