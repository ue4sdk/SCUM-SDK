#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_DatasmithContent_enums.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// 0x0008
struct FDatasmithCameraFilmbackSettingsTemplate
{
	float                                              SensorWidth;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SensorHeight;                                             // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// 0x0004
struct FDatasmithCameraLensSettingsTemplate
{
	float                                              MaxFStop;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// 0x0004
struct FDatasmithCameraFocusSettingsTemplate
{
	float                                              ManualFocusDistance;                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// 0x0040
struct FDatasmithPostProcessSettingsTemplate
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x0000(0x0001)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x0000(0x0001)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x0000(0x0001)
	unsigned char                                      bOverride_CameraISO : 1;                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WhiteTemp;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x000C(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector4                                    ColorSaturation;                                          // 0x0020(0x0010) (CPF_IsPlainOldData)
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                       // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              CameraISO;                                                // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// 0x0008
struct FDatasmithAssetImportOptions
{
	struct FName                                       PackagePath;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// 0x0004
struct FDatasmithStaticMeshImportOptions
{
	EDatasmithImportLightmapMin                        MinLightmapResolution;                                    // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDatasmithImportLightmapMax                        MaxLightmapResolution;                                    // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bGenerateLightmapUVs;                                     // 0x0002(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x0003(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// 0x0018
struct FDatasmithImportBaseOptions
{
	EDatasmithImportScene                              SceneHandling;                                            // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bIncludeGeometry;                                         // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bIncludeMaterial;                                         // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bIncludeLight;                                            // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bIncludeCamera;                                           // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FDatasmithAssetImportOptions                AssetOptions;                                             // 0x0008(0x0008) (CPF_BlueprintVisible)
	struct FDatasmithStaticMeshImportOptions           StaticMeshOptions;                                        // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// 0x000C
struct FDatasmithTessellationOptions
{
	float                                              ChordTolerance;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MaxEdgeLength;                                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              NormalTolerance;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// 0x0002
struct FDatasmithReimportOptions
{
	bool                                               bUpdateActors;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRespawnDeletedActors;                                    // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// 0x0004
struct FDatasmithMeshSectionInfoTemplate
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// 0x0050
struct FDatasmithMeshSectionInfoMapTemplate
{
	TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map;                                                      // 0x0000(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// 0x0010
struct FDatasmithMeshBuildSettingsTemplate
{
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001)
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                // 0x0000(0x0001)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0000(0x0001)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// 0x0010
struct FDatasmithStaticMaterialTemplate
{
	struct FName                                       MaterialSlotName;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
