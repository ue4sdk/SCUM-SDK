#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_MovieScene_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaCompositing.MediaPlaneParameters
// 0x0040
struct FMediaPlaneParameters
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TextureParameterName;                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFillScreen;                                              // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector2D                                   FillScreenAmount;                                         // 0x0014(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   FixedSize;                                                // 0x001C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UTexture*                                    RenderTexture;                                            // 0x0028(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UTexture*                                    MediaTexture;                                             // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0030
struct FMovieSceneMediaSectionParams
{
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Proxy;                                                    // 0x0018(0x0010) (CPF_ZeroConstructor)
	float                                              SectionEndTime;                                           // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SectionStartTime;                                         // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
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
