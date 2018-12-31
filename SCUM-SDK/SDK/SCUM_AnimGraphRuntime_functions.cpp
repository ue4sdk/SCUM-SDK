// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 RootPos                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 JointPos                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 EndPos                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 JointTarget                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Effector                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 OutJointPos                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 OutEndPos                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bAllowStretching               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartStretchRatio              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxStretchScale                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");

	struct
	{
		struct FVector                 RootPos;
		struct FVector                 JointPos;
		struct FVector                 EndPos;
		struct FVector                 JointTarget;
		struct FVector                 Effector;
		struct FVector                 OutJointPos;
		struct FVector                 OutEndPos;
		bool                           bAllowStretching;
		float                          StartStretchRatio;
		float                          MaxStretchScale;
	} params;

	params.RootPos = RootPos;
	params.JointPos = JointPos;
	params.EndPos = EndPos;
	params.JointTarget = JointTarget;
	params.Effector = Effector;
	params.bAllowStretching = bAllowStretching;
	params.StartStretchRatio = StartStretchRatio;
	params.MaxStretchScale = MaxStretchScale;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutJointPos != nullptr)
		*OutJointPos = params.OutJointPos;
	if (OutEndPos != nullptr)
		*OutEndPos = params.OutEndPos;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              CurrentTransform               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 TargetPosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 LookAtVector                   (CPF_Parm, CPF_IsPlainOldData)
// bool                           bUseUpVector                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 UpVector                       (CPF_Parm, CPF_IsPlainOldData)
// float                          ClampConeInDegree              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");

	struct
	{
		struct FTransform              CurrentTransform;
		struct FVector                 TargetPosition;
		struct FVector                 LookAtVector;
		bool                           bUseUpVector;
		struct FVector                 UpVector;
		float                          ClampConeInDegree;
		struct FTransform              ReturnValue;
	} params;

	params.CurrentTransform = CurrentTransform;
	params.TargetPosition = TargetPosition;
	params.LookAtVector = LookAtVector;
	params.bUseUpVector = bUseUpVector;
	params.UpVector = UpVector;
	params.ClampConeInDegree = ClampConeInDegree;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");

	struct
	{
		struct FName                   NotifyName;
		struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;
	} params;

	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");

	struct
	{
		struct FName                   NotifyName;
		struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;
	} params;

	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params;

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params;

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  InSkeletalMeshComponent        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartingPosition               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StartingSection                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");

	struct
	{
		class USkeletalMeshComponent*  InSkeletalMeshComponent;
		class UAnimMontage*            MontageToPlay;
		float                          PlayRate;
		float                          StartingPosition;
		struct FName                   StartingSection;
		class UPlayMontageCallbackProxy* ReturnValue;
	} params;

	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
