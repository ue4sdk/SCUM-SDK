// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MRMesh_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MRMesh.MeshReconstructorBase.StopReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::StopReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StopReconstruction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::StartReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StartReconstruction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMeshReconstructorBase::PauseReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.PauseReconstruction");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// (FUNC_Native, FUNC_Public)

void UMeshReconstructorBase::DisconnectMRMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UMRMeshComponent*        Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FMRMeshConfiguration    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMRMeshConfiguration UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.ConnectMRMesh");

	struct
	{
		class UMRMeshComponent*        Mesh;
		struct FMRMeshConfiguration    ReturnValue;
	} params;

	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.GetReconstructor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMeshReconstructorBase*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMeshReconstructorBase* UMRMeshComponent::GetReconstructor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetReconstructor");

	struct
	{
		class UMeshReconstructorBase*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.ConnectReconstructor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMeshReconstructorBase*  Reconstructor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMRMeshComponent::ConnectReconstructor(class UMeshReconstructorBase* Reconstructor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ConnectReconstructor");

	struct
	{
		class UMeshReconstructorBase*  Reconstructor;
	} params;

	params.Reconstructor = Reconstructor;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
