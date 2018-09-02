// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AppleARKit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AppleARKit.AppleARKitAnchor.GetTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAppleARKitAnchor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitAnchor.GetTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ScreenPosition                 (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// EAppleARKitHitTestResultType   Types                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FAppleARKitHitTestResult> OutResults                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAppleARKitBlueprintLibrary::HitTestAtScreenPosition_TrackingSpace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, EAppleARKitHitTestResultType Types, TArray<struct FAppleARKitHitTestResult>* OutResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ScreenPosition;
		EAppleARKitHitTestResultType   Types;
		TArray<struct FAppleARKitHitTestResult> OutResults;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
	params.Types = Types;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutResults != nullptr)
		*OutResults = params.OutResults;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAppleARKitFrame        OutCurrentFrame                (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAppleARKitBlueprintLibrary::GetCurrentFrame(class UObject* WorldContextObject, struct FAppleARKitFrame* OutCurrentFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FAppleARKitFrame        OutCurrentFrame;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutCurrentFrame != nullptr)
		*OutCurrentFrame = params.OutCurrentFrame;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAppleARKitFaceMeshComponent::UpdateMeshFromBlendShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAppleARKitFaceMeshComponent::UpdateMesh(TArray<struct FVector> Vertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMesh");

	struct
	{
		TArray<struct FVector>         Vertices;
	} params;

	params.Vertices = Vertices;

	UObject::ProcessEvent(fn, &params);
}


// Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TMap<EARFaceBlendShape, float> InBlendShapes                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAppleARKitFaceMeshComponent::SetBlendShapes(TMap<EARFaceBlendShape, float> InBlendShapes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapes");

	struct
	{
		TMap<EARFaceBlendShape, float> InBlendShapes;
	} params;

	params.InBlendShapes = InBlendShapes;

	UObject::ProcessEvent(fn, &params);
}


// Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapeAmount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EARFaceBlendShape              BlendShape                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAppleARKitFaceMeshComponent::SetBlendShapeAmount(EARFaceBlendShape BlendShape, float amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapeAmount");

	struct
	{
		EARFaceBlendShape              BlendShape;
		float                          amount;
	} params;

	params.BlendShape = BlendShape;
	params.amount = amount;

	UObject::ProcessEvent(fn, &params);
}


// Function AppleARKit.AppleARKitFaceMeshComponent.SetAutoBind
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bAutoBind                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAppleARKitFaceMeshComponent::SetAutoBind(bool bAutoBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.SetAutoBind");

	struct
	{
		bool                           bAutoBind;
	} params;

	params.bAutoBind = bAutoBind;

	UObject::ProcessEvent(fn, &params);
}


// Function AppleARKit.AppleARKitFaceMeshComponent.PublishViaLiveLink
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAppleARKitFaceMeshComponent::PublishViaLiveLink(const struct FName& SubjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.PublishViaLiveLink");

	struct
	{
		struct FName                   SubjectName;
	} params;

	params.SubjectName = SubjectName;

	UObject::ProcessEvent(fn, &params);
}


// Function AppleARKit.AppleARKitFaceMeshComponent.GetTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAppleARKitFaceMeshComponent::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.GetTransform");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAppleARKitFaceMeshComponent::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAppleARKitFaceMeshComponent::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EARFaceBlendShape              BlendShape                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAppleARKitFaceMeshComponent::GetFaceBlendShapeAmount(EARFaceBlendShape BlendShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount");

	struct
	{
		EARFaceBlendShape              BlendShape;
		float                          ReturnValue;
	} params;

	params.BlendShape = BlendShape;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.CreateMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV0                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAppleARKitFaceMeshComponent::CreateMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UV0)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.CreateMesh");

	struct
	{
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector2D>       UV0;
	} params;

	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UV0 = UV0;

	UObject::ProcessEvent(fn, &params);
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UAppleARKitPlaneAnchor::GetTransformToCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter");

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetExtent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAppleARKitPlaneAnchor::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetExtent");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetCenter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UAppleARKitPlaneAnchor::GetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetCenter");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
