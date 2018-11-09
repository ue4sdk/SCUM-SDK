#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_GeometryCacheTracks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x0028 (0x0108 - 0x00E0)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams              Params;                                                   // 0x00E0(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class GeometryCacheTracks.MovieSceneGeometryCacheSection");
		return ptr;
	}

};


// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0058(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
