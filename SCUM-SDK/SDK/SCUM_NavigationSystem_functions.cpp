// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_NavigationSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NavigationSystem.NavigationPath.IsValid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationPath::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsStringPulled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationPath::IsStringPulled()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsPartial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationPath::IsPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathLength
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UNavigationPath::GetPathLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathCost
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UNavigationPath::GetPathCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetDebugString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UNavigationPath::GetDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<ENavigationOptionFlag> DoRecalculation                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	struct
	{
		TEnumAsByte<ENavigationOptionFlag> DoRecalculation;
	} params;

	params.DoRecalculation = DoRecalculation;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldDrawDebugData           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            PathColor                      (CPF_Parm, CPF_IsPlainOldData)

void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	struct
	{
		bool                           bShouldDrawDebugData;
		struct FLinearColor            PathColor;
	} params;

	params.bShouldDrawDebugData = bShouldDrawDebugData;
	params.PathColor = PathColor;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Invoker                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor* Invoker)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	struct
	{
		class AActor*                  Invoker;
	} params;

	params.Invoker = Invoker;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AController*             Controller                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Goal                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UNavigationSystemV1::SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");

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


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AController*             Controller                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Goal                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavigationSystemV1::SimpleMoveToActor(class AController* Controller, class AActor* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");

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


// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MaxNumberOfJobs                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	struct
	{
		int                            MaxNumberOfJobs;
	} params;

	params.MaxNumberOfJobs = MaxNumberOfJobs;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ENavDataGatheringModeConfig    NewMode                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	struct
	{
		ENavDataGatheringModeConfig    NewMode;
	} params;

	params.NewMode = NewMode;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Invoker                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileGenerationRadius           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TileRemovalRadius              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  NavigationDataToUpdate         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavigationSystemV1::RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius, class UClass* NavigationDataToUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	struct
	{
		class AActor*                  Invoker;
		float                          TileGenerationRadius;
		float                          TileRemovalRadius;
		class UClass*                  NavigationDataToUpdate;
	} params;

	params.Invoker = Invoker;
	params.TileGenerationRadius = TileGenerationRadius;
	params.TileRemovalRadius = TileRemovalRadius;
	params.NavigationDataToUpdate = NavigationDataToUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 QueryExtent                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UNavigationSystemV1::ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Point;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		struct FVector                 QueryExtent;
		struct FVector                 ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ANavMeshBoundsVolume*    NavVolume                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	struct
	{
		class ANavMeshBoundsVolume*    NavVolume;
	} params;

	params.NavVolume = NavVolume;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 RayStart                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 RayEnd                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             Querier                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationSystemV1::NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AController* Querier, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 RayStart;
		struct FVector                 RayEnd;
		struct FVector                 HitLocation;
		class UClass*                  FilterClass;
		class AController*             Querier;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.RayStart = RayStart;
	params.RayEnd = RayEnd;
	params.FilterClass = FilterClass;
	params.Querier = Querier;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Point                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ProjectedLocation              (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 QueryExtent                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationSystemV1::K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Point;
		struct FVector                 ProjectedLocation;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		struct FVector                 QueryExtent;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 RandomLocation                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Origin;
		struct FVector                 RandomLocation;
		float                          Radius;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 RandomLocation                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Origin;
		struct FVector                 RandomLocation;
		float                          Radius;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UNavigationSystemV1::IsNavigationBeingBuilt(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UNavigationSystemV1::GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Origin;
		float                          Radius;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		struct FVector                 ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 Origin;
		float                          Radius;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		struct FVector                 ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathLength
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 PathStart                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 PathEnd                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          PathLength                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ENavigationQueryResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ENavigationQueryResult> UNavigationSystemV1::GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 PathStart;
		struct FVector                 PathEnd;
		float                          PathLength;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		TEnumAsByte<ENavigationQueryResult> ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PathLength != nullptr)
		*PathLength = params.PathLength;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathCost
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 PathStart                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 PathEnd                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          PathCost                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ANavigationData*         NavData                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ENavigationQueryResult> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ENavigationQueryResult> UNavigationSystemV1::GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 PathStart;
		struct FVector                 PathEnd;
		float                          PathCost;
		class ANavigationData*         NavData;
		class UClass*                  FilterClass;
		TEnumAsByte<ENavigationQueryResult> ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PathCost != nullptr)
		*PathCost = params.PathCost;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNavigationSystemV1*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	struct
	{
		class UObject*                 WorldContextObject;
		class UNavigationSystemV1*     ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 PathStart                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 PathEnd                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AActor*                  PathfindingContext             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNavigationPath*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 PathStart;
		struct FVector                 PathEnd;
		class AActor*                  PathfindingContext;
		class UClass*                  FilterClass;
		class UNavigationPath*         ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 PathStart                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AActor*                  GoalActor                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TetherDistance                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  PathfindingContext             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  FilterClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNavigationPath*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 PathStart;
		class AActor*                  GoalActor;
		float                          TetherDistance;
		class AActor*                  PathfindingContext;
		class UClass*                  FilterClass;
		class UNavigationPath*         ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.GoalActor = GoalActor;
	params.TetherDistance = TetherDistance;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bRelevant                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	struct
	{
		bool                           bRelevant;
	} params;

	params.bRelevant = bRelevant;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavModifierComponent.SetAreaClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  NewAreaClass                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNavModifierComponent::SetAreaClass(class UClass* NewAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	struct
	{
		class UClass*                  NewAreaClass;
	} params;

	params.NewAreaClass = NewAreaClass;

	UObject::ProcessEvent(fn, &params);
}


// Function NavigationSystem.NavModifierVolume.SetAreaClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  NewAreaClass                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ANavModifierVolume::SetAreaClass(class UClass* NewAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	struct
	{
		class UClass*                  NewAreaClass;
	} params;

	params.NewAreaClass = NewAreaClass;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
