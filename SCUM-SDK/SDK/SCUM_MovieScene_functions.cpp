// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MovieScene_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieScene.MovieSceneSequencePlayer.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMovieSceneSequencePlayer::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          StartTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	struct
	{
		float                          StartTime;
		float                          Duration;
	} params;

	params.StartTime = StartTime;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	struct
	{
		float                          PlayRate;
	} params;

	params.PlayRate = PlayRate;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewStartTime                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewEndTime                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange");

	struct
	{
		float                          NewStartTime;
		float                          NewEndTime;
	} params;

	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	struct
	{
		float                          NewPlaybackPosition;
	} params;

	params.NewPlaybackPosition = NewPlaybackPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFrameRate              FrameRate                      (CPF_Parm)

void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	struct
	{
		struct FFrameRate              FrameRate;
	} params;

	params.FrameRate = FrameRate;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            StartFrame                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Duration                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::SetFrameRange(int StartFrame, int Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	struct
	{
		int                            StartFrame;
		int                            Duration;
	} params;

	params.StartFrame = StartFrame;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInDisableCameraCuts           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	struct
	{
		bool                           bInDisableCameraCuts;
	} params;

	params.bInDisableCameraCuts = bInDisableCameraCuts;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	struct
	{
		float                          TimeInSeconds;
	} params;

	params.TimeInSeconds = TimeInSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (CPF_Parm)

void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	struct
	{
		struct FFrameTime              NewPosition;
	} params;

	params.NewPosition = NewPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.Scrub
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMovieSceneSequencePlayer::Scrub()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	struct
	{
		float                          TimeInSeconds;
	} params;

	params.TimeInSeconds = TimeInSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (CPF_Parm)

void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	struct
	{
		struct FFrameTime              NewPosition;
	} params;

	params.NewPosition = NewPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMovieSceneSequencePlayer::PlayReverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumLoops                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	struct
	{
		int                            NumLoops;
	} params;

	params.NumLoops = NumLoops;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMovieSceneSequencePlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMovieSceneSequencePlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          TimeInSeconds                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	struct
	{
		float                          TimeInSeconds;
	} params;

	params.TimeInSeconds = TimeInSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToPosition");

	struct
	{
		float                          NewPlaybackPosition;
	} params;

	params.NewPlaybackPosition = NewPlaybackPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFrameTime              NewPosition                    (CPF_Parm)

void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	struct
	{
		struct FFrameTime              NewPosition;
	} params;

	params.NewPosition = NewPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.IsReversed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMovieSceneSequencePlayer::IsReversed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMovieSceneSequencePlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMovieSceneSequencePlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	struct
	{
		struct FQualifiedFrameTime     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMovieSceneSequencePlayer::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetLength");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FFrameRate              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	struct
	{
		struct FFrameRate              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMovieSceneSequencePlayer::GetFrameDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	struct
	{
		struct FQualifiedFrameTime     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	struct
	{
		struct FQualifiedFrameTime     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FQualifiedFrameTime     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	struct
	{
		struct FQualifiedFrameTime     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID ObjectBinding                  (CPF_Parm)
// TArray<class UObject*>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	struct
	{
		struct FMovieSceneObjectBindingID ObjectBinding;
		TArray<class UObject*>         ReturnValue;
	} params;

	params.ObjectBinding = ObjectBinding;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Interp                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMovieSceneEasingFunction::OnEvaluate(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	struct
	{
		float                          Interp;
		float                          ReturnValue;
	} params;

	params.Interp = Interp;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
