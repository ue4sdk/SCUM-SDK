#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_Paper2D_enums.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// 0x0010
struct FPaperFlipbookKeyFrame
{
	class UPaperSprite*                                Sprite;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FrameRun;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteInstanceData
// 0x0050
struct FSpriteInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (CPF_Edit, CPF_IsPlainOldData)
	class UPaperSprite*                                SourceSprite;                                             // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      VertexColor;                                              // 0x0048(0x0004) (CPF_Edit, CPF_IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Paper2D.PaperSpriteSocket
// 0x0040
struct FPaperSpriteSocket
{
	struct FTransform                                  LocalTransform;                                           // 0x0000(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// 0x0038
struct FPaperTerrainMaterialRule
{
	class UPaperSprite*                                StartCap;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UPaperSprite*>                        Body;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UPaperSprite*                                EndCap;                                                   // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumAngle;                                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaximumAngle;                                             // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              CollisionOffset;                                          // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DrawOrder;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileInfo
// 0x0010
struct FPaperTileInfo
{
	class UPaperTileSet*                               TileSet;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PackedTileIndex;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.IntMargin
// 0x0010
struct FIntMargin
{
	int                                                Left;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Top;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Right;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Bottom;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// 0x0030
struct FSpriteGeometryShape
{
	ESpriteShapeType                                   ShapeType;                                                // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           Vertices;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FVector2D                                   BoxSize;                                                  // 0x0018(0x0008) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector2D                                   BoxPosition;                                              // 0x0020(0x0008) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Rotation;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               bNegativeWinding;                                         // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// 0x0030
struct FSpriteGeometryCollection
{
	TArray<struct FSpriteGeometryShape>                Shapes;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TEnumAsByte<ESpritePolygonMode>                    GeometryType;                                             // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                PixelsPerSubdivisionX;                                    // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PixelsPerSubdivisionY;                                    // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAvoidVertexMerging;                                      // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              AlphaThreshold;                                           // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DetailAmount;                                             // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SimplifyEpsilon;                                          // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileMetadata
// 0x0040
struct FPaperTileMetadata
{
	struct FName                                       UserDataName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSpriteGeometryCollection                   CollisionData;                                            // 0x0008(0x0030) (CPF_Edit)
	unsigned char                                      TerrainMembership[0x4];                                   // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileSetTerrain
// 0x0018
struct FPaperTileSetTerrain
{
	struct FString                                     TerrainName;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                CenterTileIndex;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// 0x0040
struct FPaperSpriteAtlasSlot
{
	TSoftObjectPtr<class UPaperSprite>                 SpriteRef;                                                // 0x0000(0x0028)
	int                                                AtlasIndex;                                               // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                X;                                                        // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Y;                                                        // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Width;                                                    // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
// 0x00D0
struct FSpriteDrawCallRecord
{
	struct FVector                                     Destination;                                              // 0x0000(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTexture*                                    BaseTexture;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
	struct FColor                                      Color;                                                    // 0x0048(0x0004) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x84];                                      // 0x004C(0x0084) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteAssetInitParameters
// 0x0040
struct FSpriteAssetInitParameters
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
