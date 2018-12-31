// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_HeadMountedDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewScale                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale");

	struct
	{
		class UObject*                 WorldContext;
		float                          NewScale;
	} params;

	params.WorldContext = WorldContext;
	params.NewScale = NewScale;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHMDTrackingOrigin> Origin                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin");

	struct
	{
		TEnumAsByte<EHMDTrackingOrigin> Origin;
	} params;

	params.Origin = Origin;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                InTexture                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(class UTexture* InTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture");

	struct
	{
		class UTexture*                InTexture;
	} params;

	params.InTexture = InTexture;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               EyeRectMin                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               EyeRectMax                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               TextureRectMin                 (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               TextureRectMax                 (CPF_Parm, CPF_IsPlainOldData)
// bool                           bDrawEyeFirst                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bClearBlack                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout");

	struct
	{
		struct FVector2D               EyeRectMin;
		struct FVector2D               EyeRectMax;
		struct FVector2D               TextureRectMin;
		struct FVector2D               TextureRectMax;
		bool                           bDrawEyeFirst;
		bool                           bClearBlack;
	} params;

	params.EyeRectMin = EyeRectMin;
	params.EyeRectMax = EyeRectMax;
	params.TextureRectMin = TextureRectMin;
	params.TextureRectMax = TextureRectMax;
	params.bDrawEyeFirst = bDrawEyeFirst;
	params.bClearBlack = bClearBlack;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESpectatorScreenMode           Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode");

	struct
	{
		ESpectatorScreenMode           Mode;
	} params;

	params.Mode = Mode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Near                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Far                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes");

	struct
	{
		float                          Near;
		float                          Far;
	} params;

	params.Near = Near;
	params.Far = Far;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Yaw                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EOrientPositionSelector> Options                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition");

	struct
	{
		float                          Yaw;
		TEnumAsByte<EOrientPositionSelector> Options;
	} params;

	params.Yaw = Yaw;
	params.Options = Options;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FXRDeviceId             XRDeviceId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking");

	struct
	{
		struct FXRDeviceId             XRDeviceId;
		bool                           ReturnValue;
	} params;

	params.XRDeviceId = XRDeviceId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale");

	struct
	{
		class UObject*                 WorldContext;
		float                          ReturnValue;
	} params;

	params.WorldContext = WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           bUseFocus                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bHasFocus                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState");

	struct
	{
		bool                           bUseFocus;
		bool                           bHasFocus;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bUseFocus != nullptr)
		*bUseFocus = params.bUseFocus;
	if (bHasFocus != nullptr)
		*bHasFocus = params.bHasFocus;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform");

	struct
	{
		class UObject*                 WorldContext;
		struct FTransform              ReturnValue;
	} params;

	params.WorldContext = WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Origin                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          LeftFOV                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RightFOV                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          TopFOV                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BottomFOV                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NearPlane                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FarPlane                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsActive                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters");

	struct
	{
		struct FVector                 Origin;
		struct FRotator                Rotation;
		float                          LeftFOV;
		float                          RightFOV;
		float                          TopFOV;
		float                          BottomFOV;
		float                          Distance;
		float                          NearPlane;
		float                          FarPlane;
		bool                           IsActive;
		int                            Index;
	} params;

	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (LeftFOV != nullptr)
		*LeftFOV = params.LeftFOV;
	if (RightFOV != nullptr)
		*RightFOV = params.RightFOV;
	if (TopFOV != nullptr)
		*TopFOV = params.TopFOV;
	if (BottomFOV != nullptr)
		*BottomFOV = params.BottomFOV;
	if (Distance != nullptr)
		*Distance = params.Distance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EHMDTrackingOrigin> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EHMDTrackingOrigin> UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin");

	struct
	{
		TEnumAsByte<EHMDTrackingOrigin> ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UHeadMountedDisplayFunctionLibrary::GetScreenPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage");

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 CameraOrigin                   (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FRotator                CameraRotation                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          HFOV                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          VFOV                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CameraDistance                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NearPlane                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FarPlane                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters");

	struct
	{
		struct FVector                 CameraOrigin;
		struct FRotator                CameraRotation;
		float                          HFOV;
		float                          VFOV;
		float                          CameraDistance;
		float                          NearPlane;
		float                          FarPlane;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (CameraOrigin != nullptr)
		*CameraOrigin = params.CameraOrigin;
	if (CameraRotation != nullptr)
		*CameraRotation = params.CameraRotation;
	if (HFOV != nullptr)
		*HFOV = params.HFOV;
	if (VFOV != nullptr)
		*VFOV = params.VFOV;
	if (CameraDistance != nullptr)
		*CameraDistance = params.CameraDistance;
	if (NearPlane != nullptr)
		*NearPlane = params.NearPlane;
	if (FarPlane != nullptr)
		*FarPlane = params.FarPlane;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UHeadMountedDisplayFunctionLibrary::GetPixelDensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity");

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 DevicePosition                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition");

	struct
	{
		struct FRotator                DeviceRotation;
		struct FVector                 DevicePosition;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EHMDWornState>     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EHMDWornState> UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState");

	struct
	{
		TEnumAsByte<EHMDWornState>     ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bIsTracked                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                Orientation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bHasPositionalTracking         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Position                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose");

	struct
	{
		class UObject*                 WorldContext;
		struct FXRDeviceId             XRDeviceId;
		bool                           bIsTracked;
		struct FRotator                Orientation;
		bool                           bHasPositionalTracking;
		struct FVector                 Position;
	} params;

	params.WorldContext = WorldContext;
	params.XRDeviceId = XRDeviceId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bIsTracked != nullptr)
		*bIsTracked = params.bIsTracked;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = params.bHasPositionalTracking;
	if (Position != nullptr)
		*Position = params.Position;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FXRDeviceId             XRDeviceId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bIsTracked                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                Orientation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bHasPositionalTracking         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Position                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose");

	struct
	{
		struct FXRDeviceId             XRDeviceId;
		bool                           bIsTracked;
		struct FRotator                Orientation;
		bool                           bHasPositionalTracking;
		struct FVector                 Position;
	} params;

	params.XRDeviceId = XRDeviceId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bIsTracked != nullptr)
		*bIsTracked = params.bIsTracked;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = params.bHasPositionalTracking;
	if (Position != nullptr)
		*Position = params.Position;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SystemId                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EXRTrackedDeviceType           DeviceType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FXRDeviceId>     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(const struct FName& SystemId, EXRTrackedDeviceType DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices");

	struct
	{
		struct FName                   SystemId;
		EXRTrackedDeviceType           DeviceType;
		TArray<struct FXRDeviceId>     ReturnValue;
	} params;

	params.SystemId = SystemId;
	params.DeviceType = DeviceType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode");

	struct
	{
		bool                           bEnable;
	} params;

	params.bEnable = bEnable;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnable                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD");

	struct
	{
		bool                           bEnable;
		bool                           ReturnValue;
	} params;

	params.bEnable = bEnable;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EControllerHand                NewSource                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionControllerComponent::SetTrackingSource(EControllerHand NewSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource");

	struct
	{
		EControllerHand                NewSource;
	} params;

	params.NewSource = NewSource;

	UObject::ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   NewSource                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionControllerComponent::SetTrackingMotionSource(const struct FName& NewSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource");

	struct
	{
		struct FName                   NewSource;
	} params;

	params.NewSource = NewSource;

	UObject::ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShowControllerModel           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel");

	struct
	{
		bool                           bShowControllerModel;
	} params;

	params.bShowControllerModel = bShowControllerModel;

	UObject::ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   NewDisplayModelSource          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionControllerComponent::SetDisplayModelSource(const struct FName& NewDisplayModelSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource");

	struct
	{
		struct FName                   NewDisplayModelSource;
	} params;

	params.NewDisplayModelSource = NewDisplayModelSource;

	UObject::ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UStaticMesh*             NewDisplayMesh                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh");

	struct
	{
		class UStaticMesh*             NewDisplayMesh;
	} params;

	params.NewDisplayMesh = NewDisplayMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NewPlayer                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionControllerComponent::SetAssociatedPlayerIndex(int NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex");

	struct
	{
		int                            NewPlayer;
	} params;

	params.NewPlayer = NewPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMotionControllerComponent::OnMotionControllerUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionControllerComponent::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.IsTracked");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EControllerHand                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EControllerHand UMotionControllerComponent::GetTrackingSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource");

	struct
	{
		EControllerHand                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InName                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bValueFound                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMotionControllerComponent::GetParameterValue(const struct FName& InName, bool* bValueFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue");

	struct
	{
		struct FName                   InName;
		bool                           bValueFound;
		float                          ReturnValue;
	} params;

	params.InName = InName;

	UObject::ProcessEvent(fn, &params);

	if (bValueFound != nullptr)
		*bValueFound = params.bValueFound;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Enable                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault");

	struct
	{
		bool                           Enable;
	} params;

	params.Enable = Enable;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourceName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource");

	struct
	{
		int                            PlayerIndex;
		struct FName                   SourceName;
		bool                           ReturnValue;
	} params;

	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice");

	struct
	{
		int                            PlayerIndex;
		EControllerHand                Hand;
		bool                           ReturnValue;
	} params;

	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent");

	struct
	{
		class UMotionControllerComponent* MotionControllerComponent;
		bool                           ReturnValue;
	} params;

	params.MotionControllerComponent = MotionControllerComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourceName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking");

	struct
	{
		int                            PlayerIndex;
		struct FName                   SourceName;
		bool                           ReturnValue;
	} params;

	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources");

	struct
	{
		TArray<struct FName>           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourceName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource");

	struct
	{
		int                            PlayerIndex;
		struct FName                   SourceName;
		bool                           ReturnValue;
	} params;

	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice");

	struct
	{
		int                            PlayerIndex;
		EControllerHand                Hand;
		bool                           ReturnValue;
	} params;

	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent");

	struct
	{
		class UMotionControllerComponent* MotionControllerComponent;
		bool                           ReturnValue;
	} params;

	params.MotionControllerComponent = MotionControllerComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SourceName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource");

	struct
	{
		int                            PlayerIndex;
		struct FName                   SourceName;
	} params;

	params.PlayerIndex = PlayerIndex;
	params.SourceName = SourceName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EControllerHand                Hand                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice");

	struct
	{
		int                            PlayerIndex;
		EControllerHand                Hand;
	} params;

	params.PlayerIndex = PlayerIndex;
	params.Hand = Hand;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer");

	struct
	{
		int                            PlayerIndex;
	} params;

	params.PlayerIndex = PlayerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMotionControllerComponent* MotionControllerComponent      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent");

	struct
	{
		class UMotionControllerComponent* MotionControllerComponent;
	} params;

	params.MotionControllerComponent = MotionControllerComponent;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SystemName                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   DeviceName                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bManualAttachment              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              RelativeTransform              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (CPF_Parm, CPF_OutParm)
// class UPrimitiveComponent*     ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking");

	struct
	{
		class AActor*                  Target;
		struct FName                   SystemName;
		struct FName                   DeviceName;
		bool                           bManualAttachment;
		struct FTransform              RelativeTransform;
		struct FXRDeviceId             XRDeviceId;
		class UPrimitiveComponent*     ReturnValue;
	} params;

	params.Target = Target;
	params.SystemName = SystemName;
	params.DeviceName = DeviceName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (XRDeviceId != nullptr)
		*XRDeviceId = params.XRDeviceId;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bManualAttachment              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              RelativeTransform              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking");

	struct
	{
		class AActor*                  Target;
		struct FXRDeviceId             XRDeviceId;
		bool                           bManualAttachment;
		struct FTransform              RelativeTransform;
		class UPrimitiveComponent*     ReturnValue;
	} params;

	params.Target = Target;
	params.XRDeviceId = XRDeviceId;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SystemName                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   DeviceName                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bManualAttachment              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              RelativeTransform              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (CPF_Parm, CPF_OutParm)
// class UPrimitiveComponent*     NewComponent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync");

	struct
	{
		class AActor*                  Target;
		struct FName                   SystemName;
		struct FName                   DeviceName;
		bool                           bManualAttachment;
		struct FTransform              RelativeTransform;
		struct FXRDeviceId             XRDeviceId;
		class UPrimitiveComponent*     NewComponent;
		class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;
	} params;

	params.Target = Target;
	params.SystemName = SystemName;
	params.DeviceName = DeviceName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (XRDeviceId != nullptr)
		*XRDeviceId = params.XRDeviceId;
	if (NewComponent != nullptr)
		*NewComponent = params.NewComponent;

	return params.ReturnValue;
}


// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FXRDeviceId             XRDeviceId                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bManualAttachment              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              RelativeTransform              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UPrimitiveComponent*     NewComponent                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync");

	struct
	{
		class AActor*                  Target;
		struct FXRDeviceId             XRDeviceId;
		bool                           bManualAttachment;
		struct FTransform              RelativeTransform;
		class UPrimitiveComponent*     NewComponent;
		class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;
	} params;

	params.Target = Target;
	params.XRDeviceId = XRDeviceId;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (NewComponent != nullptr)
		*NewComponent = params.NewComponent;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
