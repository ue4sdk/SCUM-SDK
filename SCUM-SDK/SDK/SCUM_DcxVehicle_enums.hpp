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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
