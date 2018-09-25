#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Tracking     = 0,
	EARTrackingState__NotTracking  = 1,
	EARTrackingState__StoppedTracking = 2,
	EARTrackingState__EARTrackingState_MAX = 3
};


// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX = 2
};


// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None   = 0,
	EARLightEstimationMode__AmbientLightEstimate = 1,
	EARLightEstimationMode__DirectionalLightEstimate = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX = 3
};


// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None    = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection = 1,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX = 2
};


// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	EARSessionType__None           = 0,
	EARSessionType__Orientation    = 1,
	EARSessionType__World          = 2,
	EARSessionType__Face           = 3,
	EARSessionType__EARSessionType_MAX = 4
};


// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft = 0,
	EARFaceBlendShape__EyeLookDownLeft = 1,
	EARFaceBlendShape__EyeLookInLeft = 2,
	EARFaceBlendShape__EyeLookOutLeft = 3,
	EARFaceBlendShape__EyeLookUpLeft = 4,
	EARFaceBlendShape__EyeSquintLeft = 5,
	EARFaceBlendShape__EyeWideLeft = 6,
	EARFaceBlendShape__EyeBlinkRight = 7,
	EARFaceBlendShape__EyeLookDownRight = 8,
	EARFaceBlendShape__EyeLookInRight = 9,
	EARFaceBlendShape__EyeLookOutRight = 10,
	EARFaceBlendShape__EyeLookUpRight = 11,
	EARFaceBlendShape__EyeSquintRight = 12,
	EARFaceBlendShape__EyeWideRight = 13,
	EARFaceBlendShape__JawForward  = 14,
	EARFaceBlendShape__JawLeft     = 15,
	EARFaceBlendShape__JawRight    = 16,
	EARFaceBlendShape__JawOpen     = 17,
	EARFaceBlendShape__MouthClose  = 18,
	EARFaceBlendShape__MouthFunnel = 19,
	EARFaceBlendShape__MouthPucker = 20,
	EARFaceBlendShape__MouthLeft   = 21,
	EARFaceBlendShape__MouthRight  = 22,
	EARFaceBlendShape__MouthSmileLeft = 23,
	EARFaceBlendShape__MouthSmileRight = 24,
	EARFaceBlendShape__MouthFrownLeft = 25,
	EARFaceBlendShape__MouthFrownRight = 26,
	EARFaceBlendShape__MouthDimpleLeft = 27,
	EARFaceBlendShape__MouthDimpleRight = 28,
	EARFaceBlendShape__MouthStretchLeft = 29,
	EARFaceBlendShape__MouthStretchRight = 30,
	EARFaceBlendShape__MouthRollLower = 31,
	EARFaceBlendShape__MouthRollUpper = 32,
	EARFaceBlendShape__MouthShrugLower = 33,
	EARFaceBlendShape__MouthShrugUpper = 34,
	EARFaceBlendShape__MouthPressLeft = 35,
	EARFaceBlendShape__MouthPressRight = 36,
	EARFaceBlendShape__MouthLowerDownLeft = 37,
	EARFaceBlendShape__MouthLowerDownRight = 38,
	EARFaceBlendShape__MouthUpperUpLeft = 39,
	EARFaceBlendShape__MouthUpperUpRight = 40,
	EARFaceBlendShape__BrowDownLeft = 41,
	EARFaceBlendShape__BrowDownRight = 42,
	EARFaceBlendShape__BrowInnerUp = 43,
	EARFaceBlendShape__BrowOuterUpLeft = 44,
	EARFaceBlendShape__BrowOuterUpRight = 45,
	EARFaceBlendShape__CheekPuff   = 46,
	EARFaceBlendShape__CheekSquintLeft = 47,
	EARFaceBlendShape__CheekSquintRight = 48,
	EARFaceBlendShape__NoseSneerLeft = 49,
	EARFaceBlendShape__NoseSneerRight = 50,
	EARFaceBlendShape__MAX         = 51
};


// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative = 0,
	EARFaceTrackingDirection__FaceMirrored = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX = 2
};


// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted   = 0,
	EARSessionStatus__Running      = 1,
	EARSessionStatus__NotSupported = 2,
	EARSessionStatus__FatalError   = 3,
	EARSessionStatus__PermissionNotGranted = 4,
	EARSessionStatus__UnsupportedConfiguration = 5,
	EARSessionStatus__Other        = 6,
	EARSessionStatus__EARSessionStatus_MAX = 7
};


// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking = 0,
	EARTrackingQuality__OrientationOnly = 1,
	EARTrackingQuality__OrientationAndPosition = 2,
	EARTrackingQuality__EARTrackingQuality_MAX = 3
};


// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None     = 0,
	EARLineTraceChannels__FeaturePoint = 1,
	EARLineTraceChannels__GroundPlane = 2,
	EARLineTraceChannels__PlaneUsingExtent = 3,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels__EARLineTraceChannels_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AugmentedReality.ARTraceResult
// 0x0060
struct FARTraceResult
{
	float                                              DistanceFromCamera;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EARLineTraceChannels                               TraceChannel;                                             // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0005(0x000B) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0010(0x0030) (CPF_IsPlainOldData)
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARSessionStatus
// 0x0018
struct FARSessionStatus
{
	struct FString                                     AdditionalInfo;                                           // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	EARSessionStatus                                   Status;                                                   // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
