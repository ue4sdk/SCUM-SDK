#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_DatasmithContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DatasmithContent.DatasmithAreaLightActor
// 0x0020 (0x0348 - 0x0328)
class ADatasmithAreaLightActor : public AActor
{
public:
	EDatasmithAreaLightActorShape                      LightShape;                                               // 0x0328(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x032C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0334(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Intensity;                                                // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithObjectTemplate
// 0x0000 (0x0028 - 0x0028)
class UDatasmithObjectTemplate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0028 (0x0050 - 0x0028)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	EDatasmithAreaLightActorShape                      LightShape;                                               // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector2D                                   Dimensions;                                               // 0x002C(0x0008) (CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0034(0x0010) (CPF_IsPlainOldData)
	float                                              Intensity;                                                // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHidden : 1;                                              // 0x0048(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneImportData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000 (0x0028 - 0x0028)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetUserData
// 0x0050 (0x0078 - 0x0028)
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<struct FName, struct FString>                 MetaData;                                                 // 0x0028(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0058 (0x0080 - 0x0028)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithCameraFilmbackSettingsTemplate    FilmbackSettings;                                         // 0x0028(0x0008) (CPF_IsPlainOldData)
	struct FDatasmithCameraLensSettingsTemplate        LensSettings;                                             // 0x0030(0x0004) (CPF_IsPlainOldData)
	struct FDatasmithCameraFocusSettingsTemplate       FocusSettings;                                            // 0x0034(0x0004) (CPF_IsPlainOldData)
	float                                              CurrentFocalLength;                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDatasmithPostProcessSettingsTemplate       PostProcessSettings;                                      // 0x0040(0x0040)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}


	static struct FString GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key);
	static void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues);
	static class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);
};


// Class DatasmithContent.DatasmithImportOptions
// 0x0060 (0x0088 - 0x0028)
class UDatasmithImportOptions : public UObject
{
public:
	EDatasmithImportSearchPackagePolicy                SearchPackagePolicy;                                      // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy;                                   // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDatasmithImportAssetConflictPolicy                TextureConflictPolicy;                                    // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy;                              // 0x002B(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDatasmithImportActorPolicy                        LightImportPolicy;                                        // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDatasmithImportActorPolicy                        CameraImportPolicy;                                       // 0x002D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDatasmithImportActorPolicy                        OtherActorImportPolicy;                                   // 0x002E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDatasmithImportMaterialQuality                    MaterialQuality;                                          // 0x002F(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FDatasmithImportBaseOptions                 BaseOptions;                                              // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	struct FDatasmithTessellationOptions               TessellationOptions;                                      // 0x0050(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	struct FDatasmithReimportOptions                   ReimportOptions;                                          // 0x005C(0x0002) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	unsigned char                                      UnknownData01[0x2A];                                      // 0x005E(0x002A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0038 (0x0060 - 0x0028)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      bVisible : 1;                                             // 0x0028(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	unsigned char                                      CastShadows : 1;                                          // 0x002C(0x0001)
	unsigned char                                      bUseTemperature : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bUseIESBrightness : 1;                                    // 0x002C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              Intensity;                                                // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Temperature;                                              // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IESBrightnessScale;                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LightColor;                                               // 0x003C(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LightFunctionMaterial;                                    // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureLightProfile*                        IESTexture;                                               // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0010 (0x0038 - 0x0028)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	ELightUnits                                        IntensityUnits;                                           // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              SourceRadius;                                             // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SourceLength;                                             // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AttenuationRadius;                                        // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithScene
// 0x0000 (0x0028 - 0x0028)
class UDatasmithScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithScene");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneActor
// 0x0058 (0x0380 - 0x0328)
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                             Scene;                                                    // 0x0328(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TMap<struct FName, TSoftObjectPtr<class AActor>>   RelatedActors;                                            // 0x0330(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x0048 (0x0070 - 0x0028)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeTransform;                                        // 0x0030(0x0030) (CPF_IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class USceneComponent*                             AttachParent;                                             // 0x0068(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0010 (0x0038 - 0x0028)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	TEnumAsByte<ESkyLightSourceType>                   SourceType;                                               // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                CubemapResolution;                                        // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureCube*                                Cubemap;                                                  // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0008 (0x0030 - 0x0028)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                              InnerConeAngle;                                           // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OuterConeAngle;                                           // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0020 (0x0090 - 0x0070)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithSceneComponentTemplate
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0078(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0078 (0x00A0 - 0x0028)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct FDatasmithMeshSectionInfoMapTemplate        SectionInfoMap;                                           // 0x0028(0x0050) (CPF_Edit, CPF_EditConst)
	int                                                LightMapCoordinateIndex;                                  // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings;                                            // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FDatasmithStaticMaterialTemplate>    StaticMaterials;                                          // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
