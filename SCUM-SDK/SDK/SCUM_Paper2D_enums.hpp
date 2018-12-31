#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision = 0,
	EFlipbookCollisionMode__FirstFrameCollision = 1,
	EFlipbookCollisionMode__EachFrameCollision = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 3
};


// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder = 0,
	EPaperSpriteAtlasPadding__PadWithZero = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX = 2
};


// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal = 0,
	ETileMapProjectionMode__IsometricDiamond = 1,
	ETileMapProjectionMode__IsometricStaggered = 2,
	ETileMapProjectionMode__HexagonalStaggered = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX = 4
};


// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left     = 0,
	ESpritePivotMode__Top_Center   = 1,
	ESpritePivotMode__Top_Right    = 2,
	ESpritePivotMode__Center_Left  = 3,
	ESpritePivotMode__Center_Center = 4,
	ESpritePivotMode__Center_Right = 5,
	ESpritePivotMode__Bottom_Left  = 6,
	ESpritePivotMode__Bottom_Center = 7,
	ESpritePivotMode__Bottom_Right = 8,
	ESpritePivotMode__Custom       = 9,
	ESpritePivotMode__ESpritePivotMode_MAX = 10
};


// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox = 0,
	ESpritePolygonMode__TightBoundingBox = 1,
	ESpritePolygonMode__ShrinkWrapped = 2,
	ESpritePolygonMode__FullyCustom = 3,
	ESpritePolygonMode__Diced      = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX = 5
};


// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box          = 0,
	ESpriteShapeType__Circle       = 1,
	ESpriteShapeType__Polygon      = 2,
	ESpriteShapeType__ESpriteShapeType_MAX = 3
};


// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None     = 0,
	ESpriteCollisionMode__Use2DPhysics = 1,
	ESpriteCollisionMode__Use3DPhysics = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
