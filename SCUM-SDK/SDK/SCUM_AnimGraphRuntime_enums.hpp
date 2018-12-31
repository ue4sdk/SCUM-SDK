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

// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None  = 0,
	EConstraintOffsetOption__Offset_RefPose = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX = 2
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add     = 0,
	EModifyCurveApplyMode__Scale   = 1,
	EModifyCurveApplyMode__Blend   = 2,
	EModifyCurveApplyMode__WeightedMovingAverage = 3,
	EModifyCurveApplyMode__RemapCurve = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses  = 0,
	EPoseDriverOutput__DriveCurves = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation    = 0,
	EPoseDriverSource__Translation = 1,
	EPoseDriverSource__EPoseDriverSource_MAX = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__Translation   = 2,
	EPoseDriverType__EPoseDriverType_MAX = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot = 0,
	ESnapshotSourceMode__SnapshotPin = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue = 0,
	EScaleChainInitialLength__Distance = 1,
	EScaleChainInitialLength__ChainLength = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__X             = 0,
	ESplineBoneAxis__Y             = 1,
	ESplineBoneAxis__Z             = 2,
	ESplineBoneAxis__ESplineBoneAxis_MAX = 3
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean  = 0,
	ERBFDistanceMethod__Quaternion = 1,
	ERBFDistanceMethod__SwingAngle = 2,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX = 3
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian     = 0,
	ERBFFunctionType__Exponential  = 1,
	ERBFFunctionType__Linear       = 2,
	ERBFFunctionType__Cubic        = 3,
	ERBFFunctionType__Quintic      = 4,
	ERBFFunctionType__ERBFFunctionType_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
