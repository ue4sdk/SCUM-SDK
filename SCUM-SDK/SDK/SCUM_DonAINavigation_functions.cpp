// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_DonAINavigation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDoNNavigationQueryData Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBTTask_FlyTo::Pathfinding_OnFinish(const struct FDoNNavigationQueryData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish");

	struct
	{
		struct FDoNNavigationQueryData Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDonNavigationDynamicCollisionPayload Data                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBTTask_FlyTo::Pathfinding_OnDynamicCollisionAlert(const struct FDonNavigationDynamicCollisionPayload& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert");

	struct
	{
		struct FDonNavigationDynamicCollisionPayload Data;
	} params;

	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationHelper.DonNavigationManagerForActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ADonNavigationManager*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ADonNavigationManager* UDonNavigationHelper::DonNavigationManagerForActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationHelper.DonNavigationManagerForActor");

	struct
	{
		class AActor*                  Actor;
		class ADonNavigationManager*   ReturnValue;
	} params;

	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationHelper.DonNavigationManager
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ADonNavigationManager*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ADonNavigationManager* UDonNavigationHelper::DonNavigationManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationHelper.DonNavigationManager");

	struct
	{
		class UObject*                 WorldContextObject;
		class ADonNavigationManager*   ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVector>         PathSolution                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 Source                         (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Destination                    (CPF_Parm, CPF_IsPlainOldData)
// bool                           Reset                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDoNNavigationDebugParams DebugParams                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FColor                  LineColor                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ADonNavigationManager::VisualizeNAVResult(TArray<struct FVector> PathSolution, const struct FVector& Source, const struct FVector& Destination, bool Reset, const struct FDoNNavigationDebugParams& DebugParams, const struct FColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.VisualizeNAVResult");

	struct
	{
		TArray<struct FVector>         PathSolution;
		struct FVector                 Source;
		struct FVector                 Destination;
		bool                           Reset;
		struct FDoNNavigationDebugParams DebugParams;
		struct FColor                  LineColor;
	} params;

	params.PathSolution = PathSolution;
	params.Source = Source;
	params.Destination = Destination;
	params.Reset = Reset;
	params.DebugParams = DebugParams;
	params.LineColor = LineColor;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Listener                       (CPF_Parm, CPF_ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ADonNavigationManager::VisualizeDynamicCollisionListeners(const struct FScriptDelegate& Listener, const struct FDoNNavigationQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners");

	struct
	{
		struct FScriptDelegate         Listener;
		struct FDoNNavigationQueryData QueryData;
	} params;

	params.Listener = Listener;
	params.QueryData = QueryData;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ListenerToClear                (CPF_Parm, CPF_ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            VolumeIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADonNavigationManager::StopListeningToDynamicCollisionsForPathIndex(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData, int VolumeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex");

	struct
	{
		struct FScriptDelegate         ListenerToClear;
		struct FDoNNavigationQueryData QueryData;
		int                            VolumeIndex;
	} params;

	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;
	params.VolumeIndex = VolumeIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ListenerToClear                (CPF_Parm, CPF_ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ADonNavigationManager::StopListeningToDynamicCollisionsForPath(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath");

	struct
	{
		struct FScriptDelegate         ListenerToClear;
		struct FDoNNavigationQueryData QueryData;
	} params;

	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Destination                    (CPF_Parm, CPF_IsPlainOldData)
// struct FDoNNavigationQueryParams QueryParams                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FDoNNavigationDebugParams DebugParams                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         ResultHandlerDelegate          (CPF_Parm, CPF_ZeroConstructor)
// struct FScriptDelegate         DynamicCollisionListener       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, const struct FScriptDelegate& ResultHandlerDelegate, const struct FScriptDelegate& DynamicCollisionListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask");

	struct
	{
		class AActor*                  Actor;
		struct FVector                 Destination;
		struct FDoNNavigationQueryParams QueryParams;
		struct FDoNNavigationDebugParams DebugParams;
		struct FScriptDelegate         ResultHandlerDelegate;
		struct FScriptDelegate         DynamicCollisionListener;
		bool                           ReturnValue;
	} params;

	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;
	params.ResultHandlerDelegate = ResultHandlerDelegate;
	params.DynamicCollisionListener = DynamicCollisionListener;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FScriptDelegate         ResultHandler                  (CPF_Parm, CPF_ZeroConstructor)
// struct FName                   CustomCacheIdentifier          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bReplaceExistingTask           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDisableCacheUsage             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bReloadCollisionCache          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseCheapBoundsCollision       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BoundsScaleFactor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bForceSynchronousExecution     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDrawDebug                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::ScheduleDynamicCollisionUpdate(class UPrimitiveComponent* Mesh, const struct FScriptDelegate& ResultHandler, const struct FName& CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate");

	struct
	{
		class UPrimitiveComponent*     Mesh;
		struct FScriptDelegate         ResultHandler;
		struct FName                   CustomCacheIdentifier;
		bool                           bReplaceExistingTask;
		bool                           bDisableCacheUsage;
		bool                           bReloadCollisionCache;
		bool                           bUseCheapBoundsCollision;
		float                          BoundsScaleFactor;
		bool                           bForceSynchronousExecution;
		bool                           bDrawDebug;
		bool                           ReturnValue;
	} params;

	params.Mesh = Mesh;
	params.ResultHandler = ResultHandler;
	params.CustomCacheIdentifier = CustomCacheIdentifier;
	params.bReplaceExistingTask = bReplaceExistingTask;
	params.bDisableCacheUsage = bDisableCacheUsage;
	params.bReloadCollisionCache = bReloadCollisionCache;
	params.bUseCheapBoundsCollision = bUseCheapBoundsCollision;
	params.BoundsScaleFactor = BoundsScaleFactor;
	params.bForceSynchronousExecution = bForceSynchronousExecution;
	params.bDrawDebug = bDrawDebug;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          BoundsScaleFactor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent* Mesh, float BoundsScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld");

	struct
	{
		class UPrimitiveComponent*     Mesh;
		float                          BoundsScaleFactor;
		bool                           ReturnValue;
	} params;

	params.Mesh = Mesh;
	params.BoundsScaleFactor = BoundsScaleFactor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 DesiredLocation                (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::IsLocationWithinNavigableWorld(const struct FVector& DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld");

	struct
	{
		struct FVector                 DesiredLocation;
		bool                           ReturnValue;
	} params;

	params.DesiredLocation = DesiredLocation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// float                          LineTraceHeight                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::IsLocationBeneathLandscape(const struct FVector& Location, float LineTraceHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape");

	struct
	{
		struct FVector                 Location;
		float                          LineTraceHeight;
		bool                           ReturnValue;
	} params;

	params.Location = Location;
	params.LineTraceHeight = LineTraceHeight;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 Start                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 End                            (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bFindInitialOverlaps           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CollisionShapeInflation        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::IsDirectPathSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, bool bFindInitialOverlaps, float CollisionShapeInflation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathSweep");

	struct
	{
		class UPrimitiveComponent*     CollisionComponent;
		struct FVector                 Start;
		struct FVector                 End;
		struct FHitResult              OutHit;
		bool                           bFindInitialOverlaps;
		float                          CollisionShapeInflation;
		bool                           ReturnValue;
	} params;

	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	UObject::ProcessEvent(fn, &params);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 End                            (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bFindInitialOverlaps           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::IsDirectPathLineTrace(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> ActorsToIgnore, bool bFindInitialOverlaps, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace");

	struct
	{
		struct FVector                 Start;
		struct FVector                 End;
		struct FHitResult              OutHit;
		TArray<class AActor*>          ActorsToIgnore;
		bool                           bFindInitialOverlaps;
		bool                           ReturnValue;
	} params;

	params.Start = Start;
	params.End = End;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bFindInitialOverlaps = bFindInitialOverlaps;

	UObject::ProcessEvent(fn, &params);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 Start                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 End                            (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bFindInitialOverlaps           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CollisionShapeInflation        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::IsDirectPathLineSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, bool bFindInitialOverlaps, float CollisionShapeInflation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep");

	struct
	{
		class UPrimitiveComponent*     CollisionComponent;
		struct FVector                 Start;
		struct FVector                 End;
		struct FHitResult              OutHit;
		bool                           bFindInitialOverlaps;
		float                          CollisionShapeInflation;
		bool                           ReturnValue;
	} params;

	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	UObject::ProcessEvent(fn, &params);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.HasTask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::HasTask(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.HasTask");

	struct
	{
		class AActor*                  Actor;
		bool                           ReturnValue;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFoundValidResult              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxDesiredAltitude             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxZAngularDispacement         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MaxAttempts                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ADonNavigationManager::FindRandomPointFromActorInNavWorld(class AActor* Actor, float Distance, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts, bool* bFoundValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld");

	struct
	{
		class AActor*                  Actor;
		float                          Distance;
		bool                           bFoundValidResult;
		float                          MaxDesiredAltitude;
		float                          MaxZAngularDispacement;
		int                            MaxAttempts;
		struct FVector                 ReturnValue;
	} params;

	params.Actor = Actor;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	UObject::ProcessEvent(fn, &params);

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  NavigationActor                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_Parm, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFoundValidResult              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxDesiredAltitude             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxZAngularDispacement         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MaxAttempts                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ADonNavigationManager::FindRandomPointAroundOriginInNavWorld(class AActor* NavigationActor, const struct FVector& Origin, float Distance, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts, bool* bFoundValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld");

	struct
	{
		class AActor*                  NavigationActor;
		struct FVector                 Origin;
		float                          Distance;
		bool                           bFoundValidResult;
		float                          MaxDesiredAltitude;
		float                          MaxZAngularDispacement;
		int                            MaxAttempts;
		struct FVector                 ReturnValue;
	} params;

	params.NavigationActor = NavigationActor;
	params.Origin = Origin;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	UObject::ProcessEvent(fn, &params);

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Destination                    (CPF_Parm, CPF_IsPlainOldData)
// TArray<struct FVector>         PathSolutionRaw                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector>         PathSolutionOptimized          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FDoNNavigationQueryParams QueryParams                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FDoNNavigationDebugParams DebugParams                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::FindPathSolution_StressTesting(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting");

	struct
	{
		class AActor*                  Actor;
		struct FVector                 Destination;
		TArray<struct FVector>         PathSolutionRaw;
		TArray<struct FVector>         PathSolutionOptimized;
		struct FDoNNavigationQueryParams QueryParams;
		struct FDoNNavigationDebugParams DebugParams;
		bool                           ReturnValue;
	} params;

	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;

	UObject::ProcessEvent(fn, &params);

	if (PathSolutionRaw != nullptr)
		*PathSolutionRaw = params.PathSolutionRaw;
	if (PathSolutionOptimized != nullptr)
		*PathSolutionOptimized = params.PathSolutionOptimized;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ADonNavigationManager::Debug_ToggleWorldBoundaryInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     MeshOrPrimitive                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bDrawPersistent                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADonNavigationManager::Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile");

	struct
	{
		class UPrimitiveComponent*     MeshOrPrimitive;
		bool                           bDrawPersistent;
		float                          Duration;
	} params;

	params.MeshOrPrimitive = MeshOrPrimitive;
	params.bDrawPersistent = bDrawPersistent;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// int                            CubeSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DrawPersistentLines            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LineThickness                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoInitializeVolumes         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADonNavigationManager::Debug_DrawVolumesAroundPoint(const struct FVector& Location, int CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint");

	struct
	{
		struct FVector                 Location;
		int                            CubeSize;
		bool                           DrawPersistentLines;
		float                          Duration;
		float                          LineThickness;
		bool                           bAutoInitializeVolumes;
	} params;

	params.Location = Location;
	params.CubeSize = CubeSize;
	params.DrawPersistentLines = DrawPersistentLines;
	params.Duration = Duration;
	params.LineThickness = LineThickness;
	params.bAutoInitializeVolumes = bAutoInitializeVolumes;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          LineThickness                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADonNavigationManager::Debug_DrawAllVolumes(float LineThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes");

	struct
	{
		float                          LineThickness;
	} params;

	params.LineThickness = LineThickness;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ADonNavigationManager::Debug_ClearAllVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.ConstructBuilder
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ADonNavigationManager::ConstructBuilder()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ConstructBuilder");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 DesiredLocation                (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ADonNavigationManager::ClampLocationToNavigableWorld(const struct FVector& DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld");

	struct
	{
		struct FVector                 DesiredLocation;
		struct FVector                 ReturnValue;
	} params;

	params.DesiredLocation = DesiredLocation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.CanNavigate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ADonNavigationManager::CanNavigate(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.CanNavigate");

	struct
	{
		struct FVector                 Location;
		bool                           ReturnValue;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADonNavigationManager::AbortPathfindingTask(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.AbortPathfindingTask");

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigator.OnNextSegment
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 NextPoint                      (CPF_Parm, CPF_IsPlainOldData)

void UDonNavigator::OnNextSegment(const struct FVector& NextPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.OnNextSegment");

	struct
	{
		struct FVector                 NextPoint;
	} params;

	params.NextPoint = NextPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigator.OnLocomotionEnd
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bLocomotionSuccess             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDonNavigator::OnLocomotionEnd(bool bLocomotionSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.OnLocomotionEnd");

	struct
	{
		bool                           bLocomotionSuccess;
	} params;

	params.bLocomotionSuccess = bLocomotionSuccess;

	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigator.OnLocomotionBegin
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDonNavigator::OnLocomotionBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.OnLocomotionBegin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigator.OnLocomotionAbort
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDonNavigator::OnLocomotionAbort()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.OnLocomotionAbort");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DonAINavigation.DonNavigator.AddMovementInputCustom
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 WorldDirection                 (CPF_Parm, CPF_IsPlainOldData)
// float                          ScaleValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDonNavigator::AddMovementInputCustom(const struct FVector& WorldDirection, float ScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.AddMovementInputCustom");

	struct
	{
		struct FVector                 WorldDirection;
		float                          ScaleValue;
	} params;

	params.WorldDirection = WorldDirection;
	params.ScaleValue = ScaleValue;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
