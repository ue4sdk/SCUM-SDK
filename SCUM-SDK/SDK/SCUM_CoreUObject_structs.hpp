#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_enums.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.JoinabilitySettings
// 0x0018
struct FJoinabilitySettings
{
	struct FName                                       SessionName;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bPublicSearchable;                                        // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowInvites;                                            // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bJoinViaPresence;                                         // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bJoinViaPresenceFriendsOnly;                              // 0x000B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPartySize;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CoreUObject.UniqueNetIdWrapper
// 0x0001
struct FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CoreUObject.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                B;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                C;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                D;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Vector4
// 0x0010
struct alignas(16) FVector4
{
	float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              W;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

	inline FVector2D()
		: X(0), Y(0)
	{ }

	inline FVector2D(float x, float y)
		: X(x),
		  Y(y)
	{ }

};

// ScriptStruct CoreUObject.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                       // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector                                     v2;                                                       // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Plane
// 0x0004 (0x0010 - 0x000C)
struct alignas(16) FPlane : public FVector
{
	float                                              W;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Rotator
// 0x000C
struct FRotator
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Yaw;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Roll;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Quat
// 0x0010
struct alignas(16) FQuat
{
	float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              W;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                        // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      Y;                                                        // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      Z;                                                        // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      W;                                                        // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.PackedRGB10A2N
// 0x0004
struct FPackedRGB10A2N
{
	int                                                Packed;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.PackedRGBA16N
// 0x0008
struct FPackedRGBA16N
{
	int                                                XY;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                ZW;                                                       // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.IntVector
// 0x000C
struct FIntVector
{
	int                                                X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                        // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      G;                                                        // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      R;                                                        // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      A;                                                        // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              G;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              B;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              A;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

	inline FLinearColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FLinearColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct CoreUObject.Box
// 0x001C
struct FBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      IsValid;                                                  // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.Box2D
// 0x0014
struct FBox2D
{
	struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      bIsValid;                                                 // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.OrientedBox
// 0x003C
struct FOrientedBox
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (CPF_Edit, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector                                     AxisX;                                                    // 0x000C(0x000C) (CPF_Edit, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector                                     AxisY;                                                    // 0x0018(0x000C) (CPF_Edit, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector                                     AxisZ;                                                    // 0x0024(0x000C) (CPF_Edit, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// 0x0014
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutVal;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveFloat
// 0x0018
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// 0x0020
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   OutVal;                                                   // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   ArriveTangent;                                            // 0x000C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   LeaveTangent;                                             // 0x0014(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x0018
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// 0x002C
struct FInterpCurvePointVector
{
	float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OutVal;                                                   // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector
// 0x0018
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// 0x0050
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FQuat                                       ArriveTangent;                                            // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FQuat                                       LeaveTangent;                                             // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveQuat
// 0x0018
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x0050
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTwoVectors                                 OutVal;                                                   // 0x0004(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FTwoVectors                                 ArriveTangent;                                            // 0x001C(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FTwoVectors                                 LeaveTangent;                                             // 0x0034(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x004C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x0018
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// 0x0038
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                OutVal;                                                   // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                ArriveTangent;                                            // 0x0014(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                LeaveTangent;                                             // 0x0024(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// 0x0018
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Transform
// 0x0030
struct alignas(16) FTransform
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     Scale3D;                                                  // 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_SaveGame, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CoreUObject.RandomStream
// 0x0008
struct FRandomStream
{
	int                                                InitialSeed;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
	int                                                Seed;                                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.DateTime
// 0x0008
struct FDateTime
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CoreUObject.FrameNumber
// 0x0004
struct FFrameNumber
{
	int                                                Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.FrameRate
// 0x0008
struct FFrameRate
{
	int                                                Numerator;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Denominator;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.FrameTime
// 0x0008
struct FFrameTime
{
	struct FFrameNumber                                FrameNumber;                                              // 0x0000(0x0004) (CPF_BlueprintVisible)
	float                                              SubFrame;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.QualifiedFrameTime
// 0x0010
struct FQualifiedFrameTime
{
	struct FFrameTime                                  Time;                                                     // 0x0000(0x0008) (CPF_BlueprintVisible)
	struct FFrameRate                                  Rate;                                                     // 0x0008(0x0008) (CPF_BlueprintVisible)
};

// ScriptStruct CoreUObject.Timecode
// 0x0014
struct FTimecode
{
	int                                                Hours;                                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Minutes;                                                  // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Seconds;                                                  // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Frames;                                                   // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDropFrameFormat;                                         // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.Timespan
// 0x0008
struct FTimespan
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CoreUObject.SoftObjectPath
// 0x0018
struct FSoftObjectPath
{
	struct FName                                       AssetPathName;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SubPathString;                                            // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct CoreUObject.SoftClassPath
// 0x0000 (0x0018 - 0x0018)
struct FSoftClassPath : public FSoftObjectPath
{

};

// ScriptStruct CoreUObject.PrimaryAssetType
// 0x0008
struct FPrimaryAssetType
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.PrimaryAssetId
// 0x0010
struct FPrimaryAssetId
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       PrimaryAssetName;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.FallbackStruct
// 0x0001
struct FFallbackStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CoreUObject.FloatRangeBound
// 0x0008
struct FFloatRangeBound
{
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.FloatRange
// 0x0010
struct FFloatRange
{
	struct FFloatRangeBound                            LowerBound;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FFloatRangeBound                            UpperBound;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct CoreUObject.Int32RangeBound
// 0x0008
struct FInt32RangeBound
{
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32Range
// 0x0010
struct FInt32Range
{
	struct FInt32RangeBound                            LowerBound;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FInt32RangeBound                            UpperBound;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct CoreUObject.FloatInterval
// 0x0008
struct FFloatInterval
{
	float                                              Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32Interval
// 0x0008
struct FInt32Interval
{
	int                                                Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.PolyglotTextData
// 0x00B0
struct FPolyglotTextData
{
	ELocalizedTextSourceCategory                       Category;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     NativeCulture;                                            // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Namespace;                                                // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Key;                                                      // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     NativeString;                                             // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TMap<struct FString, struct FString>               LocalizedStrings;                                         // 0x0048(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       CachedText;                                               // 0x0098(0x0018) (CPF_Transient)
};

// ScriptStruct CoreUObject.AutomationEvent
// 0x0038
struct FAutomationEvent
{
	EAutomationEventType                               Type;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Context;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       Artifact;                                                 // 0x0028(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct CoreUObject.AutomationExecutionEntry
// 0x0058
struct FAutomationExecutionEntry
{
	struct FAutomationEvent                            Event;                                                    // 0x0000(0x0038)
	struct FString                                     Filename;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor)
	int                                                LineNumber;                                               // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FDateTime                                   Timestamp;                                                // 0x0050(0x0008)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
