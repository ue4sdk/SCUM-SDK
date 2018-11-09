// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_CustomMeshComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles");

	struct
	{
		TArray<struct FCustomMeshTriangle> Triangles;
		bool                           ReturnValue;
	} params;

	params.Triangles = Triangles;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCustomMeshComponent::ClearCustomMeshTriangles()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles");

	struct
	{
		TArray<struct FCustomMeshTriangle> Triangles;
	} params;

	params.Triangles = Triangles;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
