// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AIModule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIModule.AIController.UseBlackboard
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBlackboardData*         BlackboardAsset                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBlackboardComponent*    BlackboardComponent            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");

	struct
	{
		class UBlackboardData*         BlackboardAsset;
		class UBlackboardComponent*    BlackboardComponent;
		bool                           ReturnValue;
	} params;

	params.BlackboardAsset = BlackboardAsset;

	UObject::ProcessEvent(fn, &params);

	if (BlackboardComponent != nullptr)
		*BlackboardComponent = params.BlackboardComponent;

	return params.ReturnValue;
}


// Function AIModule.AIController.UnclaimTaskResource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIController::UnclaimTaskResource(class UClass* ResourceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UnclaimTaskResource");

	struct
	{
		class UClass*                  ResourceClass;
	} params;

	params.ResourceClass = ResourceClass;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.SetMoveBlockDetection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIController::SetMoveBlockDetection(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");

	struct
	{
		bool                           bEnable;
	} params;

	params.bEnable = bEnable;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.RunBehaviorTree
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UBehaviorTree*           BTAsset                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");

	struct
	{
		class UBehaviorTree*           BTAsset;
		bool                           ReturnValue;
	} params;

	params.BTAsset = BTAsset;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.OnUsingBlackBoard
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    BlackboardComp                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UBlackboardData*         BlackboardAsset                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");

	struct
	{
		class UBlackboardComponent*    BlackboardComp;
		class UBlackboardData*         BlackboardAsset;
	} params;

	params.BlackboardComp = BlackboardComp;
	params.BlackboardAsset = BlackboardAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.OnUnpossess
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   UnpossessedPawn                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIController::OnUnpossess(class APawn* UnpossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUnpossess");

	struct
	{
		class APawn*                   UnpossessedPawn;
	} params;

	params.UnpossessedPawn = UnpossessedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.OnPossess
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIController::OnPossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnPossess");

	struct
	{
		class APawn*                   PossessedPawn;
	} params;

	params.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FGameplayResourceSet    NewlyClaimed                   (CPF_Parm)
// struct FGameplayResourceSet    FreshlyReleased                (CPF_Parm)

void AAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");

	struct
	{
		struct FGameplayResourceSet    NewlyClaimed;
		struct FGameplayResourceSet    FreshlyReleased;
	} params;

	params.NewlyClaimed = NewlyClaimed;
	params.FreshlyReleased = FreshlyReleased;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.MoveToLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Dest                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          AcceptanceRadius               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopOnOverlap                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUsePathfinding                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bProjectDestinationToNavigation (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCanStrafe                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAllowPartialPath              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EPathFollowingRequestResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPathFollowingRequestResult> AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");

	struct
	{
		struct FVector                 Dest;
		float                          AcceptanceRadius;
		bool                           bStopOnOverlap;
		bool                           bUsePathfinding;
		bool                           bProjectDestinationToNavigation;
		bool                           bCanStrafe;
		class UClass*                  FilterClass;
		bool                           bAllowPartialPath;
		TEnumAsByte<EPathFollowingRequestResult> ReturnValue;
	} params;

	params.Dest = Dest;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.MoveToActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Goal                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AcceptanceRadius               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopOnOverlap                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUsePathfinding                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCanStrafe                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAllowPartialPath              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EPathFollowingRequestResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPathFollowingRequestResult> AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");

	struct
	{
		class AActor*                  Goal;
		float                          AcceptanceRadius;
		bool                           bStopOnOverlap;
		bool                           bUsePathfinding;
		bool                           bCanStrafe;
		class UClass*                  FilterClass;
		bool                           bAllowPartialPath;
		TEnumAsByte<EPathFollowingRequestResult> ReturnValue;
	} params;

	params.Goal = Goal;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.K2_SetFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIController::K2_SetFocus(class AActor* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");

	struct
	{
		class AActor*                  NewFocus;
	} params;

	params.NewFocus = NewFocus;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.K2_SetFocalPoint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 FP                             (CPF_Parm, CPF_IsPlainOldData)

void AAIController::K2_SetFocalPoint(const struct FVector& FP)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");

	struct
	{
		struct FVector                 FP;
	} params;

	params.FP = FP;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.K2_ClearFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AAIController::K2_ClearFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIController.HasPartialPath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AAIController::HasPartialPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.GetPathFollowingComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPathFollowingComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPathFollowingComponent* AAIController::GetPathFollowingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");

	struct
	{
		class UPathFollowingComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.GetMoveStatus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<EPathFollowingStatus> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPathFollowingStatus> AAIController::GetMoveStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");

	struct
	{
		TEnumAsByte<EPathFollowingStatus> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.GetImmediateMoveDestination
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AAIController::GetImmediateMoveDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocusActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* AAIController::GetFocusActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");

	struct
	{
		class AActor*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPointOnActor
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AAIController::GetFocalPointOnActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");

	struct
	{
		class AActor*                  Actor;
		struct FVector                 ReturnValue;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.GetFocalPoint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AAIController::GetFocalPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.GetAIPerceptionComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");

	struct
	{
		class UAIPerceptionComponent*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIController.ClaimTaskResource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ResourceClass                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIController::ClaimTaskResource(class UClass* ResourceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.ClaimTaskResource");

	struct
	{
		class UClass*                  ResourceClass;
	} params;

	params.ResourceClass = ResourceClass;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPathFollowingComponent::OnNavDataRegistered(class ANavigationData* NavData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnNavDataRegistered");

	struct
	{
		class ANavigationData*         NavData;
	} params;

	params.NavData = NavData;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PathFollowingComponent.OnActorBump
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UPathFollowingComponent::OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");

	struct
	{
		class AActor*                  SelfActor;
		class AActor*                  OtherActor;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;

	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PathFollowingComponent.GetPathDestination
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UPathFollowingComponent::GetPathDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PathFollowingComponent.GetPathActionType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<EPathFollowingAction> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPathFollowingAction> UPathFollowingComponent::GetPathActionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");

	struct
	{
		TEnumAsByte<EPathFollowingAction> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSuspend                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");

	struct
	{
		bool                           bSuspend;
	} params;

	params.bSuspend = bSuspend;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FAIRequestID            RequestID                      (CPF_Parm)
// TEnumAsByte<EPathFollowingResult> MovementResult                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");

	struct
	{
		struct FAIRequestID            RequestID;
		TEnumAsByte<EPathFollowingResult> MovementResult;
	} params;

	params.RequestID = RequestID;
	params.MovementResult = MovementResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUnlockMovement                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           UnlockAILogic                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation");

	struct
	{
		class UAnimInstance*           AnimInstance;
		bool                           bUnlockMovement;
		bool                           UnlockAILogic;
	} params;

	params.AnimInstance = AnimInstance;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  PawnClass                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBehaviorTree*           BehaviorTree                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           bNoCollisionFail               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  PawnClass;
		class UBehaviorTree*           BehaviorTree;
		struct FVector                 Location;
		struct FRotator                Rotation;
		bool                           bNoCollisionFail;
		class APawn*                   ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PawnClass = PawnClass;
	params.BehaviorTree = BehaviorTree;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bNoCollisionFail = bNoCollisionFail;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AController*             Controller                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Goal                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UAIBlueprintHelperLibrary::SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation");

	struct
	{
		class AController*             Controller;
		struct FVector                 Goal;
	} params;

	params.Controller = Controller;
	params.Goal = Goal;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AController*             Controller                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Goal                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIBlueprintHelperLibrary::SimpleMoveToActor(class AController* Controller, class AActor* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor");

	struct
	{
		class AController*             Controller;
		class AActor*                  Goal;
	} params;

	params.Controller = Controller;
	params.Goal = Goal;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APawn*                   Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Message                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 MessageSource                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIBlueprintHelperLibrary::SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage");

	struct
	{
		class APawn*                   Target;
		struct FName                   Message;
		class UObject*                 MessageSource;
		bool                           bSuccess;
	} params;

	params.Target = Target;
	params.Message = Message;
	params.MessageSource = MessageSource;
	params.bSuccess = bSuccess;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLockMovement                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           LockAILogic                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation");

	struct
	{
		class UAnimInstance*           AnimInstance;
		bool                           bLockMovement;
		bool                           LockAILogic;
	} params;

	params.AnimInstance = AnimInstance;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAIBlueprintHelperLibrary::IsValidAIRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation");

	struct
	{
		struct FRotator                Rotation;
		bool                           ReturnValue;
	} params;

	params.Rotation = Rotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAIBlueprintHelperLibrary::IsValidAILocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation");

	struct
	{
		struct FVector                 Location;
		bool                           ReturnValue;
	} params;

	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 DirectionVector                (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAIBlueprintHelperLibrary::IsValidAIDirection(const struct FVector& DirectionVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection");

	struct
	{
		struct FVector                 DirectionVector;
		bool                           ReturnValue;
	} params;

	params.DirectionVector = DirectionVector;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AController*             Controller                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNavigationPath*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath");

	struct
	{
		class AController*             Controller;
		class UNavigationPath*         ReturnValue;
	} params;

	params.Controller = Controller;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBlackboardComponent*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard");

	struct
	{
		class AActor*                  Target;
		class UBlackboardComponent*    ReturnValue;
	} params;

	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  ControlledActor                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AAIController*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AAIController* UAIBlueprintHelperLibrary::GetAIController(class AActor* ControlledActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetAIController");

	struct
	{
		class AActor*                  ControlledActor;
		class AAIController*           ReturnValue;
	} params;

	params.ControlledActor = ControlledActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   Pawn                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Destination                    (CPF_Parm, CPF_IsPlainOldData)
// class AActor*                  TargetActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AcceptanceRadius               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopOnOverlap                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAIAsyncTaskBlueprintProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject");

	struct
	{
		class UObject*                 WorldContextObject;
		class APawn*                   Pawn;
		struct FVector                 Destination;
		class AActor*                  TargetActor;
		float                          AcceptanceRadius;
		bool                           bStopOnOverlap;
		class UAIAsyncTaskBlueprintProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Destination = Destination;
	params.TargetActor = TargetActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionComponent.SetSenseEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bEnable                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIPerceptionComponent::SetSenseEnabled(class UClass* SenseClass, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetSenseEnabled");

	struct
	{
		class UClass*                  SenseClass;
		bool                           bEnable;
	} params;

	params.SenseClass = SenseClass;
	params.bEnable = bEnable;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAIPerceptionComponent::RequestStimuliListenerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIPerceptionComponent::OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");

	struct
	{
		class AActor*                  Actor;
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors");

	struct
	{
		TArray<class AActor*>          OutActors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetPerceivedActors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  SenseToUse                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UAIPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedActors");

	struct
	{
		class UClass*                  SenseToUse;
		TArray<class AActor*>          OutActors;
	} params;

	params.SenseToUse = SenseToUse;

	UObject::ProcessEvent(fn, &params);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  SenseToUse                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UAIPerceptionComponent::GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors");

	struct
	{
		class UClass*                  SenseToUse;
		TArray<class AActor*>          OutActors;
	} params;

	params.SenseToUse = SenseToUse;

	UObject::ProcessEvent(fn, &params);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  SenseToUse                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UAIPerceptionComponent::GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors");

	struct
	{
		class UClass*                  SenseToUse;
		TArray<class AActor*>          OutActors;
	} params;

	params.SenseToUse = SenseToUse;

	UObject::ProcessEvent(fn, &params);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function AIModule.AIPerceptionComponent.GetActorsPerception
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FActorPerceptionBlueprintInfo Info                           (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAIPerceptionComponent::GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetActorsPerception");

	struct
	{
		class AActor*                  Actor;
		struct FActorPerceptionBlueprintInfo Info;
		bool                           ReturnValue;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Info != nullptr)
		*Info = params.Info;

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");

	struct
	{
		class UClass*                  SenseClass;
	} params;

	params.SenseClass = SenseClass;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  SenseClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");

	struct
	{
		class UClass*                  SenseClass;
	} params;

	params.SenseClass = SenseClass;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAISenseEvent*           PerceptionEvent                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIPerceptionSystem::ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class UAISenseEvent*           PerceptionEvent;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PerceptionEvent = PerceptionEvent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAISenseEvent*           PerceptionEvent                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* PerceptionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");

	struct
	{
		class UAISenseEvent*           PerceptionEvent;
	} params;

	params.PerceptionEvent = PerceptionEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Sense                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  Sense;
		class AActor*                  Target;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Sense = Sense;
	params.Target = Target;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");

	struct
	{
		class AActor*                  Actor;
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAIStimulus             Stimulus                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* UAIPerceptionSystem::GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FAIStimulus             Stimulus;
		class UClass*                  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Stimulus = Stimulus;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnUpdate
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UAISenseEvent*>   EventsToProcess                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");

	struct
	{
		TArray<class UAISenseEvent*>   EventsToProcess;
		float                          ReturnValue;
	} params;

	params.EventsToProcess = EventsToProcess;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAIPerceptionComponent*  PerceptionComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UAISense_Blueprint::OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");

	struct
	{
		class AActor*                  ActorListener;
		class UAIPerceptionComponent*  PerceptionComponent;
	} params;

	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAIPerceptionComponent*  PerceptionComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UAISense_Blueprint::OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");

	struct
	{
		class AActor*                  ActorListener;
		class UAIPerceptionComponent*  PerceptionComponent;
	} params;

	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorListener                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAIPerceptionComponent*  PerceptionComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UAISense_Blueprint::OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");

	struct
	{
		class AActor*                  ActorListener;
		class UAIPerceptionComponent*  PerceptionComponent;
	} params;

	params.ActorListener = ActorListener;
	params.PerceptionComponent = PerceptionComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   NewPawn                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAISense_Blueprint::K2_OnNewPawn(class APawn* NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");

	struct
	{
		class APawn*                   NewPawn;
	} params;

	params.NewPawn = NewPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class UAIPerceptionComponent*> ListenerComponents             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");

	struct
	{
		TArray<class UAIPerceptionComponent*> ListenerComponents;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ListenerComponents != nullptr)
		*ListenerComponents = params.ListenerComponents;
}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<class AActor*>          ListenerActors                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UAISense_Blueprint::GetAllListenerActors(TArray<class AActor*>* ListenerActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");

	struct
	{
		TArray<class AActor*>          ListenerActors;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ListenerActors != nullptr)
		*ListenerActors = params.ListenerActors;
}


// Function AIModule.AISense_Damage.ReportDamageEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamagedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Instigator                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageAmount                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 EventLocation                  (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_Parm, CPF_IsPlainOldData)

void UAISense_Damage::ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  DamagedActor;
		class AActor*                  Instigator;
		float                          DamageAmount;
		struct FVector                 EventLocation;
		struct FVector                 HitLocation;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.DamagedActor = DamagedActor;
	params.Instigator = Instigator;
	params.DamageAmount = DamageAmount;
	params.EventLocation = EventLocation;
	params.HitLocation = HitLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NoiseLocation                  (CPF_Parm, CPF_IsPlainOldData)
// float                          Loudness                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Instigator                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAISense_Hearing::ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 NoiseLocation;
		float                          Loudness;
		class AActor*                  Instigator;
		float                          MaxRange;
		struct FName                   Tag;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.NoiseLocation = NoiseLocation;
	params.Loudness = Loudness;
	params.Instigator = Instigator;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APawn*                   Requestor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  PredictedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PredictionTime                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAISense_Prediction::RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");

	struct
	{
		class APawn*                   Requestor;
		class AActor*                  PredictedActor;
		float                          PredictionTime;
	} params;

	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AAIController*           Requestor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  PredictedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PredictionTime                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAISense_Prediction::RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");

	struct
	{
		class AAIController*           Requestor;
		class AActor*                  PredictedActor;
		float                          PredictionTime;
	} params;

	params.Requestor = Requestor;
	params.PredictedActor = PredictedActor;
	params.PredictionTime = PredictionTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.AISystem.AILoggingVerbose
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void UAISystem::AILoggingVerbose()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AISystem.AIIgnorePlayers
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void UAISystem::AIIgnorePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.AITask_MoveTo.AIMoveTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 GoalLocation                   (CPF_Parm, CPF_IsPlainOldData)
// class AActor*                  GoalActor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AcceptanceRadius               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAIOptionFlag>     StopOnOverlap                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAIOptionFlag>     AcceptPartialPath              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUsePathfinding                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLockAILogic                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseContinuosGoalTracking      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAITask_MoveTo*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");

	struct
	{
		class AAIController*           Controller;
		struct FVector                 GoalLocation;
		class AActor*                  GoalActor;
		float                          AcceptanceRadius;
		TEnumAsByte<EAIOptionFlag>     StopOnOverlap;
		TEnumAsByte<EAIOptionFlag>     AcceptPartialPath;
		bool                           bUsePathfinding;
		bool                           bLockAILogic;
		bool                           bUseContinuosGoalTracking;
		class UAITask_MoveTo*          ReturnValue;
	} params;

	params.Controller = Controller;
	params.GoalLocation = GoalLocation;
	params.GoalActor = GoalActor;
	params.AcceptanceRadius = AcceptanceRadius;
	params.StopOnOverlap = StopOnOverlap;
	params.AcceptPartialPath = AcceptPartialPath;
	params.bUsePathfinding = bUsePathfinding;
	params.bLockAILogic = bLockAILogic;
	params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.AITask_RunEQS.RunEQS
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEnvQuery*               QueryTemplate                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAITask_RunEQS*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAITask_RunEQS* UAITask_RunEQS::RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AITask_RunEQS.RunEQS");

	struct
	{
		class AAIController*           Controller;
		class UEnvQuery*               QueryTemplate;
		class UAITask_RunEQS*          ReturnValue;
	} params;

	params.Controller = Controller;
	params.QueryTemplate = QueryTemplate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BrainComponent.StopLogic
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Reason                         (CPF_Parm, CPF_ZeroConstructor)

void UBrainComponent::StopLogic(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");

	struct
	{
		struct FString                 Reason;
	} params;

	params.Reason = Reason;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BrainComponent.RestartLogic
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UBrainComponent::RestartLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BrainComponent.IsRunning
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBrainComponent::IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsRunning");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BrainComponent.IsPaused
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBrainComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsPaused");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            InjectTag                      (CPF_Parm)
// class UBehaviorTree*           BehaviorAsset                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");

	struct
	{
		struct FGameplayTag            InjectTag;
		class UBehaviorTree*           BehaviorAsset;
	} params;

	params.InjectTag = InjectTag;
	params.BehaviorAsset = BehaviorAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTag            CooldownTag                    (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");

	struct
	{
		struct FGameplayTag            CooldownTag;
		float                          ReturnValue;
	} params;

	params.CooldownTag = CooldownTag;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTag            CooldownTag                    (CPF_Parm)
// float                          CooldownDuration               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAddToExistingDuration         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");

	struct
	{
		struct FGameplayTag            CooldownTag;
		float                          CooldownDuration;
		bool                           bAddToExistingDuration;
	} params;

	params.CooldownTag = CooldownTag;
	params.CooldownDuration = CooldownDuration;
	params.bAddToExistingDuration = bAddToExistingDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsVector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 VectorValue                    (CPF_Parm, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");

	struct
	{
		struct FName                   KeyName;
		struct FVector                 VectorValue;
	} params;

	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FString                 StringValue                    (CPF_Parm, CPF_ZeroConstructor)

void UBlackboardComponent::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");

	struct
	{
		struct FName                   KeyName;
		struct FString                 StringValue;
	} params;

	params.KeyName = KeyName;
	params.StringValue = StringValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                VectorValue                    (CPF_Parm, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");

	struct
	{
		struct FName                   KeyName;
		struct FRotator                VectorValue;
	} params;

	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UObject*                 ObjectValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");

	struct
	{
		struct FName                   KeyName;
		class UObject*                 ObjectValue;
	} params;

	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FName                   NameValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");

	struct
	{
		struct FName                   KeyName;
		struct FName                   NameValue;
	} params;

	params.KeyName = KeyName;
	params.NameValue = NameValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            IntValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");

	struct
	{
		struct FName                   KeyName;
		int                            IntValue;
	} params;

	params.KeyName = KeyName;
	params.IntValue = IntValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          FloatValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");

	struct
	{
		struct FName                   KeyName;
		float                          FloatValue;
	} params;

	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// unsigned char                  EnumValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");

	struct
	{
		struct FName                   KeyName;
		unsigned char                  EnumValue;
	} params;

	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UClass*                  ClassValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");

	struct
	{
		struct FName                   KeyName;
		class UClass*                  ClassValue;
	} params;

	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           BoolValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBlackboardComponent::SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");

	struct
	{
		struct FName                   KeyName;
		bool                           BoolValue;
	} params;

	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlackboardComponent::IsVectorValueSet(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");

	struct
	{
		struct FName                   KeyName;
		bool                           ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UBlackboardComponent::GetValueAsVector(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");

	struct
	{
		struct FName                   KeyName;
		struct FVector                 ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UBlackboardComponent::GetValueAsString(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");

	struct
	{
		struct FName                   KeyName;
		struct FString                 ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UBlackboardComponent::GetValueAsRotator(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");

	struct
	{
		struct FName                   KeyName;
		struct FRotator                ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UBlackboardComponent::GetValueAsObject(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");

	struct
	{
		struct FName                   KeyName;
		class UObject*                 ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UBlackboardComponent::GetValueAsName(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");

	struct
	{
		struct FName                   KeyName;
		struct FName                   ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UBlackboardComponent::GetValueAsInt(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");

	struct
	{
		struct FName                   KeyName;
		int                            ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UBlackboardComponent::GetValueAsFloat(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");

	struct
	{
		struct FName                   KeyName;
		float                          ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

unsigned char UBlackboardComponent::GetValueAsEnum(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");

	struct
	{
		struct FName                   KeyName;
		unsigned char                  ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* UBlackboardComponent::GetValueAsClass(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");

	struct
	{
		struct FName                   KeyName;
		class UClass*                  ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlackboardComponent::GetValueAsBool(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");

	struct
	{
		struct FName                   KeyName;
		bool                           ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                ResultRotation                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");

	struct
	{
		struct FName                   KeyName;
		struct FRotator                ResultRotation;
		bool                           ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	if (ResultRotation != nullptr)
		*ResultRotation = params.ResultRotation;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ResultLocation                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");

	struct
	{
		struct FName                   KeyName;
		struct FVector                 ResultLocation;
		bool                           ReturnValue;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;

	return params.ReturnValue;
}


// Function AIModule.BlackboardComponent.ClearValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UBlackboardComponent::ClearValue(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");

	struct
	{
		struct FName                   KeyName;
	} params;

	params.KeyName = KeyName;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");

	struct
	{
		class AActor*                  OwnerActor;
		float                          DeltaSeconds;
	} params;

	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");

	struct
	{
		class AActor*                  OwnerActor;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");

	struct
	{
		class AActor*                  OwnerActor;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");

	struct
	{
		class AActor*                  OwnerActor;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EBTNodeResult>     NodeResult                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		TEnumAsByte<EBTNodeResult>     NodeResult;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EBTNodeResult>     NodeResult                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");

	struct
	{
		class AActor*                  OwnerActor;
		TEnumAsByte<EBTNodeResult>     NodeResult;
	} params;

	params.OwnerActor = OwnerActor;
	params.NodeResult = NodeResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		bool                           ReturnValue;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBTDecorator_BlueprintBase::PerformConditionCheck(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");

	struct
	{
		class AActor*                  OwnerActor;
		bool                           ReturnValue;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::StopUsingExternalEvent(class UBTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent");

	struct
	{
		class UBTNode*                 NodeOwner;
	} params;

	params.NodeOwner = NodeOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OwningActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent");

	struct
	{
		class UBTNode*                 NodeOwner;
		class AActor*                  OwningActor;
	} params;

	params.NodeOwner = NodeOwner;
	params.OwningActor = OwningActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector                 Value                          (CPF_Parm, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		struct FVector                 Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor)

void UBTFunctionLibrary::SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		struct FString                 Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FRotator                Value                          (CPF_Parm, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		struct FRotator                Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		class UObject*                 Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		struct FName                   Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		int                            Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		float                          Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// unsigned char                  Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		unsigned char                  Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass*                  Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		class UClass*                  Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTFunctionLibrary::SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		bool                           Value;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBlackboardComponent*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(class UBTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard");

	struct
	{
		class UBTNode*                 NodeOwner;
		class UBlackboardComponent*    ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBehaviorTreeComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(class UBTNode* NodeOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnerComponent");

	struct
	{
		class UBTNode*                 NodeOwner;
		class UBehaviorTreeComponent*  ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UBTFunctionLibrary::GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		struct FVector                 ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UBTFunctionLibrary::GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		struct FString                 ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		struct FRotator                ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		class UObject*                 ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UBTFunctionLibrary::GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		struct FName                   ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UBTFunctionLibrary::GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		int                            ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UBTFunctionLibrary::GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		float                          ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

unsigned char UBTFunctionLibrary::GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		unsigned char                  ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* UBTFunctionLibrary::GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		class UClass*                  ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBTFunctionLibrary::GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		bool                           ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UBTFunctionLibrary::GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
		class AActor*                  ReturnValue;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBTFunctionLibrary::ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UBTNode*                 NodeOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBTFunctionLibrary::ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValue");

	struct
	{
		class UBTNode*                 NodeOwner;
		struct FBlackboardKeySelector  Key;
	} params;

	params.NodeOwner = NodeOwner;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTService_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTService_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");

	struct
	{
		class AActor*                  OwnerActor;
		float                          DeltaSeconds;
	} params;

	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTService_BlueprintBase::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTService_BlueprintBase::ReceiveSearchStart(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");

	struct
	{
		class AActor*                  OwnerActor;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTService_BlueprintBase::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTService_BlueprintBase::ReceiveDeactivation(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");

	struct
	{
		class AActor*                  OwnerActor;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTService_BlueprintBase::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTService_BlueprintBase::ReceiveActivation(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");

	struct
	{
		class AActor*                  OwnerActor;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBTService_BlueprintBase::IsServiceActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RequestID                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");

	struct
	{
		struct FName                   MessageName;
		int                            RequestID;
	} params;

	params.MessageName = MessageName;
	params.RequestID = RequestID;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   MessageName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::SetFinishOnMessage(const struct FName& MessageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");

	struct
	{
		struct FName                   MessageName;
	} params;

	params.MessageName = MessageName;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");

	struct
	{
		class AActor*                  OwnerActor;
		float                          DeltaSeconds;
	} params;

	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");

	struct
	{
		class AActor*                  OwnerActor;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::ReceiveAbort(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");

	struct
	{
		class AActor*                  OwnerActor;
	} params;

	params.OwnerActor = OwnerActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBTTask_BlueprintBase::IsTaskExecuting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBTTask_BlueprintBase::IsTaskAborting()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSuccess                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");

	struct
	{
		bool                           bSuccess;
	} params;

	params.bSuccess = bSuccess;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UBTTask_BlueprintBase::FinishAbort()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  QuerierActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ResultingLocation              (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation");

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		struct FVector                 ResultingLocation;
	} params;

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	UObject::ProcessEvent(fn, &params);

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  QuerierActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ResultingActor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor");

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		class AActor*                  ResultingActor;
	} params;

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	UObject::ProcessEvent(fn, &params);

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  QuerierActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         ResultingLocationSet           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet");

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		TArray<struct FVector>         ResultingLocationSet;
	} params;

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	UObject::ProcessEvent(fn, &params);

	if (ResultingLocationSet != nullptr)
		*ResultingLocationSet = params.ResultingLocationSet;
}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  QuerierActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          ResultingActorsSet             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet");

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		TArray<class AActor*>          ResultingActorsSet;
	} params;

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	UObject::ProcessEvent(fn, &params);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = params.ResultingActorsSet;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");

	struct
	{
		class UObject*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// TArray<struct FVector>         ContextLocations               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector> ContextLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");

	struct
	{
		TArray<struct FVector>         ContextLocations;
	} params;

	params.ContextLocations = ContextLocations;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FVector                 GeneratedVector                (CPF_Parm, CPF_IsPlainOldData)

void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& GeneratedVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");

	struct
	{
		struct FVector                 GeneratedVector;
	} params;

	params.GeneratedVector = GeneratedVector;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// class AActor*                  GeneratedActor                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AActor* GeneratedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");

	struct
	{
		class AActor*                  GeneratedActor;
	} params;

	params.GeneratedActor = GeneratedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam");

	struct
	{
		struct FName                   ParamName;
		float                          Value;
	} params;

	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");

	struct
	{
		TArray<struct FVector>         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");

	struct
	{
		TArray<class AActor*>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ItemIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");

	struct
	{
		int                            ItemIndex;
		float                          ReturnValue;
	} params;

	params.ItemIndex = ItemIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params;

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.EnvQueryManager.RunEQSQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEnvQuery*               QueryTemplate                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 Querier                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEnvQueryRunMode>  RunMode                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  WrapperClass                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEnvQueryInstanceBlueprintWrapper* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");

	struct
	{
		class UObject*                 WorldContextObject;
		class UEnvQuery*               QueryTemplate;
		class UObject*                 Querier;
		TEnumAsByte<EEnvQueryRunMode>  RunMode;
		class UClass*                  WrapperClass;
		class UEnvQueryInstanceBlueprintWrapper* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.QueryTemplate = QueryTemplate;
	params.Querier = Querier;
	params.RunMode = RunMode;
	params.WrapperClass = WrapperClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.SetSmartLinkEnabled");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.NavLinkProxy.ResumePathFollowing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Agent                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ANavLinkProxy::ResumePathFollowing(class AActor* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ResumePathFollowing");

	struct
	{
		class AActor*                  Agent;
	} params;

	params.Agent = Agent;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Agent                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Destination                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ANavLinkProxy::ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached");

	struct
	{
		class AActor*                  Agent;
		struct FVector                 Destination;
	} params;

	params.Agent = Agent;
	params.Destination = Destination;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ANavLinkProxy::IsSmartLinkEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.IsSmartLinkEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.NavLinkProxy.HasMovingAgents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ANavLinkProxy::HasMovingAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.HasMovingAgents");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CellSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavLocalGridManager::SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity");

	struct
	{
		class UObject*                 WorldContextObject;
		float                          CellSize;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.CellSize = CellSize;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            GridId                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRebuildGrids                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavLocalGridManager::RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid");

	struct
	{
		class UObject*                 WorldContextObject;
		int                            GridId;
		bool                           bRebuildGrids;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.GridId = GridId;
	params.bRebuildGrids = bRebuildGrids;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Start                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 End                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FVector>         PathPoints                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavLocalGridManager::FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Start;
		struct FVector                 End;
		TArray<struct FVector>         PathPoints;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PathPoints != nullptr)
		*PathPoints = params.PathPoints;

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Locations                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            Radius2D                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Height                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRebuildGrids                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UNavLocalGridManager::AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<struct FVector>         Locations;
		int                            Radius2D;
		float                          Height;
		bool                           bRebuildGrids;
		int                            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Locations = Locations;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            Radius2D                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Height                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRebuildGrids                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UNavLocalGridManager::AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Location;
		int                            Radius2D;
		float                          Height;
		bool                           bRebuildGrids;
		int                            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          CapsuleRadius                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CapsuleHalfHeight              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Radius2D                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Height                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRebuildGrids                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UNavLocalGridManager::AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Location;
		float                          CapsuleRadius;
		float                          CapsuleHalfHeight;
		int                            Radius2D;
		float                          Height;
		bool                           bRebuildGrids;
		int                            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.CapsuleRadius = CapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Extent                         (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// int                            Radius2D                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Height                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRebuildGrids                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UNavLocalGridManager::AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Location;
		struct FVector                 Extent;
		struct FRotator                Rotation;
		int                            Radius2D;
		float                          Height;
		bool                           bRebuildGrids;
		int                            ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.Radius2D = Radius2D;
	params.Height = Height;
	params.bRebuildGrids = bRebuildGrids;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PawnAction.GetActionPriority
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EAIRequestPriority> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EAIRequestPriority> UPawnAction::GetActionPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");

	struct
	{
		TEnumAsByte<EAIRequestPriority> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PawnAction.Finish
// (FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EPawnActionResult> WithResult                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnAction::Finish(TEnumAsByte<EPawnActionResult> WithResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");

	struct
	{
		TEnumAsByte<EPawnActionResult> WithResult;
	} params;

	params.WithResult = WithResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnAction.CreateActionInstance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ActionClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPawnAction*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPawnAction* UPawnAction::CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  ActionClass;
		class UPawnAction*             ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ActionClass = ActionClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnAction_BlueprintBase::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionTick");

	struct
	{
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params;

	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnAction_BlueprintBase::ActionStart(class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionStart");

	struct
	{
		class APawn*                   ControlledPawn;
	} params;

	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnAction_BlueprintBase::ActionResume(class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionResume");

	struct
	{
		class APawn*                   ControlledPawn;
	} params;

	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnAction_BlueprintBase::ActionPause(class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionPause");

	struct
	{
		class APawn*                   ControlledPawn;
	} params;

	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EPawnActionResult> WithResult                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnAction_BlueprintBase::ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionFinished");

	struct
	{
		class APawn*                   ControlledPawn;
		TEnumAsByte<EPawnActionResult> WithResult;
	} params;

	params.ControlledPawn = ControlledPawn;
	params.WithResult = WithResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnActionsComponent.K2_PushAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPawnAction*             newAction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAIRequestPriority> Priority                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 Instigator                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPawnActionsComponent::K2_PushAction(class UPawnAction* newAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");

	struct
	{
		class UPawnAction*             newAction;
		TEnumAsByte<EAIRequestPriority> Priority;
		class UObject*                 Instigator;
		bool                           ReturnValue;
	} params;

	params.newAction = newAction;
	params.Priority = Priority;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPawnAction*             action                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAIRequestPriority> Priority                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPawnActionsComponent::K2_PerformAction(class APawn* Pawn, class UPawnAction* action, TEnumAsByte<EAIRequestPriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");

	struct
	{
		class APawn*                   Pawn;
		class UPawnAction*             action;
		TEnumAsByte<EAIRequestPriority> Priority;
		bool                           ReturnValue;
	} params;

	params.Pawn = Pawn;
	params.action = action;
	params.Priority = Priority;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPawnAction*             ActionToAbort                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EPawnActionAbortState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPawnActionAbortState> UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");

	struct
	{
		class UPawnAction*             ActionToAbort;
		TEnumAsByte<EPawnActionAbortState> ReturnValue;
	} params;

	params.ActionToAbort = ActionToAbort;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPawnAction*             ActionToAbort                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EPawnActionAbortState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPawnActionAbortState> UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");

	struct
	{
		class UPawnAction*             ActionToAbort;
		TEnumAsByte<EPawnActionAbortState> ReturnValue;
	} params;

	params.ActionToAbort = ActionToAbort;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewSensingInterval             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");

	struct
	{
		float                          NewSensingInterval;
	} params;

	params.NewSensingInterval = NewSensingInterval;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (FUNC_BlueprintAuthorityOnly, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewPeripheralVisionAngle       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");

	struct
	{
		float                          NewPeripheralVisionAngle;
	} params;

	params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// class APawn*                   Pawn                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class APawn*                   Instigator                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");

	struct
	{
		class APawn*                   Instigator;
		struct FVector                 Location;
		float                          Volume;
	} params;

	params.Instigator = Instigator;
	params.Location = Location;
	params.Volume = Volume;

	UObject::ProcessEvent(fn, &params);
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UPawnSensingComponent::GetPeripheralVisionCosine()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UPawnSensingComponent::GetPeripheralVisionAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
