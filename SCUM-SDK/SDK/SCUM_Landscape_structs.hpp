#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_Landscape_enums.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WeightmapTextureIndex;                                    // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      WeightmapTextureChannel;                                  // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct Landscape.GrassVariety
// 0x0048
struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPerPlatformFloat                           GrassDensity;                                             // 0x0008(0x0004) (CPF_Edit)
	bool                                               bUseGrid;                                                 // 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              PlacementJitter;                                          // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPerPlatformInt                             StartCullDistance;                                        // 0x0014(0x0004) (CPF_Edit)
	struct FPerPlatformInt                             EndCullDistance;                                          // 0x0018(0x0004) (CPF_Edit)
	int                                                MinLOD;                                                   // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EGrassScaling                                      Scaling;                                                  // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0024(0x0008) (CPF_Edit)
	struct FFloatInterval                              ScaleY;                                                   // 0x002C(0x0008) (CPF_Edit)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0034(0x0008) (CPF_Edit)
	bool                                               RandomRotation;                                           // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseLandscapeLightmap;                                    // 0x003E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x003F(0x0001) (CPF_Edit)
	bool                                               bReceivesDecals;                                          // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCastDynamicShadow;                                       // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bKeepInstanceBufferCPUCopy;                               // 0x0042(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      End : 1;                                                  // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Left;                                                     // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0018(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     FalloffLeft;                                              // 0x0024(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     FalloffRight;                                             // 0x0030(0x000C) (CPF_IsPlainOldData)
	float                                              StartEndFalloff;                                          // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TangentLen;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.GrassInput
// 0x0040
struct FGrassInput
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULandscapeGrassType*                         GrassType;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0010(0x0030)
};

// ScriptStruct Landscape.LayerBlendInput
// 0x0088
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FExpressionInput                            LayerInput;                                               // 0x0010(0x0030)
	struct FExpressionInput                            HeightInput;                                              // 0x0040(0x0030)
	float                                              PreviewWeight;                                            // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ConstLayerInput;                                          // 0x0074(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              ConstHeightInput;                                         // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// 0x0028
struct FLandscapeEditToolRenderData
{
	class UMaterialInterface*                          ToolMaterial;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          GizmoMaterial;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SelectedType;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DebugChannelR;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DebugChannelG;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DebugChannelB;                                            // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  DataTexture;                                              // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LayerName;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bCenterH : 1;                                             // 0x0018(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector2D                                   CenterAdjust;                                             // 0x001C(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bScaleToWidth : 1;                                        // 0x0024(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x0028(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeSplineMeshOrientation>       Orientation;                                              // 0x0034(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                              // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                   // 0x0036(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
