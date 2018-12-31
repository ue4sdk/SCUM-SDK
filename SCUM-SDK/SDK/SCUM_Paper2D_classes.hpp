#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Paper2D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0020 (0x01C8 - 0x01A8)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                // 0x01A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	int                                                AdditionalSlotIndex;                                      // 0x01AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       SlotDisplayName;                                          // 0x01B0(0x0018) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return ptr;
	}

};


// Class Paper2D.PaperCharacter
// 0x0010 (0x0750 - 0x0740)
class APaperCharacter : public ACharacter
{
public:
	class UPaperFlipbookComponent*                     Sprite;                                                   // 0x0740(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0748(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperCharacter");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbook
// 0x0028 (0x0050 - 0x0028)
class UPaperFlipbook : public UObject
{
public:
	float                                              FramesPerSecond;                                          // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FPaperFlipbookKeyFrame>              KeyFrames;                                                // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                          // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperFlipbook");
		return ptr;
	}


	bool IsValidKeyFrameIndex(int Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int FrameIndex);
	int GetNumKeyFrames();
	int GetNumFrames();
	int GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};


// Class Paper2D.PaperFlipbookActor
// 0x0008 (0x0330 - 0x0328)
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                          // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperFlipbookActor");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbookComponent
// 0x0040 (0x05D0 - 0x0590)
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0590(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0598(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x059C(0x0001) (CPF_Net)
	unsigned char                                      bReversePlayback : 1;                                     // 0x059C(0x0001) (CPF_Net)
	unsigned char                                      bPlaying : 1;                                             // 0x059C(0x0001) (CPF_Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	float                                              AccumulatedTime;                                          // 0x05A0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CachedFrameIndex;                                         // 0x05A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x05A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UBodySetup*                                  CachedBodySetup;                                          // 0x05B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFinishedPlaying;                                        // 0x05C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperFlipbookComponent");
		return ptr;
	}


	void Stop();
	void SetSpriteColor(const struct FLinearColor& NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};


// Class Paper2D.PaperGroupedSpriteActor
// 0x0008 (0x0330 - 0x0328)
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                          // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperGroupedSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperGroupedSpriteComponent
// 0x0030 (0x05C0 - 0x0590)
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0590(0x0008) MISSED OFFSET
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                    // 0x0598(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x05A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperGroupedSpriteComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
};


// Class Paper2D.PaperRuntimeSettings
// 0x0008 (0x0030 - 0x0028)
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                               bEnableSpriteAtlasGroups;                                 // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bEnableTerrainSplineEditing;                              // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               bResizeSpriteDataToMatchTextures;                         // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperRuntimeSettings");
		return ptr;
	}

};


// Class Paper2D.PaperSprite
// 0x0098 (0x00C0 - 0x0028)
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FVector2D                                   SourceUV;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector2D                                   SourceDimension;                                          // 0x0040(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	class UTexture2D*                                  SourceTexture;                                            // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FVector2D                                   BakedSourceUV;                                            // 0x0060(0x0008) (CPF_IsPlainOldData)
	struct FVector2D                                   BakedSourceDimension;                                     // 0x0068(0x0008) (CPF_IsPlainOldData)
	class UTexture2D*                                  BakedSourceTexture;                                       // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          AlternateMaterial;                                        // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                  // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              PixelsPerUnrealUnit;                                      // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AlternateMaterialSplitIndex;                              // 0x00A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<struct FVector4>                            BakedRenderData;                                          // 0x00B0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperSprite");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteActor
// 0x0008 (0x0330 - 0x0328)
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                       RenderComponent;                                          // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteAtlas
// 0x0000 (0x0028 - 0x0028)
class UPaperSpriteAtlas : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperSpriteAtlas");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperSpriteBlueprintLibrary");
		return ptr;
	}


	static struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height);
};


// Class Paper2D.PaperSpriteComponent
// 0x0020 (0x05B0 - 0x0590)
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0590(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperSpriteComponent");
		return ptr;
	}


	void SetSpriteColor(const struct FLinearColor& NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};


