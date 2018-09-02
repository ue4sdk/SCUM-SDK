#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MediaCompositing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MediaCompositing.MediaPlane
// 0x0008 (0x0320 - 0x0318)
class AMediaPlane : public AActor
{
public:
	class UMediaPlaneComponent*                        MediaPlane;                                               // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MediaCompositing.MediaPlane");
		return ptr;
	}

};


// Class MediaCompositing.MediaPlaneComponent
// 0x00D0 (0x0730 - 0x0660)
class UMediaPlaneComponent : public UPrimitiveComponent
{
public:
	struct FMediaPlaneParameters                       Plane;                                                    // 0x0660(0x0040) (CPF_Edit)
	unsigned char                                      UnknownData00[0x90];                                      // 0x06A0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MediaCompositing.MediaPlaneComponent");
		return ptr;
	}


	void SetMediaPlane(const struct FMediaPlaneParameters& Plane);
	void OnMediaTextureChanged();
	struct FMediaPlaneParameters GetPlane();
};


// Class MediaCompositing.MediaPlaneFrustumComponent
// 0x0000 (0x0660 - 0x0660)
class UMediaPlaneFrustumComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MediaCompositing.MediaPlaneFrustumComponent");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaSection
// 0x0030 (0x0140 - 0x0110)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	struct FString                                     Proxy;                                                    // 0x0110(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x0120(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MediaCompositing.MovieSceneMediaSection");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x0010 (0x00D0 - 0x00C0)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

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
