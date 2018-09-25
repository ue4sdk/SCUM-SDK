#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MovieSceneCapture_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MovieSceneCapture.MovieSceneCapture
// 0x0218 (0x0240 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FCaptureProtocolID                          CaptureType;                                              // 0x0038(0x0008) (CPF_Edit, CPF_Config)
	class UMovieSceneCaptureProtocolSettings*          ProtocolSettings;                                         // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMovieSceneCaptureSettings                  Settings;                                                 // 0x0048(0x0048) (CPF_Edit, CPF_Config)
	bool                                               bUseSeparateProcess;                                      // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bCloseEditorWhenCaptureStarts;                            // 0x0091(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
	struct FString                                     AdditionalCommandLineArguments;                           // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     InheritedCommandLineArguments;                            // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData02[0x188];                                     // 0x00B8(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (0x0240 - 0x0240)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0038 (0x0060 - 0x0028)
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                      // 0x0028(0x0010) (CPF_Edit, CPF_Config)
	bool                                               bCaptureFramesInHDR;                                      // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                HDRCompressionQuality;                                    // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             PostProcessingMaterial;                                   // 0x0048(0x0018) (CPF_Edit, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.CompositionGraphCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (0x0030 - 0x0028)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.FrameGrabberProtocolSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (0x0028 - 0x0028)
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.BmpImageCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (0x0038 - 0x0030)
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality;                                       // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.ImageCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0260 - 0x0240)
class ULevelCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0240(0x0004) MISSED OFFSET
	struct FGuid                                       PrerequisiteActorId;                                      // 0x0244(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0254(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	static int GetCaptureFrameNumber();
	static float GetCaptureElapsedTime();
};


// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (0x0048 - 0x0030)
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression;                                          // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CompressionQuality;                                       // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     VideoCodec;                                               // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MovieSceneCapture.VideoCaptureSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
