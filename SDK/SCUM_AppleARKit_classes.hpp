#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AppleARKit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AppleARKit.AppleARKitAnchor
// 0x0068 (0x0090 - 0x0028)
class UAppleARKitAnchor : public UObject
{
public:
	struct FGuid                                       Identifier;                                               // 0x0028(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AppleARKit.AppleARKitAnchor");
		return ptr;
	}


	struct FTransform GetTransform();
};


// Class AppleARKit.AppleARKitBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAppleARKitBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AppleARKit.AppleARKitBlueprintLibrary");
		return ptr;
	}


	static bool HitTestAtScreenPosition_TrackingSpace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, EAppleARKitHitTestResultType Types, TArray<struct FAppleARKitHitTestResult>* OutResults);
	static bool GetCurrentFrame(class UObject* WorldContextObject, struct FAppleARKitFrame* OutCurrentFrame);
};


// Class AppleARKit.AppleARKitFaceMeshComponent
// 0x00C0 (0x07B0 - 0x06F0)
class UAppleARKitFaceMeshComponent : public UProceduralMeshComponent
{
public:
	bool                                               bWantsCollision;                                          // 0x06F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAutoBindToLocalFaceMesh;                                 // 0x06F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EARFaceComponentTransformMixing                    TransformSetting;                                         // 0x06F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFlipTrackedRotation;                                     // 0x06F3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FaceMaterial;                                             // 0x06F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LiveLinkSubjectName;                                      // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0708(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AppleARKit.AppleARKitFaceMeshComponent");
		return ptr;
	}


	void UpdateMeshFromBlendShapes();
	void UpdateMesh(TArray<struct FVector> Vertices);
	void SetBlendShapes(TMap<EARFaceBlendShape, float> InBlendShapes);
	void SetBlendShapeAmount(EARFaceBlendShape BlendShape, float amount);
	void SetAutoBind(bool bAutoBind);
	void PublishViaLiveLink(const struct FName& SubjectName);
	struct FTransform GetTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	float GetFaceBlendShapeAmount(EARFaceBlendShape BlendShape);
	void CreateMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UV0);
};


// Class AppleARKit.AppleARKitPlaneAnchor
// 0x0020 (0x00B0 - 0x0090)
class UAppleARKitPlaneAnchor : public UAppleARKitAnchor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AppleARKit.AppleARKitPlaneAnchor");
		return ptr;
	}


	struct FTransform GetTransformToCenter();
	struct FVector GetExtent();
	struct FVector GetCenter();
};


// Class AppleARKit.AppleARKitSettings
// 0x0018 (0x0040 - 0x0028)
class UAppleARKitSettings : public UObject
{
public:
	bool                                               bEnableLiveLinkForFaceTracking;                           // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                LiveLinkPublishingPort;                                   // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FName                                       DefaultFaceTrackingLiveLinkSubjectName;                   // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	EARFaceTrackingDirection                           DefaultFaceTrackingDirection;                             // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AppleARKit.AppleARKitSettings");
		return ptr;
	}

};


// Class AppleARKit.ARKitCameraOverlayMaterialLoader
// 0x0008 (0x0030 - 0x0028)
class UARKitCameraOverlayMaterialLoader : public UObject
{
public:
	class UMaterialInterface*                          DefaultCameraOverlayMaterial;                             // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AppleARKit.ARKitCameraOverlayMaterialLoader");
		return ptr;
	}

};


// Class AppleARKit.MaterialExpressionARKitPassthroughCamera
// 0x0038 (0x0098 - 0x0060)
class UMaterialExpressionARKitPassthroughCamera : public UMaterialExpression
{
public:
	struct FExpressionInput                            coordinates;                                              // 0x0060(0x0030)
	uint32_t                                           ConstCoordinate;                                          // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EARKitTextureType>                     TextureType;                                              // 0x0094(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0095(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AppleARKit.MaterialExpressionARKitPassthroughCamera");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
