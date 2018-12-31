#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_MovieScene_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0030
struct FMovieSceneMediaSectionParams
{
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Proxy;                                                    // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0028(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x002C(0x0004)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneMediaSectionParams               Params;                                                   // 0x0020(0x0030)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
