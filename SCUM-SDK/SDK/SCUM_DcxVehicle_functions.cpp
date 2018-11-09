// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_DcxVehicle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleWheelsComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UDcxVehicleWheelsComponent* ADcxVehicle::GetVehicleWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetVehicleWheels");

	struct
	{
		class UDcxVehicleWheelsComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USkeletalMeshComponent* ADcxVehicle::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetMesh");

	struct
	{
		class USkeletalMeshComponent*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Up                             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Forward                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ADcxVehicle::DcxVehicleSetBasisVectors(const struct FVector& Up, const struct FVector& Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors");

	struct
	{
		struct FVector                 Up;
		struct FVector                 Forward;
	} params;

	params.Up = Up;
	params.Forward = Forward;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleDriveComponent4W* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UDcxVehicleDriveComponent4W* ADcxVehicle4W::GetVehicleDrive4W()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W");

	struct
	{
		class UDcxVehicleDriveComponent4W* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Offset                         (CPF_Parm, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::SetWheelOffset(int WheelIndex, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset");

	struct
	{
		int                            WheelIndex;
		struct FVector                 Offset;
	} params;

	params.WheelIndex = WheelIndex;
	params.Offset = Offset;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDcxVehicleWheelData    WheelData                      (CPF_Parm, CPF_OutParm)

void UDcxVehicleWheelsComponent::SetWheelData(int WheelIndex, struct FDcxVehicleWheelData* WheelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData");

	struct
	{
		int                            WheelIndex;
		struct FDcxVehicleWheelData    WheelData;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	if (WheelData != nullptr)
		*WheelData = params.WheelData;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelId                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDcxVehicleTire*         Tire                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::SetTire(int WheelId, class UDcxVehicleTire* Tire)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetTire");

	struct
	{
		int                            WheelId;
		class UDcxVehicleTire*         Tire;
	} params;

	params.WheelId = WheelId;
	params.Tire = Tire;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDcxVehicleSuspensionData SuspensionData                 (CPF_Parm, CPF_OutParm)

void UDcxVehicleWheelsComponent::SetSuspensionData(int WheelIndex, struct FDcxVehicleSuspensionData* SuspensionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData");

	struct
	{
		int                            WheelIndex;
		struct FDcxVehicleSuspensionData SuspensionData;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	if (SuspensionData != nullptr)
		*SuspensionData = params.SuspensionData;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       Mask                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::SetGroupsToIgnore(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore");

	struct
	{
		struct FNavAvoidanceMask       Mask;
	} params;

	params.Mask = Mask;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       Mask                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::SetGroupsToAvoid(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid");

	struct
	{
		struct FNavAvoidanceMask       Mask;
	} params;

	params.Mask = Mask;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Mass                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::SetChassisMass(float Mass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass");

	struct
	{
		float                          Mass;
	} params;

	params.Mass = Mass;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       Mask                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::SetAvoidanceGroup(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup");

	struct
	{
		struct FNavAvoidanceMask       Mask;
	} params;

	params.Mask = Mask;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FDcxAnalogControlArray  AnalogControls                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FDcxGear                CurrentGear                    (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
// struct FDcxGear                TargetGear                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void UDcxVehicleWheelsComponent::ServerUpdateState(const struct FDcxAnalogControlArray& AnalogControls, const struct FDcxGear& CurrentGear, const struct FDcxGear& TargetGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState");

	struct
	{
		struct FDcxAnalogControlArray  AnalogControls;
		struct FDcxGear                CurrentGear;
		struct FDcxGear                TargetGear;
	} params;

	params.AnalogControls = AnalogControls;
	params.CurrentGear = CurrentGear;
	params.TargetGear = TargetGear;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDcxVehicleWheelsComponent::IsWheelDisabled(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled");

	struct
	{
		int                            WheelIndex;
		bool                           ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDcxVehicleWheelState   WheelState                     (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDcxVehicleWheelsComponent::GetWheelState(int WheelIndex, struct FDcxVehicleWheelState* WheelState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState");

	struct
	{
		int                            WheelIndex;
		struct FDcxVehicleWheelState   WheelState;
		bool                           ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	if (WheelState != nullptr)
		*WheelState = params.WheelState;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleWheelsComponent::GetWheelRotationSpeed(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed");

	struct
	{
		int                            WheelIndex;
		float                          ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleWheelsComponent::GetWheelRotationAngle(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle");

	struct
	{
		int                            WheelIndex;
		float                          ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UDcxVehicleWheelsComponent::GetWheelOffset(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset");

	struct
	{
		int                            WheelIndex;
		struct FVector                 ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDcxVehicleWheelData    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDcxVehicleWheelData UDcxVehicleWheelsComponent::GetWheelData(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData");

	struct
	{
		int                            WheelIndex;
		struct FDcxVehicleWheelData    ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDcxVehicleTire*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDcxVehicleTire* UDcxVehicleWheelsComponent::GetTire(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetTire");

	struct
	{
		int                            WheelIndex;
		class UDcxVehicleTire*         ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDcxVehicleSuspensionData ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDcxVehicleSuspensionData UDcxVehicleWheelsComponent::GetSuspensionData(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData");

	struct
	{
		int                            WheelIndex;
		struct FDcxVehicleSuspensionData ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleWheelsRawInput* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDcxVehicleWheelsRawInput* UDcxVehicleWheelsComponent::GetRawInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput");

	struct
	{
		class UDcxVehicleWheelsRawInput* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UDcxVehicleWheelsComponent::GetNumWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleWheelsComponent::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleWheelsComponent::GetChassisMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UDcxVehicleWheelsComponent::GetBoneName(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName");

	struct
	{
		int                            WheelIndex;
		struct FName                   ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// unsigned char                  Control                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleWheelsComponent::GetAnalogControl(unsigned char Control)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl");

	struct
	{
		unsigned char                  Control;
		float                          ReturnValue;
	} params;

	params.Control = Control;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::EnableWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel");

	struct
	{
		int                            WheelIndex;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::EnableAvoidance(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance");

	struct
	{
		bool                           bEnabled;
	} params;

	params.bEnabled = bEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleWheelsComponent::DisableWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel");

	struct
	{
		int                            WheelIndex;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NewGear                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bImmediate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveComponent::SetTargetGear(int NewGear, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear");

	struct
	{
		int                            NewGear;
		bool                           bImmediate;
	} params;

	params.NewGear = NewGear;
	params.bImmediate = bImmediate;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EDcxVehicleGearbox> NewGearboxType                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveComponent::SetGearboxType(TEnumAsByte<EDcxVehicleGearbox> NewGearboxType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType");

	struct
	{
		TEnumAsByte<EDcxVehicleGearbox> NewGearboxType;
	} params;

	params.NewGearboxType = NewGearboxType;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDcxVehicleGearboxData  NewGearboxData                 (CPF_Parm, CPF_OutParm)

void UDcxVehicleDriveComponent::SetGearboxData(struct FDcxVehicleGearboxData* NewGearboxData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData");

	struct
	{
		struct FDcxVehicleGearboxData  NewGearboxData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewGearboxData != nullptr)
		*NewGearboxData = params.NewGearboxData;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          RPM                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveComponent::SetEngineRotationSpeed(float RPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed");

	struct
	{
		float                          RPM;
	} params;

	params.RPM = RPM;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDcxVehicleEngineData   NewEngineData                  (CPF_Parm, CPF_OutParm)

void UDcxVehicleDriveComponent::SetEngineData(struct FDcxVehicleEngineData* NewEngineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData");

	struct
	{
		struct FDcxVehicleEngineData   NewEngineData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewEngineData != nullptr)
		*NewEngineData = params.NewEngineData;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDcxVehicleClutchData   NewClutchData                  (CPF_Parm, CPF_OutParm)

void UDcxVehicleDriveComponent::SetClutchData(struct FDcxVehicleClutchData* NewClutchData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData");

	struct
	{
		struct FDcxVehicleClutchData   NewClutchData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewClutchData != nullptr)
		*NewClutchData = params.NewClutchData;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UDcxVehicleDriveComponent::GetTargetGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<EDcxVehicleGearbox> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EDcxVehicleGearbox> UDcxVehicleDriveComponent::GetGearboxType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType");

	struct
	{
		TEnumAsByte<EDcxVehicleGearbox> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FDcxVehicleGearboxData  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDcxVehicleGearboxData UDcxVehicleDriveComponent::GetGearboxData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData");

	struct
	{
		struct FDcxVehicleGearboxData  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveComponent::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FDcxVehicleEngineData   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDcxVehicleEngineData UDcxVehicleDriveComponent::GetEngineData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData");

	struct
	{
		struct FDcxVehicleEngineData   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UDcxVehicleDriveComponent::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FDcxVehicleClutchData   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDcxVehicleClutchData UDcxVehicleDriveComponent::GetClutchData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData");

	struct
	{
		struct FDcxVehicleClutchData   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FDcxVehicleDifferentialData4W NewDifferentialData            (CPF_Parm, CPF_OutParm)

void UDcxVehicleDriveComponent4W::SetDifferentialData(struct FDcxVehicleDifferentialData4W* NewDifferentialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData");

	struct
	{
		struct FDcxVehicleDifferentialData4W NewDifferentialData;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewDifferentialData != nullptr)
		*NewDifferentialData = params.NewDifferentialData;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleDriveRawInput4W* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDcxVehicleDriveRawInput4W* UDcxVehicleDriveComponent4W::GetRawInput4W()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W");

	struct
	{
		class UDcxVehicleDriveRawInput4W* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FDcxVehicleDifferentialData4W ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDcxVehicleDifferentialData4W UDcxVehicleDriveComponent4W::GetDifferentialData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData");

	struct
	{
		struct FDcxVehicleDifferentialData4W ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsDriven                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveComponentNW::SetDrivenWheel(int WheelIndex, bool bIsDriven)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel");

	struct
	{
		int                            WheelIndex;
		bool                           bIsDriven;
	} params;

	params.WheelIndex = WheelIndex;
	params.bIsDriven = bIsDriven;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDcxVehicleDriveComponentNW::IsDrivenWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel");

	struct
	{
		int                            WheelIndex;
		bool                           ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleDriveRawInputNW* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDcxVehicleDriveRawInputNW* UDcxVehicleDriveComponentNW::GetRawInputNW()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW");

	struct
	{
		class UDcxVehicleDriveRawInputNW* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EDcxVehicleDriveControlModelTank> ControlModel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveComponentTank::SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank> ControlModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel");

	struct
	{
		TEnumAsByte<EDcxVehicleDriveControlModelTank> ControlModel;
	} params;

	params.ControlModel = ControlModel;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleDriveRawInputTank* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDcxVehicleDriveRawInputTank* UDcxVehicleDriveComponentTank::GetRawInputTank()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank");

	struct
	{
		class UDcxVehicleDriveRawInputTank* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<EDcxVehicleDriveControlModelTank> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EDcxVehicleDriveControlModelTank> UDcxVehicleDriveComponentTank::GetDriveModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel");

	struct
	{
		TEnumAsByte<EDcxVehicleDriveControlModelTank> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Throttle                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleWheelsRawInput::SetThrottle(float Throttle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle");

	struct
	{
		float                          Throttle;
	} params;

	params.Throttle = Throttle;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleWheelsRawInput::GetThrottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bGearUpPressed                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInput::SetGearUp(bool bGearUpPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp");

	struct
	{
		bool                           bGearUpPressed;
	} params;

	params.bGearUpPressed = bGearUpPressed;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bGearDownPressed               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInput::SetGearDown(bool bGearDownPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown");

	struct
	{
		bool                           bGearDownPressed;
	} params;

	params.bGearDownPressed = bGearDownPressed;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Clutch                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInput::SetClutch(float Clutch)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch");

	struct
	{
		float                          Clutch;
	} params;

	params.Clutch = Clutch;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDcxVehicleDriveRawInput::GetGearUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UDcxVehicleDriveRawInput::GetGearDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveRawInput::GetClutch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Steer                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetSteer(float Steer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer");

	struct
	{
		float                          Steer;
	} params;

	params.Steer = Steer;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Handbrake                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetHandbrake(float Handbrake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake");

	struct
	{
		float                          Handbrake;
	} params;

	params.Handbrake = Handbrake;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Brake                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake");

	struct
	{
		float                          Brake;
	} params;

	params.Brake = Brake;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveRawInput4W::GetSteer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveRawInput4W::GetHandbrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveRawInput4W::GetBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Thrust                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetRightThrust(float Thrust)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust");

	struct
	{
		float                          Thrust;
	} params;

	params.Thrust = Thrust;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Brake                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetRightBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake");

	struct
	{
		float                          Brake;
	} params;

	params.Brake = Brake;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Thrust                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetLeftThrust(float Thrust)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust");

	struct
	{
		float                          Thrust;
	} params;

	params.Thrust = Thrust;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Brake                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetLeftBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake");

	struct
	{
		float                          Brake;
	} params;

	params.Brake = Brake;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetRightThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetRightBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetLeftThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetLeftBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleNoDriveComponent* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UDcxVehicleNoDriveComponent* ADcxVehicleNoDrive::GetVehicleNoDrive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive");

	struct
	{
		class UDcxVehicleNoDriveComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SteerAngle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetSteerAngle(int WheelIndex, float SteerAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle");

	struct
	{
		int                            WheelIndex;
		float                          SteerAngle;
	} params;

	params.WheelIndex = WheelIndex;
	params.SteerAngle = SteerAngle;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DriveTorque                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetDriveTorque(int WheelIndex, float DriveTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque");

	struct
	{
		int                            WheelIndex;
		float                          DriveTorque;
	} params;

	params.WheelIndex = WheelIndex;
	params.DriveTorque = DriveTorque;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BrakeTorque                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetBrakeTorque(int WheelIndex, float BrakeTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque");

	struct
	{
		int                            WheelIndex;
		float                          BrakeTorque;
	} params;

	params.WheelIndex = WheelIndex;
	params.BrakeTorque = BrakeTorque;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetSteerAngle(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle");

	struct
	{
		int                            WheelIndex;
		float                          ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleNoDriveRawInput* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDcxVehicleNoDriveRawInput* UDcxVehicleNoDriveComponent::GetRawInputND()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND");

	struct
	{
		class UDcxVehicleNoDriveRawInput* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetDriveTorque(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque");

	struct
	{
		int                            WheelIndex;
		float                          ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            WheelIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetBrakeTorque(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque");

	struct
	{
		int                            WheelIndex;
		float                          ReturnValue;
	} params;

	params.WheelIndex = WheelIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewSteer                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleNoDriveRawInput::SetSteer(float NewSteer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer");

	struct
	{
		float                          NewSteer;
	} params;

	params.NewSteer = NewSteer;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewBrake                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDcxVehicleNoDriveRawInput::SetBrake(float NewBrake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake");

	struct
	{
		float                          NewBrake;
	} params;

	params.NewBrake = NewBrake;

	UObject::ProcessEvent(fn, &params);
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleNoDriveRawInput::GetSteer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UDcxVehicleNoDriveRawInput::GetBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleDriveComponentNW* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UDcxVehicleDriveComponentNW* ADcxVehicleNW::GetVehicleDriveNW()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW");

	struct
	{
		class UDcxVehicleDriveComponentNW* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDcxVehicleDriveComponentTank* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UDcxVehicleDriveComponentTank* ADcxVehicleTank::GetVehicleDriveTank()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank");

	struct
	{
		class UDcxVehicleDriveComponentTank* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
