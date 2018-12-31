// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_PhysXVehicles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bUseAuto                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears");

	struct
	{
		bool                           bUseAuto;
	} params;

	params.bUseAuto = bUseAuto;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Throttle                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput");

	struct
	{
		float                          Throttle;
	} params;

	params.Throttle = Throttle;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            GearNum                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bImmediate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetTargetGear(int GearNum, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear");

	struct
	{
		int                            GearNum;
		bool                           bImmediate;
	} params;

	params.GearNum = GearNum;
	params.bImmediate = bImmediate;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Steering                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput");

	struct
	{
		float                          Steering;
	} params;

	params.Steering = Steering;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewHandbrake                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput");

	struct
	{
		bool                           bNewHandbrake;
	} params;

	params.bNewHandbrake = bNewHandbrake;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask");

	struct
	{
		struct FNavAvoidanceMask       GroupMask;
	} params;

	params.GroupMask = GroupMask;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore");

	struct
	{
		int                            GroupFlags;
	} params;

	params.GroupFlags = GroupFlags;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask");

	struct
	{
		struct FNavAvoidanceMask       GroupMask;
	} params;

	params.GroupMask = GroupMask;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid");

	struct
	{
		int                            GroupFlags;
	} params;

	params.GroupFlags = GroupFlags;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewGearUp                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp");

	struct
	{
		bool                           bNewGearUp;
	} params;

	params.bNewGearUp = bNewGearUp;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bNewGearDown                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown");

	struct
	{
		bool                           bNewGearDown;
	} params;

	params.bNewGearDown = bNewGearDown;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Brake                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput");

	struct
	{
		float                          Brake;
	} params;

	params.Brake = Brake;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask");

	struct
	{
		struct FNavAvoidanceMask       GroupMask;
	} params;

	params.GroupMask = GroupMask;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int GroupFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup");

	struct
	{
		int                            GroupFlags;
	} params;

	params.GroupFlags = GroupFlags;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled");

	struct
	{
		bool                           bEnable;
	} params;

	params.bEnable = bEnable;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// float                          InSteeringInput                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InThrottleInput                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InBrakeInput                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InHandbrakeInput               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentGear                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState");

	struct
	{
		float                          InSteeringInput;
		float                          InThrottleInput;
		float                          InBrakeInput;
		float                          InHandbrakeInput;
		int                            CurrentGear;
	} params;

	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InBrakeInput = InBrakeInput;
	params.InHandbrakeInput = InHandbrakeInput;
	params.CurrentGear = CurrentGear;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWheeledVehicleMovementComponent::GetTargetGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SteerAngle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle");

	struct
	{
		float                          SteerAngle;
		int                            WheelIndex;
	} params;

	params.SteerAngle = SteerAngle;
	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DriveTorque                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque");

	struct
	{
		float                          DriveTorque;
		int                            WheelIndex;
	} params;

	params.DriveTorque = DriveTorque;
	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          BrakeTorque                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque");

	struct
	{
		float                          BrakeTorque;
		int                            WheelIndex;
	} params;

	params.BrakeTorque = BrakeTorque;
	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AWheeledVehicle*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleAnimInstance.GetVehicle");

	struct
	{
		class AWheeledVehicle*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.IsInAir
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVehicleWheel::IsInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.IsInAir");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVehicleWheel::GetSuspensionOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVehicleWheel::GetSteerAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSteerAngle");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UVehicleWheel::GetRotationAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetRotationAngle");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