// Class Paper2D.PaperTerrainActor
// 0x0018 (0x0340 - 0x0328)
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                             DummyRoot;                                                // 0x0328(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPaperTerrainSplineComponent*                SplineComponent;                                          // 0x0330(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPaperTerrainComponent*                      RenderComponent;                                          // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTerrainActor");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainComponent
// 0x0060 (0x05C0 - 0x0560)
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                       TerrainMaterial;                                          // 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bClosedSpline;                                            // 0x0568(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFilledSpline;                                            // 0x0569(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x056A(0x0006) MISSED OFFSET
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                         // 0x0570(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                randomSeed;                                               // 0x0578(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SegmentOverlapAmount;                                     // 0x057C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                TerrainColor;                                             // 0x0580(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	int                                                ReparamStepsPerSegment;                                   // 0x0590(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x0594(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	float                                              CollisionThickness;                                       // 0x0598(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x05A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x05A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTerrainComponent");
		return ptr;
	}


	void SetTerrainColor(const struct FLinearColor& NewColor);
};


// Class Paper2D.PaperTerrainMaterial
// 0x0018 (0x0048 - 0x0030)
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                    // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UPaperSprite*                                InteriorFill;                                             // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTerrainMaterial");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainSplineComponent
// 0x0010 (0x0660 - 0x0650)
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0650(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTerrainSplineComponent");
		return ptr;
	}

};


// Class Paper2D.PaperTileLayer
// 0x0070 (0x0098 - 0x0028)
class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                // 0x0028(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                LayerWidth;                                               // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerHeight;                                              // 0x0044(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHiddenInGame : 1;                                        // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bLayerCollides : 1;                                       // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionThickness : 1;                          // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionOffset : 1;                             // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              CollisionThicknessOverride;                               // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionOffsetOverride;                                  // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LayerColor;                                               // 0x0054(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                           // 0x0070(0x0010) (CPF_ZeroConstructor)
	class UPaperTileSet*                               TileSet;                                                  // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TArray<int>                                        AllocatedGrid;                                            // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTileLayer");
		return ptr;
	}

};


// Class Paper2D.PaperTileMap
// 0x0080 (0x00A8 - 0x0028)
class UPaperTileMap : public UObject
{
public:
	int                                                MapWidth;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MapHeight;                                                // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TileWidth;                                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TileHeight;                                               // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PixelsPerUnrealUnit;                                      // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SeparationPerTileX;                                       // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SeparationPerTileY;                                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SeparationPerLayer;                                       // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UPaperTileSet>                SelectedTileSet;                                          // 0x0048(0x0028)
	class UMaterialInterface*                          Material;                                                 // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              CollisionThickness;                                       // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x008C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                           // 0x008D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	int                                                HexSideLength;                                            // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerNameIndex;                                           // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTileMap");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapActor
// 0x0008 (0x0330 - 0x0328)
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                      RenderComponent;                                          // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTileMapActor");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapComponent
// 0x0050 (0x05E0 - 0x0590)
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int                                                TileWidth;                                                // 0x0590(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                TileHeight;                                               // 0x0594(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class UPaperTileSet*                               DefaultLayerTileSet;                                      // 0x0598(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x05A0(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x05A8(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	struct FLinearColor                                TileMapColor;                                             // 0x05B8(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	int                                                UseSingleLayerIndex;                                      // 0x05C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseSingleLayer;                                          // 0x05CC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	class UPaperTileMap*                               TileMap;                                                  // 0x05D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTileMapComponent");
		return ptr;
	}


	void SetTileMapColor(const struct FLinearColor& NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue);
	void SetLayerColor(const struct FLinearColor& NewColor, int Layer);
	void SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FVector GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int X, int Y, int Layer);
	void GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor GetLayerColor(int Layer);
	void CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};


// Class Paper2D.PaperTileSet
// 0x0080 (0x00A8 - 0x0028)
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                                   TileSize;                                                 // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UTexture2D*                                  TileSheet;                                                // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FIntMargin                                  BorderMargin;                                             // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FIntPoint                                   PerTileSpacing;                                           // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FIntPoint                                   DrawingOffset;                                            // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	int                                                WidthInTiles;                                             // 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HeightInTiles;                                            // 0x006C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPaperTileMetadata>                  PerTileData;                                              // 0x0078(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                 // 0x0088(0x0010) (CPF_ZeroConstructor)
	int                                                TileWidth;                                                // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                TileHeight;                                               // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                Margin;                                                   // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                Spacing;                                                  // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.PaperTileSet");
		return ptr;
	}

};


// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Paper2D.TileMapBlueprintLibrary");
		return ptr;
	}


	static struct FPaperTileInfo MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	static struct FName GetTileUserData(const struct FPaperTileInfo& Tile);
	static struct FTransform GetTileTransform(const struct FPaperTileInfo& Tile);
	static void BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
