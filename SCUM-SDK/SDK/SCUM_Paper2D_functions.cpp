// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Paper2D_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperFlipbook::IsValidKeyFrameIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	struct
	{
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetTotalDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UPaperFlipbook::GetTotalDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bClampToEnds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	struct
	{
		float                          Time;
		bool                           bClampToEnds;
		class UPaperSprite*            ReturnValue;
	} params;

	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            FrameIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int FrameIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	struct
	{
		int                            FrameIndex;
		class UPaperSprite*            ReturnValue;
	} params;

	params.FrameIndex = FrameIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumKeyFrames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPaperFlipbook::GetNumKeyFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumFrames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPaperFlipbook::GetNumFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bClampToEnds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	struct
	{
		float                          Time;
		bool                           bClampToEnds;
		int                            ReturnValue;
	} params;

	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPaperFlipbookComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_Parm, CPF_IsPlainOldData)

void UPaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.SetPlayRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewRate                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperFlipbookComponent::SetPlayRate(float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	struct
	{
		float                          NewRate;
	} params;

	params.NewRate = NewRate;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NewFramePosition               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFireEvents                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	struct
	{
		int                            NewFramePosition;
		bool                           bFireEvents;
	} params;

	params.NewFramePosition = NewFramePosition;
	params.bFireEvents = bFireEvents;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewPosition                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFireEvents                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	struct
	{
		float                          NewPosition;
		bool                           bFireEvents;
	} params;

	params.NewPosition = NewPosition;
	params.bFireEvents = bFireEvents;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.SetNewTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewTime                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperFlipbookComponent::SetNewTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	struct
	{
		float                          NewTime;
	} params;

	params.NewTime = NewTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.SetLooping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewLooping                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	struct
	{
		bool                           bNewLooping;
	} params;

	params.bNewLooping = bNewLooping;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.SetFlipbook
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPaperFlipbook*          NewFlipbook                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	struct
	{
		class UPaperFlipbook*          NewFlipbook;
		bool                           ReturnValue;
	} params;

	params.NewFlipbook = NewFlipbook;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPaperFlipbookComponent::ReverseFromEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.Reverse
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPaperFlipbookComponent::Reverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.PlayFromStart
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPaperFlipbookComponent::PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPaperFlipbookComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPaperFlipbook*          OldFlipbook                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	struct
	{
		class UPaperFlipbook*          OldFlipbook;
	} params;

	params.OldFlipbook = OldFlipbook;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperFlipbookComponent.IsReversing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperFlipbookComponent::IsReversing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperFlipbookComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsLooping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperFlipbookComponent::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlayRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UPaperFlipbookComponent::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPaperFlipbookComponent::GetPlaybackPositionInFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UPaperFlipbookComponent::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPaperFlipbookComponent::GetFlipbookLengthInFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UPaperFlipbookComponent::GetFlipbookLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UPaperFlipbookComponent::GetFlipbookFramerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbook
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPaperFlipbook*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	struct
	{
		class UPaperFlipbook*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              NewInstanceTransform           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMarkRenderStateDirty          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	struct
	{
		int                            InstanceIndex;
		struct FTransform              NewInstanceTransform;
		bool                           bWorldSpace;
		bool                           bMarkRenderStateDirty;
		bool                           bTeleport;
		bool                           ReturnValue;
	} params;

	params.InstanceIndex = InstanceIndex;
	params.NewInstanceTransform = NewInstanceTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
// (FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            NewInstanceColor               (CPF_Parm, CPF_IsPlainOldData)
// bool                           bMarkRenderStateDirty          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	struct
	{
		int                            InstanceIndex;
		struct FLinearColor            NewInstanceColor;
		bool                           bMarkRenderStateDirty;
		bool                           ReturnValue;
	} params;

	params.InstanceIndex = InstanceIndex;
	params.NewInstanceColor = NewInstanceColor;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 WorldSpaceSortAxis             (CPF_Parm, CPF_IsPlainOldData)

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	struct
	{
		struct FVector                 WorldSpaceSortAxis;
	} params;

	params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperGroupedSpriteComponent::RemoveInstance(int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	struct
	{
		int                            InstanceIndex;
		bool                           ReturnValue;
	} params;

	params.InstanceIndex = InstanceIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            InstanceIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              OutInstanceTransform           (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	struct
	{
		int                            InstanceIndex;
		struct FTransform              OutInstanceTransform;
		bool                           bWorldSpace;
		bool                           ReturnValue;
	} params;

	params.InstanceIndex = InstanceIndex;
	params.bWorldSpace = bWorldSpace;

	UObject::ProcessEvent(fn, &params);

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = params.OutInstanceTransform;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPaperGroupedSpriteComponent::GetInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPaperGroupedSpriteComponent::ClearInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FTransform              Transform                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UPaperSprite*            Sprite                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	struct
	{
		struct FTransform              Transform;
		class UPaperSprite*            Sprite;
		bool                           bWorldSpace;
		struct FLinearColor            Color;
		int                            ReturnValue;
	} params;

	params.Transform = Transform;
	params.Sprite = Sprite;
	params.bWorldSpace = bWorldSpace;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPaperSprite*            Sprite                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite");

	struct
	{
		class UPaperSprite*            Sprite;
		int                            Width;
		int                            Height;
		struct FSlateBrush             ReturnValue;
	} params;

	params.Sprite = Sprite;
	params.Width = Width;
	params.Height = Height;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_Parm, CPF_IsPlainOldData)

void UPaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperSpriteComponent.SetSprite
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPaperSprite*            NewSprite                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	struct
	{
		class UPaperSprite*            NewSprite;
		bool                           ReturnValue;
	} params;

	params.NewSprite = NewSprite;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.GetSprite
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UPaperSprite*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPaperSprite* UPaperSpriteComponent::GetSprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	struct
	{
		class UPaperSprite*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperTerrainComponent.SetTerrainColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_Parm, CPF_IsPlainOldData)

void UPaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_Parm, CPF_IsPlainOldData)

void UPaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	struct
	{
		struct FLinearColor            NewColor;
	} params;

	params.NewColor = NewColor;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.SetTileMap
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPaperTileMap*           NewTileMap                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	struct
	{
		class UPaperTileMap*           NewTileMap;
		bool                           ReturnValue;
	} params;

	params.NewTileMap = NewTileMap;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.SetTile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Y                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Layer                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPaperTileInfo          NewValue                       (CPF_Parm)

void UPaperTileMapComponent::SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	struct
	{
		int                            X;
		int                            Y;
		int                            Layer;
		struct FPaperTileInfo          NewValue;
	} params;

	params.X = X;
	params.Y = Y;
	params.Layer = Layer;
	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.SetLayerColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (CPF_Parm, CPF_IsPlainOldData)
// int                            Layer                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	struct
	{
		struct FLinearColor            NewColor;
		int                            Layer;
	} params;

	params.NewColor = NewColor;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.SetLayerCollision
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Layer                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bHasCollision                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bOverrideThickness             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CustomThickness                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bOverrideOffset                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CustomOffset                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRebuildCollision              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperTileMapComponent::SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	struct
	{
		int                            Layer;
		bool                           bHasCollision;
		bool                           bOverrideThickness;
		float                          CustomThickness;
		bool                           bOverrideOffset;
		float                          CustomOffset;
		bool                           bRebuildCollision;
	} params;

	params.Layer = Layer;
	params.bHasCollision = bHasCollision;
	params.bOverrideThickness = bOverrideThickness;
	params.CustomThickness = CustomThickness;
	params.bOverrideOffset = bOverrideOffset;
	params.CustomOffset = CustomOffset;
	params.bRebuildCollision = bRebuildCollision;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Thickness                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRebuildCollision              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	struct
	{
		float                          Thickness;
		bool                           bRebuildCollision;
	} params;

	params.Thickness = Thickness;
	params.bRebuildCollision = bRebuildCollision;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.ResizeMap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NewWidthInTiles                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NewHeightInTiles               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperTileMapComponent::ResizeMap(int NewWidthInTiles, int NewHeightInTiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	struct
	{
		int                            NewWidthInTiles;
		int                            NewHeightInTiles;
	} params;

	params.NewWidthInTiles = NewWidthInTiles;
	params.NewHeightInTiles = NewHeightInTiles;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.RebuildCollision
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPaperTileMapComponent::RebuildCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.OwnsTileMap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPaperTileMapComponent::OwnsTileMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPaperTileMapComponent::MakeTileMapEditable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.GetTilePolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TileX                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TileY                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Points                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            LayerIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperTileMapComponent::GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	struct
	{
		int                            TileX;
		int                            TileY;
		TArray<struct FVector>         Points;
		int                            LayerIndex;
		bool                           bWorldSpace;
	} params;

	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	UObject::ProcessEvent(fn, &params);

	if (Points != nullptr)
		*Points = params.Points;
}


// Function Paper2D.PaperTileMapComponent.GetTileMapColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TileX                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TileY                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            LayerIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	struct
	{
		int                            TileX;
		int                            TileY;
		int                            LayerIndex;
		bool                           bWorldSpace;
		struct FVector                 ReturnValue;
	} params;

	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TileX                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TileY                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            LayerIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWorldSpace                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	struct
	{
		int                            TileX;
		int                            TileY;
		int                            LayerIndex;
		bool                           bWorldSpace;
		struct FVector                 ReturnValue;
	} params;

	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Y                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Layer                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int X, int Y, int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	struct
	{
		int                            X;
		int                            Y;
		int                            Layer;
		struct FPaperTileInfo          ReturnValue;
	} params;

	params.X = X;
	params.Y = Y;
	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetMapSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            MapWidth                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MapHeight                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumLayers                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperTileMapComponent::GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	struct
	{
		int                            MapWidth;
		int                            MapHeight;
		int                            NumLayers;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MapWidth != nullptr)
		*MapWidth = params.MapWidth;
	if (MapHeight != nullptr)
		*MapHeight = params.MapHeight;
	if (NumLayers != nullptr)
		*NumLayers = params.NumLayers;
}


// Function Paper2D.PaperTileMapComponent.GetLayerColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Layer                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	struct
	{
		int                            Layer;
		struct FLinearColor            ReturnValue;
	} params;

	params.Layer = Layer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            MapWidth                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MapHeight                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TileWidth                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TileHeight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PixelsPerUnrealUnit            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bCreateLayer                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPaperTileMapComponent::CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	struct
	{
		int                            MapWidth;
		int                            MapHeight;
		int                            TileWidth;
		int                            TileHeight;
		float                          PixelsPerUnrealUnit;
		bool                           bCreateLayer;
	} params;

	params.MapWidth = MapWidth;
	params.MapHeight = MapHeight;
	params.TileWidth = TileWidth;
	params.TileHeight = TileHeight;
	params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	params.bCreateLayer = bCreateLayer;

	UObject::ProcessEvent(fn, &params);
}


