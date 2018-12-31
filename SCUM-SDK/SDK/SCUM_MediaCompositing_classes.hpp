#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MediaCompositing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaCompositing.MovieSceneMediaSection
// 0x0028 (0x0108 - 0x00E0)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	struct FString                                     Proxy;                                                    // 0x00E0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x00F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x00F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MediaCompositing.MovieSceneMediaSection");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  MediaSections;                                            // 0x0058(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MediaCompositing.MovieSceneMediaTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
