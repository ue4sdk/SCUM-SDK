#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AppleVision.EDetectedFaceFeatureType
enum class EDetectedFaceFeatureType : uint8_t
{
	EDetectedFaceFeatureType__Unkown = 0,
	EDetectedFaceFeatureType__FaceContour = 1,
	EDetectedFaceFeatureType__InnerLips = 2,
	EDetectedFaceFeatureType__LeftEye = 3,
	EDetectedFaceFeatureType__LeftEyebrow = 4,
	EDetectedFaceFeatureType__LeftPupil = 5,
	EDetectedFaceFeatureType__MedianLine = 6,
	EDetectedFaceFeatureType__Nose = 7,
	EDetectedFaceFeatureType__NoseCrest = 8,
	EDetectedFaceFeatureType__OuterLips = 9,
	EDetectedFaceFeatureType__RightEye = 10,
	EDetectedFaceFeatureType__RightEyebrow = 11,
	EDetectedFaceFeatureType__RightPupil = 12,
	EDetectedFaceFeatureType__EDetectedFaceFeatureType_MAX = 13
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleVision.DetectedFeature
// 0x0004
struct FDetectedFeature
{
	float                                              Confidence;                                               // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct AppleVision.DetectedFeatureRegion
// 0x0014 (0x0018 - 0x0004)
struct FDetectedFeatureRegion : public FDetectedFeature
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           Points;                                                   // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct AppleVision.DetectedFeature2D
// 0x0014 (0x0018 - 0x0004)
struct FDetectedFeature2D : public FDetectedFeature
{
	struct FBox2D                                      BoundingBox;                                              // 0x0004(0x0014) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct AppleVision.DetectedFaceFeature2D
// 0x0004 (0x001C - 0x0018)
struct FDetectedFaceFeature2D : public FDetectedFeature2D
{
	EDetectedFaceFeatureType                           FeatureType;                                              // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct AppleVision.DetectedFaceFeatureRegion
// 0x0008 (0x0020 - 0x0018)
struct FDetectedFaceFeatureRegion : public FDetectedFeatureRegion
{
	EDetectedFaceFeatureType                           FeatureType;                                              // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AppleVision.DetectedFace
// 0x0038 (0x0050 - 0x0018)
struct FDetectedFace : public FDetectedFeatureRegion
{
	struct FBox2D                                      BoundingBox;                                              // 0x0018(0x0014) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FDetectedFaceFeature2D>              Features;                                                 // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<struct FDetectedFaceFeatureRegion>          FeatureRegions;                                           // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct AppleVision.FaceDetectionResult
// 0x0010
struct FFaceDetectionResult
{
	TArray<struct FDetectedFace>                       DetectedFaces;                                            // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
