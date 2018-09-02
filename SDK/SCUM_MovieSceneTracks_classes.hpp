#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MovieSceneTracks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneTracks.MovieSceneTransformOrigin
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneTransformOrigin : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneTransformOrigin");
		return ptr;
	}


	struct FTransform BP_GetTransformOrigin();
};


// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0030 (0x0140 - 0x0110)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                             // 0x0110(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FMovieSceneObjectBindingID                  ConstraintBindingID;                                      // 0x0120(0x0018) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0010 (0x0150 - 0x0140)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       AttachComponentName;                                      // 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAttachmentRule                                    AttachmentLocationRule;                                   // 0x0148(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAttachmentRule                                    AttachmentRotationRule;                                   // 0x0149(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EAttachmentRule                                    AttachmentScaleRule;                                      // 0x014A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDetachmentRule                                    DetachmentLocationRule;                                   // 0x014B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDetachmentRule                                    DetachmentRotationRule;                                   // 0x014C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDetachmentRule                                    DetachmentScaleRule;                                      // 0x014D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x014E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0070 (0x01B0 - 0x0140)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0140(0x0068) MISSED OFFSET
	EMovieScene3DPathSection_Axis                      FrontAxisEnum;                                            // 0x01A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EMovieScene3DPathSection_Axis                      UpAxisEnum;                                               // 0x01A9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	unsigned char                                      bFollow : 1;                                              // 0x01AC(0x0001) (CPF_Edit)
	unsigned char                                      bReverse : 1;                                             // 0x01AC(0x0001) (CPF_Edit)
	unsigned char                                      bForceUpright : 1;                                        // 0x01AC(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0470 (0x0580 - 0x0110)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FMovieSceneTransformMask                    TransformMask;                                            // 0x0118(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FRichCurve                                  Translation[0x3];                                         // 0x0120(0x0070)
	struct FRichCurve                                  Rotation[0x3];                                            // 0x0270(0x0070)
	struct FRichCurve                                  Scale[0x3];                                               // 0x03C0(0x0070)
	struct FRichCurve                                  ManualWeight;                                             // 0x0510(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0020 (0x00E0 - 0x00C0)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	struct FString                                     PropertyPath;                                             // 0x00C0(0x0010) (CPF_ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00D0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x00A0 (0x01B0 - 0x0110)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FIntegralCurve                              ActorGuidIndexCurve;                                      // 0x0118(0x0070)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0188(0x0010) MISSED OFFSET
	TArray<struct FString>                             ActorGuidStrings;                                         // 0x0198(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0140 (0x0250 - 0x0110)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0110(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartOffset;                                              // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x011C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x0120(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AudioVolume;                                              // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FRichCurve                                  SoundVolume;                                              // 0x0128(0x0070) (CPF_Edit)
	struct FRichCurve                                  PitchMultiplier;                                          // 0x0198(0x0070) (CPF_Edit)
	bool                                               bSuppressSubtitles;                                       // 0x0208(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideAttenuation;                                     // 0x0209(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0210(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             OnQueueSubtitles;                                         // 0x0218(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          // 0x0228(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                   // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0080 (0x0190 - 0x0110)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	bool                                               DefaultValue;                                             // 0x0118(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FIntegralCurve                              BoolCurve;                                                // 0x0120(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x0080 (0x0190 - 0x0110)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FIntegralCurve                              ByteCurve;                                                // 0x0118(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (0x0150 - 0x0110)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                 // 0x0110(0x0020) (CPF_Edit)
	class UCameraAnim*                                 CameraAnim;                                               // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0138(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PlayScale;                                                // 0x013C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0140(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0144(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0148(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0030 (0x0140 - 0x0110)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                               // 0x0110(0x0010) (CPF_Deprecated, CPF_IsPlainOldData)
	struct FMovieSceneObjectBindingID                  CameraBindingID;                                          // 0x0120(0x0018) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0040 (0x0150 - 0x0110)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                // 0x0110(0x0020) (CPF_Edit)
	class UClass*                                      ShakeClass;                                               // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PlayScale;                                                // 0x0138(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // 0x013C(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0140(0x000C) (CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x014C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0020 (0x01A0 - 0x0180)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0180(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0188(0x0018) (CPF_Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x01D0 (0x02E0 - 0x0110)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FRichCurve                                  RedCurve;                                                 // 0x0118(0x0070)
	struct FRichCurve                                  GreenCurve;                                               // 0x0188(0x0070)
	struct FRichCurve                                  BlueCurve;                                                // 0x01F8(0x0070)
	struct FRichCurve                                  AlphaCurve;                                               // 0x0268(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                            // 0x00E0(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00E1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0080 (0x0190 - 0x0110)
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FIntegralCurve                              EnumCurve;                                                // 0x0118(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                     // 0x00E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x0110 (0x0220 - 0x0110)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                   // 0x0110(0x0068) (CPF_Deprecated)
	struct FMovieSceneEventSectionData                 EventData;                                                // 0x0178(0x0020)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0198(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0020 (0x00E0 - 0x00C0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00D0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0080 (0x0190 - 0x0110)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FRichCurve                                  FloatCurve;                                               // 0x0118(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0010 (0x01A0 - 0x0190)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET
	unsigned char                                      bFadeAudio : 1;                                           // 0x0198(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0199(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0080 (0x0190 - 0x0110)
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FIntegralCurve                              IntegerCurve;                                             // 0x0118(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0020 (0x0130 - 0x0110)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	ELevelVisibility                                   Visibility;                                               // 0x0110(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FName>                               LevelNames;                                               // 0x0118(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0030 (0x0140 - 0x0110)
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                            // 0x0110(0x0010) (CPF_ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x0120(0x0010) (CPF_ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                             // 0x0130(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0070 (0x0180 - 0x0110)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ParticleKeys;                                             // 0x0110(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x00C0 (0x01D0 - 0x0110)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                   // 0x0110(0x0090) (CPF_Edit)
	class UAnimSequence*                               AnimSequence;                                             // 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              StartOffset;                                              // 0x01B0(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              EndOffset;                                                // 0x01B4(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x01B8(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x01BC(0x0001) (CPF_Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01BD(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x01C0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	bool                                               bUseLegacySectionIndexBlend;                              // 0x00C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (0x0190 - 0x0190)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (0x0190 - 0x0190)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSpawnSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0020 (0x00E0 - 0x00C0)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	struct FGuid                                       ObjectGuid;                                               // 0x00C8(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringSection
// 0x0080 (0x0190 - 0x0110)
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FStringCurve                                StringCurve;                                              // 0x0118(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneTransformTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorSection
// 0x01D0 (0x02E0 - 0x0110)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET
	struct FRichCurve                                  Curves[0x4];                                              // 0x0118(0x0070)
	int                                                ChannelsUsed;                                             // 0x02D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                          // 0x00E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
