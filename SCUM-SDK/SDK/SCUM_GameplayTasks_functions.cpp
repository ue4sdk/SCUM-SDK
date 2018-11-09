// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_GameplayTasks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayTasks.GameplayTask.ReadyForActivation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayTask::ReadyForActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.ReadyForActivation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTask.EndTask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayTask::EndTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.EndTask");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UClass*>          ResourceClasses                (CPF_Parm, CPF_ZeroConstructor)
// unsigned char                  Priority                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UGameplayTask_ClaimResource* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources");

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner;
		TArray<class UClass*>          ResourceClasses;
		unsigned char                  Priority;
		struct FName                   TaskInstanceName;
		class UGameplayTask_ClaimResource* ReturnValue;
	} params;

	params.InTaskOwner = InTaskOwner;
	params.ResourceClasses = ResourceClasses;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ResourceClass                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  Priority                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   TaskInstanceName               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UGameplayTask_ClaimResource* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource");

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner;
		class UClass*                  ResourceClass;
		unsigned char                  Priority;
		struct FName                   TaskInstanceName;
		class UGameplayTask_ClaimResource* ReturnValue;
	} params;

	params.InTaskOwner = InTaskOwner;
	params.ResourceClass = ResourceClass;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 SpawnLocation                  (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                SpawnRotation                  (CPF_Parm, CPF_IsPlainOldData)
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bSpawnOnlyOnAuthority          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UGameplayTask_SpawnActor* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor");

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		struct FVector                 SpawnLocation;
		struct FRotator                SpawnRotation;
		class UClass*                  Class;
		bool                           bSpawnOnlyOnAuthority;
		class UGameplayTask_SpawnActor* ReturnValue;
	} params;

	params.TaskOwner = TaskOwner;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.Class = Class;
	params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  SpawnedActor;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor");

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  SpawnedActor;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  Priority                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UGameplayTask_WaitDelay* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay");

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		float                          Time;
		unsigned char                  Priority;
		class UGameplayTask_WaitDelay* ReturnValue;
	} params;

	params.TaskOwner = TaskOwner;
	params.Time = Time;
	params.Priority = Priority;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UGameplayTasksComponent::OnRep_SimulatedTasks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UGameplayTask*           Task                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  Priority                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UClass*>          AdditionalRequiredResources    (CPF_Parm, CPF_ZeroConstructor)
// TArray<class UClass*>          AdditionalClaimedResources     (CPF_Parm, CPF_ZeroConstructor)
// EGameplayTaskRunResult         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask");

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		class UGameplayTask*           Task;
		unsigned char                  Priority;
		TArray<class UClass*>          AdditionalRequiredResources;
		TArray<class UClass*>          AdditionalClaimedResources;
		EGameplayTaskRunResult         ReturnValue;
	} params;

	params.TaskOwner = TaskOwner;
	params.Task = Task;
	params.Priority = Priority;
	params.AdditionalRequiredResources = AdditionalRequiredResources;
	params.AdditionalClaimedResources = AdditionalClaimedResources;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
