#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DcxVehicle.EDcxVehicleClutchAccuracyMode
enum class EDcxVehicleClutchAccuracyMode : uint8_t
{
	EDcxVehicleClutchAccuracyMode__Estimate = 0,
	EDcxVehicleClutchAccuracyMode__BestPossible = 1,
	EDcxVehicleClutchAccuracyMode__EDcxVehicleClutchAccuracyMode_MAX = 2
};


// Enum DcxVehicle.EDcxVehicleDifferential4W
enum class EDcxVehicleDifferential4W : uint8_t
{
	EDcxVehicleDifferential4W__LS_4WD = 0,
	EDcxVehicleDifferential4W__LS_FrontWD = 1,
	EDcxVehicleDifferential4W__LS_RearWD = 2,
	EDcxVehicleDifferential4W__Open_4WD = 3,
	EDcxVehicleDifferential4W__Open_FrontWD = 4,
	EDcxVehicleDifferential4W__Open_RearWD = 5,
	EDcxVehicleDifferential4W__EDcxVehicleDifferential4W_MAX = 6
};


// Enum DcxVehicle.EDcxVehicleWheelOrder4W
enum class EDcxVehicleWheelOrder4W : uint8_t
{
	EDcxVehicleWheelOrder4W__FrontLeft = 0,
	EDcxVehicleWheelOrder4W__FrontRight = 1,
	EDcxVehicleWheelOrder4W__RearLeft = 2,
	EDcxVehicleWheelOrder4W__RearRight = 3,
	EDcxVehicleWheelOrder4W__EDcxVehicleWheelOrder4W_MAX = 4
};


// Enum DcxVehicle.EDcxVehicleDriveControl4W
enum class EDcxVehicleDriveControl4W : uint8_t
{
	EDcxVehicleDriveControl4W__Throttle = 0,
	EDcxVehicleDriveControl4W__Brake = 1,
	EDcxVehicleDriveControl4W__Handbrake = 2,
	EDcxVehicleDriveControl4W__Steer = 3,
	EDcxVehicleDriveControl4W__Clutch = 4,
	EDcxVehicleDriveControl4W__NumControls = 5,
	EDcxVehicleDriveControl4W__EDcxVehicleDriveControl4W_MAX = 6
};


// Enum DcxVehicle.EDcxVehicleDriveControlNW
enum class EDcxVehicleDriveControlNW : uint8_t
{
	EDcxVehicleDriveControlNW__Throttle = 0,
	EDcxVehicleDriveControlNW__Brake = 1,
	EDcxVehicleDriveControlNW__Handbrake = 2,
	EDcxVehicleDriveControlNW__Steer = 3,
	EDcxVehicleDriveControlNW__Clutch = 4,
	EDcxVehicleDriveControlNW__NumControls = 5,
	EDcxVehicleDriveControlNW__EDcxVehicleDriveControlNW_MAX = 6
};


// Enum DcxVehicle.EDcxVehicleDriveControlModelTank
enum class EDcxVehicleDriveControlModelTank : uint8_t
{
	EDcxVehicleDriveControlModelTank__Standard = 0,
	EDcxVehicleDriveControlModelTank__Special = 1,
	EDcxVehicleDriveControlModelTank__EDcxVehicleDriveControlModelTank_MAX = 2
};


// Enum DcxVehicle.EDcxVehicleDriveControlTank
enum class EDcxVehicleDriveControlTank : uint8_t
{
	EDcxVehicleDriveControlTank__Throttle = 0,
	EDcxVehicleDriveControlTank__BrakeLeft = 1,
	EDcxVehicleDriveControlTank__BrakeRight = 2,
	EDcxVehicleDriveControlTank__ThrustLeft = 3,
	EDcxVehicleDriveControlTank__ThrustRight = 4,
	EDcxVehicleDriveControlTank__Clutch = 5,
	EDcxVehicleDriveControlTank__NumControls = 6,
	EDcxVehicleDriveControlTank__EDcxVehicleDriveControlTank_MAX = 7
};


// Enum DcxVehicle.EDcxVehicleGearbox
enum class EDcxVehicleGearbox : uint8_t
{
	EDcxVehicleGearbox__Automatic  = 0,
	EDcxVehicleGearbox__SemiAutomatic = 1,
	EDcxVehicleGearbox__Manual     = 2,
	EDcxVehicleGearbox__EDcxVehicleGearbox_MAX = 3
};


// Enum DcxVehicle.EDcxVehicleNoDriveControl
enum class EDcxVehicleNoDriveControl : uint8_t
{
	EDcxVehicleNoDriveControl__Throttle = 0,
	EDcxVehicleNoDriveControl__Brake = 1,
	EDcxVehicleNoDriveControl__Steer = 2,
	EDcxVehicleNoDriveControl__NumControls = 3,
	EDcxVehicleNoDriveControl__EDcxVehicleNoDriveControl_MAX = 4
};


