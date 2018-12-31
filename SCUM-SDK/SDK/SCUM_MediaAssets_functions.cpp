// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MediaAssets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaAssets.MediaSource.Validate
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaSource::Validate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.Validate");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaSource.GetUrl
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UMediaSource::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.GetUrl");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.FileMediaSource.SetFilePath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor)

void UFileMediaSource::SetFilePath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	struct
	{
		struct FString                 Path;
	} params;

	params.Path = Path;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            Filter                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices");

	struct
	{
		TArray<struct FMediaCaptureDevice> OutDevices;
		int                            Filter;
	} params;

	params.Filter = Filter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            Filter                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices");

	struct
	{
		TArray<struct FMediaCaptureDevice> OutDevices;
		int                            Filter;
	} params;

	params.Filter = Filter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            Filter                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices");

	struct
	{
		TArray<struct FMediaCaptureDevice> OutDevices;
		int                            Filter;
	} params;

	params.Filter = Filter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


// Function MediaAssets.MediaPlayer.SupportsSeeking
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SupportsSeeking()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SupportsScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Rate                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Unthinned                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	struct
	{
		float                          Rate;
		bool                           Unthinned;
		bool                           ReturnValue;
	} params;

	params.Rate = Rate;
	params.Unthinned = Unthinned;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           Absolute                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewRotation");

	struct
	{
		struct FRotator                Rotation;
		bool                           Absolute;
		bool                           ReturnValue;
	} params;

	params.Rotation = Rotation;
	params.Absolute = Absolute;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewField
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Horizontal                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Vertical                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Absolute                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewField");

	struct
	{
		float                          Horizontal;
		float                          Vertical;
		bool                           Absolute;
		bool                           ReturnValue;
	} params;

	params.Horizontal = Horizontal;
	params.Vertical = Vertical;
	params.Absolute = Absolute;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FrameRate                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		float                          FrameRate;
		bool                           ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;
	params.FrameRate = FrameRate;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTrackFormat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMediaPlayerTrack              TrackType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTrackFormat");

	struct
	{
		EMediaPlayerTrack              TrackType;
		int                            TrackIndex;
		int                            FormatIndex;
		bool                           ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTimeDelay
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FTimespan               TimeDelay                      (CPF_Parm)

void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTimeDelay");

	struct
	{
		struct FTimespan               TimeDelay;
	} params;

	params.TimeDelay = TimeDelay;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.SetRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Rate                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SetRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	struct
	{
		float                          Rate;
		bool                           ReturnValue;
	} params;

	params.Rate = Rate;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetNativeVolume
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SetNativeVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetNativeVolume");

	struct
	{
		float                          Volume;
		bool                           ReturnValue;
	} params;

	params.Volume = Volume;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetLooping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Looping                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SetLooping(bool Looping)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	struct
	{
		bool                           Looping;
		bool                           ReturnValue;
	} params;

	params.Looping = Looping;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetDesiredPlayerName");

	struct
	{
		struct FName                   PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.SetBlockOnTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FTimespan               Time                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetBlockOnTime");

	struct
	{
		struct FTimespan               Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.SelectTrack
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMediaPlayerTrack              TrackType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SelectTrack");

	struct
	{
		EMediaPlayerTrack              TrackType;
		int                            TrackIndex;
		bool                           ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Seek
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FTimespan               Time                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::Seek(const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	struct
	{
		struct FTimespan               Time;
		bool                           ReturnValue;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Rewind
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::Rewind()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Reopen
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::Reopen()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Reopen");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Previous
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Previous");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenUrl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::OpenUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenUrl");

	struct
	{
		struct FString                 URL;
		bool                           ReturnValue;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSource");

	struct
	{
		class UMediaSource*            MediaSource;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaPlaylist*          InPlaylist                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylistIndex");

	struct
	{
		class UMediaPlaylist*          InPlaylist;
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.InPlaylist = InPlaylist;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylist
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaPlaylist*          InPlaylist                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylist");

	struct
	{
		class UMediaPlaylist*          InPlaylist;
		bool                           ReturnValue;
	} params;

	params.InPlaylist = InPlaylist;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenFile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::OpenFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenFile");

	struct
	{
		struct FString                 FilePath;
		bool                           ReturnValue;
	} params;

	params.FilePath = FilePath;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Next
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Next");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsReady
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsReady");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPreparing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::IsPreparing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPreparing");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsConnecting
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::IsConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsConnecting");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsBuffering
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::IsBuffering()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsBuffering");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.HasError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::HasError()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.HasError");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetViewRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UMediaPlayer::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetViewRotation");

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UMediaPlayer::GetVideoTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackType");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		struct FString                 ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFloatRange             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		struct FFloatRange             ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMediaPlayer::GetVideoTrackFrameRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		float                          ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FIntPoint               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		struct FIntPoint               ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMediaPlayer::GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		float                          ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMediaPlayer::GetVerticalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UMediaPlayer::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackLanguage
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMediaPlayerTrack              TrackType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackLanguage");

	struct
	{
		EMediaPlayerTrack              TrackType;
		int                            TrackIndex;
		struct FString                 ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackFormat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMediaPlayerTrack              TrackType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaPlayer::GetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackFormat");

	struct
	{
		EMediaPlayerTrack              TrackType;
		int                            TrackIndex;
		int                            ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMediaPlayerTrack              TrackType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackDisplayName");

	struct
	{
		EMediaPlayerTrack              TrackType;
		int                            TrackIndex;
		struct FText                   ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTimeDelay
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTimespan UMediaPlayer::GetTimeDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeDelay");

	struct
	{
		struct FTimespan               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTimespan UMediaPlayer::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	struct
	{
		struct FTimespan               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetSupportedRates
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FFloatRange>     OutRates                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           Unthinned                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMediaPlayer::GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSupportedRates");

	struct
	{
		TArray<struct FFloatRange>     OutRates;
		bool                           Unthinned;
	} params;

	params.Unthinned = Unthinned;

	UObject::ProcessEvent(fn, &params);

	if (OutRates != nullptr)
		*OutRates = params.OutRates;
}


// Function MediaAssets.MediaPlayer.GetSelectedTrack
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMediaPlayerTrack              TrackType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSelectedTrack");

	struct
	{
		EMediaPlayerTrack              TrackType;
		int                            ReturnValue;
	} params;

	params.TrackType = TrackType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMediaPlayer::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylistIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaPlayer::GetPlaylistIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylistIndex");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylist
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMediaPlaylist*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMediaPlaylist* UMediaPlayer::GetPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylist");

	struct
	{
		class UMediaPlaylist*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UMediaPlayer::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlayerName");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTracks
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMediaPlayerTrack              TrackType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTracks");

	struct
	{
		EMediaPlayerTrack              TrackType;
		int                            ReturnValue;
	} params;

	params.TrackType = TrackType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTrackFormats
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMediaPlayerTrack              TrackType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaPlayer::GetNumTrackFormats(EMediaPlayerTrack TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTrackFormats");

	struct
	{
		EMediaPlayerTrack              TrackType;
		int                            TrackIndex;
		int                            ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetMediaName
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UMediaPlayer::GetMediaName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMediaName");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMediaPlayer::GetHorizontalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTimespan               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTimespan UMediaPlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	struct
	{
		struct FTimespan               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UMediaPlayer::GetDesiredPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDesiredPlayerName");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UMediaPlayer::GetAudioTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackType");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		struct FString                 ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaPlayer::GetAudioTrackSampleRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		int                            ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            TrackIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FormatIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaPlayer::GetAudioTrackChannels(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackChannels");

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		int                            ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Close
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMediaPlayer::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.CanPlayUrl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::CanPlayUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlayUrl");

	struct
	{
		struct FString                 URL;
		bool                           ReturnValue;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPlaySource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlaySource");

	struct
	{
		class UMediaSource*            MediaSource;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlayer::CanPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Replace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMediaSource*            Replacement                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlaylist::Replace(int Index, class UMediaSource* Replacement)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Replace");

	struct
	{
		int                            Index;
		class UMediaSource*            Replacement;
		bool                           ReturnValue;
	} params;

	params.Index = Index;
	params.Replacement = Replacement;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.RemoveAt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlaylist::RemoveAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.RemoveAt");

	struct
	{
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Remove
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Remove");

	struct
	{
		class UMediaSource*            MediaSource;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Num
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaPlaylist::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Num");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Insert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Insert");

	struct
	{
		class UMediaSource*            MediaSource;
		int                            Index;
	} params;

	params.MediaSource = MediaSource;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlaylist.GetRandom
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            OutIndex                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMediaSource*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMediaSource* UMediaPlaylist::GetRandom(int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetRandom");

	struct
	{
		int                            OutIndex;
		class UMediaSource*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetPrevious
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMediaSource*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMediaSource* UMediaPlaylist::GetPrevious(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetPrevious");

	struct
	{
		int                            InOutIndex;
		class UMediaSource*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetNext
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMediaSource*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMediaSource* UMediaPlaylist::GetNext(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetNext");

	struct
	{
		int                            InOutIndex;
		class UMediaSource*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Get
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMediaSource*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMediaSource* UMediaPlaylist::Get(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Get");

	struct
	{
		int                            Index;
		class UMediaSource*            ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddUrl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlaylist::AddUrl(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddUrl");

	struct
	{
		struct FString                 URL;
		bool                           ReturnValue;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddFile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlaylist::AddFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddFile");

	struct
	{
		struct FString                 FilePath;
		bool                           ReturnValue;
	} params;

	params.FilePath = FilePath;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Add
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Add");

	struct
	{
		class UMediaSource*            MediaSource;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.SetMediaPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaPlayer*            NewMediaPlayer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMediaSoundComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetMediaPlayer");

	struct
	{
		class UMediaPlayer*            NewMediaPlayer;
	} params;

	params.NewMediaPlayer = NewMediaPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaSoundComponent.GetMediaPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMediaPlayer*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMediaPlayer* UMediaSoundComponent::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetMediaPlayer");

	struct
	{
		class UMediaPlayer*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSoundAttenuationSettings OutAttenuationSettings         (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply");

	struct
	{
		struct FSoundAttenuationSettings OutAttenuationSettings;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutAttenuationSettings != nullptr)
		*OutAttenuationSettings = params.OutAttenuationSettings;

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.SetMediaPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMediaPlayer*            NewMediaPlayer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	struct
	{
		class UMediaPlayer*            NewMediaPlayer;
	} params;

	params.NewMediaPlayer = NewMediaPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaTexture.GetWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaTexture::GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetWidth");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetMediaPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMediaPlayer*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMediaPlayer* UMediaTexture::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetMediaPlayer");

	struct
	{
		class UMediaPlayer*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMediaTexture::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetHeight");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetAspectRatio
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMediaTexture::GetAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetAspectRatio");

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
