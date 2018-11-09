// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_GeometryCache_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UGeometryCacheComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");

	struct
	{
		class UGeometryCacheComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Time                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInIsRunning                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInBackwards                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInIsLooping                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.TickAtThisTime");

	struct
	{
		float                          Time;
		bool                           bInIsRunning;
		bool                           bInBackwards;
		bool                           bInIsLooping;
	} params;

	params.Time = Time;
	params.bInIsRunning = bInIsRunning;
	params.bInBackwards = bInBackwards;
	params.bInIsLooping = bInIsLooping;

	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGeometryCacheComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewStartTimeOffset             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset");

	struct
	{
		float                          NewStartTimeOffset;
	} params;

	params.NewStartTimeOffset = NewStartTimeOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewPlaybackSpeed               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");

	struct
	{
		float                          NewPlaybackSpeed;
	} params;

	params.NewPlaybackSpeed = NewPlaybackSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.SetLooping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewLooping                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGeometryCacheComponent::SetLooping(bool bNewLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetLooping");

	struct
	{
		bool                           bNewLooping;
	} params;

	params.bNewLooping = bNewLooping;

	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UGeometryCache*          NewGeomCache                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetGeometryCache");

	struct
	{
		class UGeometryCache*          NewGeomCache;
		bool                           ReturnValue;
	} params;

	params.NewGeomCache = NewGeomCache;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGeometryCacheComponent::PlayReversedFromEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.PlayReversed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGeometryCacheComponent::PlayReversed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.PlayFromStart
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGeometryCacheComponent::PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayFromStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGeometryCacheComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Play");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.Pause
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGeometryCacheComponent::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Pause");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGeometryCacheComponent::IsPlayingReversed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGeometryCacheComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsLooping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGeometryCacheComponent::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsLooping");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGeometryCacheComponent::GetStartTimeOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGeometryCacheComponent::GetPlaybackSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGeometryCacheComponent::GetPlaybackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UGeometryCacheComponent::GetNumberOfFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGeometryCacheComponent::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetDuration");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UGeometryCacheComponent::GetAnimationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetAnimationTime");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGeometryCacheMeshData  MeshData                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          SampleTime                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");

	struct
	{
		struct FGeometryCacheMeshData  MeshData;
		float                          SampleTime;
	} params;

	params.MeshData = MeshData;
	params.SampleTime = SampleTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGeometryCacheMeshData  NewMeshData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh");

	struct
	{
		struct FGeometryCacheMeshData  NewMeshData;
	} params;

	params.NewMeshData = NewMeshData;

	UObject::ProcessEvent(fn, &params);
}


// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGeometryCacheMeshData  NewMeshData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh");

	struct
	{
		struct FGeometryCacheMeshData  NewMeshData;
	} params;

	params.NewMeshData = NewMeshData;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