// Function Paper2D.PaperTileMapComponent.AddNewLayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPaperTileLayer*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	struct
	{
		class UPaperTileLayer*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.MakeTile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            TileIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPaperTileSet*           TileSet                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFlipH                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFlipV                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFlipD                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.MakeTile");

	struct
	{
		int                            TileIndex;
		class UPaperTileSet*           TileSet;
		bool                           bFlipH;
		bool                           bFlipV;
		bool                           bFlipD;
		struct FPaperTileInfo          ReturnValue;
	} params;

	params.TileIndex = TileIndex;
	params.TileSet = TileSet;
	params.bFlipH = bFlipH;
	params.bFlipV = bFlipV;
	params.bFlipD = bFlipD;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPaperTileInfo          Tile                           (CPF_Parm)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UTileMapBlueprintLibrary::GetTileUserData(const struct FPaperTileInfo& Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData");

	struct
	{
		struct FPaperTileInfo          Tile;
		struct FName                   ReturnValue;
	} params;

	params.Tile = Tile;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPaperTileInfo          Tile                           (CPF_Parm)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UTileMapBlueprintLibrary::GetTileTransform(const struct FPaperTileInfo& Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform");

	struct
	{
		struct FPaperTileInfo          Tile;
		struct FTransform              ReturnValue;
	} params;

	params.Tile = Tile;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.BreakTile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPaperTileInfo          Tile                           (CPF_Parm)
// int                            TileIndex                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPaperTileSet*           TileSet                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFlipH                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFlipV                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFlipD                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTileMapBlueprintLibrary::BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.BreakTile");

	struct
	{
		struct FPaperTileInfo          Tile;
		int                            TileIndex;
		class UPaperTileSet*           TileSet;
		bool                           bFlipH;
		bool                           bFlipV;
		bool                           bFlipD;
	} params;

	params.Tile = Tile;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TileIndex != nullptr)
		*TileIndex = params.TileIndex;
	if (TileSet != nullptr)
		*TileSet = params.TileSet;
	if (bFlipH != nullptr)
		*bFlipH = params.bFlipH;
	if (bFlipV != nullptr)
		*bFlipV = params.bFlipV;
	if (bFlipD != nullptr)
		*bFlipD = params.bFlipD;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
