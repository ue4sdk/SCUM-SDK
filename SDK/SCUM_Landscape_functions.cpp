// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Landscape_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Value                          (CPF_Parm, CPF_IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	struct
	{
		struct FName                   ParameterName;
		struct FLinearColor            Value;
	} params;

	params.ParameterName = ParameterName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture*                Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	struct
	{
		struct FName                   ParameterName;
		class UTexture*                Value;
	} params;

	params.ParameterName = ParameterName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ParameterName                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	struct
	{
		struct FName                   ParameterName;
		float                          Value;
	} params;

	params.ParameterName = ParameterName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USplineComponent*        InSplineComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          StartWidth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndWidth                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartSideFalloff               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndSideFalloff                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartRoll                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndRoll                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumSubdivisions                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRaiseHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLowerHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULandscapeLayerInfoObject* PaintLayer                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	struct
	{
		class USplineComponent*        InSplineComponent;
		float                          StartWidth;
		float                          EndWidth;
		float                          StartSideFalloff;
		float                          EndSideFalloff;
		float                          StartRoll;
		float                          EndRoll;
		int                            NumSubdivisions;
		bool                           bRaiseHeights;
		bool                           bLowerHeights;
		class ULandscapeLayerInfoObject* PaintLayer;
	} params;

	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InComponentScreenSizeToUseSubSections (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	struct
	{
		bool                           InComponentScreenSizeToUseSubSections;
	} params;

	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InUseTessellationComponentScreenSizeFalloff (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	struct
	{
		float                          InUseTessellationComponentScreenSizeFalloff;
	} params;

	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InTessellationComponentScreenSize (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	struct
	{
		float                          InTessellationComponentScreenSize;
	} params;

	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InLODDistanceFactor            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	struct
	{
		float                          InLODDistanceFactor;
	} params;

	params.InLODDistanceFactor = InLODDistanceFactor;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InComponentScreenSizeToUseSubSections (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	struct
	{
		float                          InComponentScreenSizeToUseSubSections;
	} params;

	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            InIndex                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	struct
	{
		int                            InIndex;
		class UMaterialInstanceDynamic* ReturnValue;
	} params;

	params.InIndex = InIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
