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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
