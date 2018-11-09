#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_HeadMountedDisplay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	static void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	static void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);
	static void SetSpectatorScreenTexture(class UTexture* InTexture);
	static void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack);
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	static void SetClippingPlanes(float Near, float Far);
	static void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	static bool IsSpectatorScreenModeControllable();
	static bool IsInLowPersistenceMode();
	static bool IsHeadMountedDisplayEnabled();
	static bool IsHeadMountedDisplayConnected();
	static bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	static bool HasValidTrackingPosition();
	static float GetWorldToMetersScale(class UObject* WorldContext);
	static void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	static struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	static void GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive);
	static TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();
	static float GetScreenPercentage();
	static void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	static float GetPixelDensity();
	static void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	static int GetNumOfTrackingSensors();
	static TEnumAsByte<EHMDWornState> GetHMDWornState();
	static struct FName GetHMDDeviceName();
	static void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static TArray<struct FXRDeviceId> EnumerateTrackedDevices(const struct FName& SystemId, EXRTrackedDeviceType DeviceType);
	static void EnableLowPersistenceMode(bool bEnable);
	static bool EnableHMD(bool bEnable);
};


// Class HeadMountedDisplay.MotionControllerComponent
// 0x00C0 (0x0620 - 0x0560)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                              // 0x0560(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x0564(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	struct FName                                       MotionSource;                                             // 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x0570(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	ETrackingStatus                                    CurrentTrackingStatus;                                    // 0x0574(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisplayDeviceModel;                                      // 0x0575(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0576(0x0002) MISSED OFFSET
	struct FName                                       DisplayModelSource;                                       // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 CustomDisplayMesh;                                        // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                             // 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0598(0x0068) MISSED OFFSET
	class UPrimitiveComponent*                         DisplayComponent;                                         // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0608(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}


	void SetTrackingSource(EControllerHand NewSource);
	void SetTrackingMotionSource(const struct FName& NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(const struct FName& NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	EControllerHand GetTrackingSource();
	float GetParameterValue(const struct FName& InName, bool* bValueFound);
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}


	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	static bool IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName);
	static bool IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand);
	static bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static bool IsMotionTrackedDeviceCountManagementNecessary();
	static bool IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName);
	static int GetMotionTrackingEnabledControllerCount();
	static int GetMaximumMotionTrackedControllerCount();
	static struct FName GetActiveTrackingSystemName();
	static TArray<struct FName> EnumerateMotionSources();
	static bool EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	static bool EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static void DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	static void DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	static void DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	static void DisableMotionTrackingOfAllControllers();
	static void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x0180 - 0x00F0)
class UVRNotificationsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;    // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                           // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                    // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                          // 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                   // 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                               // 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                     // 0x0150(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                               // 0x0160(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    VRControllerRecenteredDelegate;                           // 0x0170(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}

};


// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}


	static class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	static class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
};


// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (0x0060 - 0x0030)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnModelLoaded;                                            // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoadFailure;                                            // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         SpawnedComponent;                                         // 0x0058(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}


	static class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const struct FName& SystemName, const struct FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	static class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
