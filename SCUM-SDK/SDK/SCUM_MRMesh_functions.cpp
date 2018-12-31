// SCUM (0.1.22) SDK

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

void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.ConnectMRMesh");

	struct
	{
		class UMRMeshComponent*        Mesh;
	} params;

	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MRMeshComponent.IsConnected
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMRMeshComponent::IsConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMRMeshComponent::ForceNavMeshUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MRMesh.MRMeshComponent.Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMRMeshComponent::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