// Enum DcxVehicle.EDcxVehicleWheelSweep
enum class EDcxVehicleWheelSweep : uint8_t
{
	EDcxVehicleWheelSweep__Both    = 0,
	EDcxVehicleWheelSweep__Simple  = 1,
	EDcxVehicleWheelSweep__Complex = 2,
	EDcxVehicleWheelSweep__EDcxVehicleWheelSweep_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DcxVehicle.DcxVehicleWheelData
// 0x0020
struct FDcxVehicleWheelData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRate;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBrakeTorque;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHandBrakeTorque;                                       // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSteer;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ToeAngle;                                                 // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxVehicleSuspensionData
// 0x0020
struct FDcxVehicleSuspensionData
{
	float                                              NaturalFrequency;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringDamperRatio;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxCompression;                                           // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDroop;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceOffset;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CamberAtRest;                                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CamberAtMaxCompression;                                   // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CamberAtMaxDroop;                                         // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxVehicleWheelConfiguration
// 0x0078
struct FDcxVehicleWheelConfiguration
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UStaticMesh*                                 CollisionMesh;                                            // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePresetShape;                                          // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FDcxVehicleWheelData                        WheelData;                                                // 0x0024(0x0020) (CPF_Edit)
	struct FDcxVehicleSuspensionData                   SuspensionData;                                           // 0x0044(0x0020) (CPF_Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	class UDcxVehicleTire*                             Tire;                                                     // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDriven;                                                // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EDcxVehicleWheelSweep>                 SweepType;                                                // 0x0071(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
};

// ScriptStruct DcxVehicle.DcxVehicleTireLoadFilterData
// 0x0010
struct FDcxVehicleTireLoadFilterData
{
	float                                              MinNormalizedLoad;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinFilteredNormalizedLoad;                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxNormalizedLoad;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFilteredNormalizedLoad;                                // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxVehicleDriveInputRate
// 0x0008
struct FDcxVehicleDriveInputRate
{
	float                                              RiseRate;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FallRate;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxAnalogControlArray
// 0x0010
struct FDcxAnalogControlArray
{
	TArray<float>                                      Items;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct DcxVehicle.DcxGear
// 0x0004
struct FDcxGear
{
	int                                                GearNum;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxVehicleDriveState
// 0x0018
struct FDcxVehicleDriveState
{
	struct FDcxAnalogControlArray                      AnalogControls;                                           // 0x0000(0x0010) (CPF_Transient)
	struct FDcxGear                                    CurrentGear;                                              // 0x0010(0x0004) (CPF_Transient)
	struct FDcxGear                                    TargetGear;                                               // 0x0014(0x0004) (CPF_Transient)
};

// ScriptStruct DcxVehicle.DcxVehicleWheelState
// 0x00A0
struct FDcxVehicleWheelState
{
	struct FVector                                     SuspensionLineStart;                                      // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     SuspensionLineDirection;                                  // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              SuspensionLineLength;                                     // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x001C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class UPhysicalMaterial*                           TireSurfaceMaterial;                                      // 0x0020(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TireContactPoint;                                         // 0x0028(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     TireContactNormal;                                        // 0x0034(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              TireFriction;                                             // 0x0040(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionJounce;                                         // 0x0044(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionSpringForce;                                    // 0x0048(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TireLongitudinalDirection;                                // 0x004C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     TireLateralDirection;                                     // 0x0058(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              LongitudinalSlip;                                         // 0x0064(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LateralSlip;                                              // 0x0068(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SteerAngle;                                               // 0x006C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0070(0x0030) MISSED OFFSET
};

// ScriptStruct DcxVehicle.DcxVehicleEngineData
// 0x0090
struct FDcxVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                              // 0x0000(0x0078) (CPF_Edit)
	float                                              MOI;                                                      // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IdleRPM;                                                  // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRPM;                                                   // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateFullThrottle;                                  // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchEngaged;                     // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchDisengaged;                  // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxVehicleGearData
// 0x000C
struct FDcxVehicleGearData
{
	float                                              Ratio;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DownRatio;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpRatio;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxVehicleGearboxData
// 0x0030
struct FDcxVehicleGearboxData
{
	TEnumAsByte<EDcxVehicleGearbox>                    Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FinalRatio;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SwitchTime;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FDcxVehicleGearData>                 ForwardGears;                                             // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              ReverseGearRatio;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Latency;                                                  // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NeutralGearUpRatio;                                       // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct DcxVehicle.DcxVehicleClutchData
// 0x0010
struct FDcxVehicleClutchData
{
	float                                              BitePoint;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EDcxVehicleClutchAccuracyMode>         AccuracyMode;                                             // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           EstimateIterations;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxVehicleDifferentialData4W
// 0x001C
struct FDcxVehicleDifferentialData4W
{
	TEnumAsByte<EDcxVehicleDifferential4W>             DifferentialType;                                         // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FrontRearSplit;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontLeftRightSplit;                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RearLeftRightSplit;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CenterBias;                                               // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontBias;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RearBias;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct DcxVehicle.DcxDrivableSurfaceToTireFrictionPair
// 0x0010
struct FDcxDrivableSurfaceToTireFrictionPair
{
	class UPhysicalMaterial*                           SurfaceMaterial;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct DcxVehicle.DcxAnimNodeWheelSimulator
// 0x0018 (0x0130 - 0x0118)
struct FDcxAnimNodeWheelSimulator : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0118(0x0018) MISSED OFFSET
};

// ScriptStruct DcxVehicle.DcxMath
// 0x0001
struct FDcxMath
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct DcxVehicle.DcxVehicleAnimInstanceProxy
// 0x0010 (0x05F0 - 0x05E0)
struct FDcxVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x05E0(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
