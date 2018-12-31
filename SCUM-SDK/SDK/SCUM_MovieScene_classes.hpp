#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MovieScene_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieScene.MovieSceneSignedObject
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                // 0x0028(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0090 (0x00E0 - 0x0050)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              // 0x0050(0x0002) (CPF_Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FMovieSceneEasingSettings                   Easing;                                                   // 0x0058(0x0038) (CPF_Edit)
	struct FMovieSceneFrameRange                       SectionRange;                                             // 0x0090(0x0010) (CPF_Edit)
	struct FFrameNumber                                PreRollFrames;                                            // 0x00A0(0x0004) (CPF_Edit)
	struct FFrameNumber                                PostRollFrames;                                           // 0x00A4(0x0004) (CPF_Edit)
	int                                                RowIndex;                                                 // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OverlapPriority;                                          // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsActive : 1;                                            // 0x00B0(0x0001) (CPF_Edit)
	unsigned char                                      bIsLocked : 1;                                            // 0x00B0(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PrerollTime;                                              // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PostrollTime;                                             // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bIsInfinite : 1;                                          // 0x00C4(0x0001) (CPF_Deprecated)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	bool                                               bSupportsInfiniteRange;                                   // 0x00C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FOptionalMovieSceneBlendType                BlendType;                                                // 0x00C9(0x0002)
	unsigned char                                      UnknownData03[0x15];                                      // 0x00CB(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0008 (0x0058 - 0x0050)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              // 0x0050(0x0004) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x0058 - 0x0058)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x02F8 (0x0348 - 0x0050)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate               PrecompiledEvaluationTemplate;                            // 0x0050(0x02F0)
	EMovieSceneCompletionMode                          DefaultCompletionMode;                                    // 0x0340(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bParentContextsAreSignificant;                            // 0x0341(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneSequence");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x07B8 (0x07E0 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0028(0x0348) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x0370(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayReverse;                                            // 0x0380(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x0390(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x03A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x03B0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TEnumAsByte<EMovieScenePlayerStatus>               Status;                                                   // 0x03C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	unsigned char                                      bReversePlayback : 1;                                     // 0x03C4(0x0001)
	unsigned char                                      UnknownData02[0xB];                                       // 0x03C5(0x000B) MISSED OFFSET
	class UMovieSceneSequence*                         Sequence;                                                 // 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FFrameNumber                                StartTime;                                                // 0x03D8(0x0004)
	int                                                DurationFrames;                                           // 0x03DC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentNumLoops;                                          // 0x03E0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x03E4(0x0014) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x03F8(0x0040)
	unsigned char                                      UnknownData04[0x3A8];                                     // 0x0438(0x03A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}


	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int StartFrame, int Duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void PlayToSeconds(float TimeInSeconds);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	void JumpToPosition(float NewPlaybackPosition);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};


// Class MovieScene.MovieScene
// 0x0080 (0x00D0 - 0x0050)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               // 0x0050(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                             // 0x0060(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           // 0x0070(0x0010) (CPF_ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             // 0x0080(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class UMovieSceneTrack*                            CameraCutTrack;                                           // 0x0090(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FMovieSceneFrameRange                       SelectionRange;                                           // 0x0098(0x0010)
	struct FMovieSceneFrameRange                       PlaybackRange;                                            // 0x00A8(0x0010)
	struct FFrameRate                                  TickResolution;                                           // 0x00B8(0x0008)
	struct FFrameRate                                  DisplayRate;                                              // 0x00C0(0x0008)
	EMovieSceneEvaluationType                          EvaluationType;                                           // 0x00C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EUpdateClockSource                                 ClockSource;                                              // 0x00C9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieScene");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (0x0098 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneBindingOverridesInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EMovieSceneBuiltInEasing                           Type;                                                     // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0010 (0x0038 - 0x0028)
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UCurveFloat*                                 Curve;                                                    // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}

};


// Class MovieScene.MovieSceneEasingFunction
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}


	float OnEvaluate(float Interp);
};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             // 0x0030(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        // 0x0040(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<struct FString>                             ChildObjectBindingStrings;                                // 0x0050(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

};


// Class MovieScene.MovieSceneKeyProxy
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneKeyProxy : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	bool                                               bHighPassFilter;                                          // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  SectionArray;                                             // 0x0060(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneSegmentCompilerTestTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSegmentCompilerTestSection
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneSegmentCompilerTestSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSubSection
// 0x0070 (0x0150 - 0x00E0)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                               // 0x00E0(0x0018) (CPF_Edit)
	float                                              StartOffset;                                              // 0x00F8(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              TimeScale;                                                // 0x00FC(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UMovieSceneSequence*                         SubSequence;                                              // 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                            // 0x0110(0x001C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FString                                     TargetSequenceName;                                       // 0x0130(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FDirectoryPath                              TargetPathToRecordTo;                                     // 0x0140(0x0010) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSubTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
