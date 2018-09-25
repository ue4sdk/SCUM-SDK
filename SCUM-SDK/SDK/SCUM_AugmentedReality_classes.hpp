#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AugmentedReality_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}


	static void UnpinComponent(class USceneComponent* ComponentToUnpin);
	static void StopARSession();
	static void StartARSession(class UARSessionConfig* SessionConfig);
	static void SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
	static void RemovePin(class UARPin* PinToRemove);
	static class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName);
	static class UARPin* PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName);
	static void PauseARSession();
	static TArray<struct FARTraceResult> LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	static bool IsSessionTypeSupported(EARSessionType SessionType);
	static EARTrackingQuality GetTrackingQuality();
	static class UARSessionConfig* GetSessionConfig();
	static class UARLightEstimate* GetCurrentLightEstimate();
	static struct FARSessionStatus GetARSessionStatus();
	static TArray<class UARPin*> GetAllPins();
	static TArray<class UARTrackedGeometry*> GetAllGeometries();
	static void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
	static void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
};


// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (0x0028 - 0x0028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}


	static class UARTrackedGeometry* GetTrackedGeometry(const struct FARTraceResult& TraceResult);
	static EARLineTraceChannels GetTraceChannel(const struct FARTraceResult& TraceResult);
	static struct FTransform GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
	static struct FTransform GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
	static float GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
};


// Class AugmentedReality.ARLightEstimate
// 0x0000 (0x0028 - 0x0028)
class UARLightEstimate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}

};


// Class AugmentedReality.ARBasicLightEstimate
// 0x0008 (0x0030 - 0x0028)
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientColorTemperatureKelvin;                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}


	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};


// Class AugmentedReality.ARPin
// 0x00B8 (0x00E0 - 0x0028)
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             PinnedComponent;                                          // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (CPF_IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (CPF_IsPlainOldData)
	EARTrackingState                                   TrackingState;                                            // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x00A1(0x001F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnARTrackingStateChanged;                                 // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnARTransformUpdated;                                     // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARPin");
		return ptr;
	}


	EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	struct FName GetDebugName();
	void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
};


// Class AugmentedReality.ARSessionConfig
// 0x0008 (0x0038 - 0x0030)
class UARSessionConfig : public UDataAsset
{
public:
	EARSessionType                                     SessionType;                                              // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EARPlaneDetectionMode                              PlaneDetectionMode;                                       // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EARLightEstimationMode                             LightEstimationMode;                                      // 0x0032(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EARFrameSyncMode                                   FrameSyncMode;                                            // 0x0033(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableAutomaticCameraOverlay;                            // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableAutomaticCameraTracking;                           // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}

};


// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (0x0028 - 0x0028)
class UARTraceResultDummy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedGeometry
// 0x00A8 (0x00D0 - 0x0028)
class UARTrackedGeometry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0030(0x0030) (CPF_IsPlainOldData)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0060(0x0030) (CPF_IsPlainOldData)
	EARTrackingState                                   TrackingState;                                            // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0091(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}


	EARTrackingState GetTrackingState();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};


// Class AugmentedReality.ARPlaneGeometry
// 0x0030 (0x0100 - 0x00D0)
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
	struct FVector                                     Extent;                                                   // 0x00D4(0x000C) (CPF_IsPlainOldData)
	TArray<struct FVector>                             BoundaryPolygon;                                          // 0x00E0(0x0010) (CPF_ZeroConstructor)
	class UARPlaneGeometry*                            SubsumedBy;                                               // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}


	class UARPlaneGeometry* GetSubsumedBy();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};


// Class AugmentedReality.ARTrackedPoint
// 0x0000 (0x00D0 - 0x00D0)
class UARTrackedPoint : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}

};


// Class AugmentedReality.ARFaceGeometry
// 0x0080 (0x0150 - 0x00D0)
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00D0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}


	float GetBlendShapeValue(EARFaceBlendShape BlendShape);
	TMap<EARFaceBlendShape, float> GetBlendShapes();
};


// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (0x0028 - 0x0028)
class UARTypesDummyClass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
