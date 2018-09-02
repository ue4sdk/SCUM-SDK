// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AugmentedReality_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToUnpin               (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UARBlueprintLibrary::UnpinComponent(class USceneComponent* ComponentToUnpin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");

	struct
	{
		class USceneComponent*         ComponentToUnpin;
	} params;

	params.ComponentToUnpin = ComponentToUnpin;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARBlueprintLibrary.StopARSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UARBlueprintLibrary::StopARSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARBlueprintLibrary.StartARSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UARBlueprintLibrary::StartARSession(class UARSessionConfig* SessionConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");

	struct
	{
		class UARSessionConfig*        SessionConfig;
	} params;

	params.SessionConfig = SessionConfig;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FTransform              InAlignmentTransform           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UARBlueprintLibrary::SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");

	struct
	{
		struct FTransform              InAlignmentTransform;
	} params;

	params.InAlignmentTransform = InAlignmentTransform;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARBlueprintLibrary.RemovePin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UARPin*                  PinToRemove                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UARBlueprintLibrary::RemovePin(class UARPin* PinToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");

	struct
	{
		class UARPin*                  PinToRemove;
	} params;

	params.PinToRemove = PinToRemove;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   DebugName                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UARPin*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UARPin* UARBlueprintLibrary::PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");

	struct
	{
		class USceneComponent*         ComponentToPin;
		struct FARTraceResult          TraceResult;
		struct FName                   DebugName;
		class UARPin*                  ReturnValue;
	} params;

	params.ComponentToPin = ComponentToPin;
	params.TraceResult = TraceResult;
	params.DebugName = DebugName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FTransform              PinToWorldTransform            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UARTrackedGeometry*      TrackedGeometry                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   DebugName                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UARPin*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UARPin* UARBlueprintLibrary::PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");

	struct
	{
		class USceneComponent*         ComponentToPin;
		struct FTransform              PinToWorldTransform;
		class UARTrackedGeometry*      TrackedGeometry;
		struct FName                   DebugName;
		class UARPin*                  ReturnValue;
	} params;

	params.ComponentToPin = ComponentToPin;
	params.PinToWorldTransform = PinToWorldTransform;
	params.TrackedGeometry = TrackedGeometry;
	params.DebugName = DebugName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UARBlueprintLibrary::PauseARSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               ScreenCoord                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// bool                           bTestFeaturePoints             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTestGroundPlane               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTestPlaneExtents              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bTestPlaneBoundaryPolygon      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FARTraceResult>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");

	struct
	{
		struct FVector2D               ScreenCoord;
		bool                           bTestFeaturePoints;
		bool                           bTestGroundPlane;
		bool                           bTestPlaneExtents;
		bool                           bTestPlaneBoundaryPolygon;
		TArray<struct FARTraceResult>  ReturnValue;
	} params;

	params.ScreenCoord = ScreenCoord;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EARSessionType                 SessionType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");

	struct
	{
		EARSessionType                 SessionType;
		bool                           ReturnValue;
	} params;

	params.SessionType = SessionType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// EARTrackingQuality             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");

	struct
	{
		EARTrackingQuality             ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UARSessionConfig*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UARSessionConfig* UARBlueprintLibrary::GetSessionConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");

	struct
	{
		class UARSessionConfig*        ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UARLightEstimate*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");

	struct
	{
		class UARLightEstimate*        ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARSessionStatus        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");

	struct
	{
		struct FARSessionStatus        ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARPin*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UARPin*> UARBlueprintLibrary::GetAllPins()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");

	struct
	{
		TArray<class UARPin*>          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<class UARTrackedGeometry*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");

	struct
	{
		TArray<class UARTrackedGeometry*> ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UARTrackedGeometry*      TrackedGeometry                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_IsPlainOldData)
// float                          OutlineThickness               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PersistForSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");

	struct
	{
		class UARTrackedGeometry*      TrackedGeometry;
		class UObject*                 WorldContextObject;
		struct FLinearColor            Color;
		float                          OutlineThickness;
		float                          PersistForSeconds;
	} params;

	params.TrackedGeometry = TrackedGeometry;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.OutlineThickness = OutlineThickness;
	params.PersistForSeconds = PersistForSeconds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UARPin*                  ARPin                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_IsPlainOldData)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PersistForSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");

	struct
	{
		class UARPin*                  ARPin;
		class UObject*                 WorldContextObject;
		struct FLinearColor            Color;
		float                          Scale;
		float                          PersistForSeconds;
	} params;

	params.ARPin = ARPin;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UARTrackedGeometry*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");

	struct
	{
		struct FARTraceResult          TraceResult;
		class UARTrackedGeometry*      ReturnValue;
	} params;

	params.TraceResult = TraceResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EARLineTraceChannels           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");

	struct
	{
		struct FARTraceResult          TraceResult;
		EARLineTraceChannels           ReturnValue;
	} params;

	params.TraceResult = TraceResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");

	struct
	{
		struct FARTraceResult          TraceResult;
		struct FTransform              ReturnValue;
	} params;

	params.TraceResult = TraceResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");

	struct
	{
		struct FARTraceResult          TraceResult;
		struct FTransform              ReturnValue;
	} params;

	params.TraceResult = TraceResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UARTraceResultLibrary::GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");

	struct
	{
		struct FARTraceResult          TraceResult;
		float                          ReturnValue;
	} params;

	params.TraceResult = TraceResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackingState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARTrackingState               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EARTrackingState UARPin::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	struct
	{
		EARTrackingState               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UARTrackedGeometry*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	struct
	{
		class UARTrackedGeometry*      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetPinnedComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* UARPin::GetPinnedComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UARPin::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UARPin::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetDebugName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UARPin::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.DebugDraw
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// class UWorld*                  World                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PersistForSeconds              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	struct
	{
		class UWorld*                  World;
		struct FLinearColor            Color;
		float                          Scale;
		float                          PersistForSeconds;
	} params;

	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARTrackingState               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EARTrackingState UARTrackedGeometry::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	struct
	{
		EARTrackingState               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UARTrackedGeometry::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UARTrackedGeometry::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UARPlaneGeometry*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	struct
	{
		class UARPlaneGeometry*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UARPlaneGeometry::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UARPlaneGeometry::GetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	struct
	{
		TArray<struct FVector>         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARFaceBlendShape              BlendShape                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	struct
	{
		EARFaceBlendShape              BlendShape;
		float                          ReturnValue;
	} params;

	params.BlendShape = BlendShape;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TMap<EARFaceBlendShape, float> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	struct
	{
		TMap<EARFaceBlendShape, float> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
