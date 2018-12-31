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

// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8_t
{
	SimpleAndComplex               = 0,
	Simple                         = 1,
	Complex                        = 2,
	EWheelSweepType_MAX            = 3
};


// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
