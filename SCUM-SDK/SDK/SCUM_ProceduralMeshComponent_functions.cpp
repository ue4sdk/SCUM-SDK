// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ProceduralMeshComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent* InProcMesh                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 PlanePosition                  (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 PlaneNormal                    (CPF_Parm, CPF_IsPlainOldData)
// bool                           bCreateOtherHalf               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UProceduralMeshComponent* OutOtherHalfProcMesh           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// EProcMeshSliceCapOption        CapOption                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      CapMaterial                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial, class UProceduralMeshComponent** OutOtherHalfProcMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh");

	struct
	{
		class UProceduralMeshComponent* InProcMesh;
		struct FVector                 PlanePosition;
		struct FVector                 PlaneNormal;
		bool                           bCreateOtherHalf;
		class UProceduralMeshComponent* OutOtherHalfProcMesh;
		EProcMeshSliceCapOption        CapOption;
		class UMaterialInterface*      CapMaterial;
	} params;

	params.InProcMesh = InProcMesh;
	params.PlanePosition = PlanePosition;
	params.PlaneNormal = PlaneNormal;
	params.bCreateOtherHalf = bCreateOtherHalf;
	params.CapOption = CapOption;
	params.CapMaterial = CapMaterial;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutOtherHalfProcMesh != nullptr)
		*OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UStaticMesh*             InMesh                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            LODIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Vertices                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<int>                    Triangles                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector>         Normals                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh");

	struct
	{
		class UStaticMesh*             InMesh;
		int                            LODIndex;
		int                            SectionIndex;
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector>         Normals;
		TArray<struct FVector2D>       UVs;
		TArray<struct FProcMeshTangent> Tangents;
	} params;

	params.InMesh = InMesh;
	params.LODIndex = LODIndex;
	params.SectionIndex = SectionIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent* InProcMesh                     (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Vertices                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<int>                    Triangles                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector>         Normals                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh");

	struct
	{
		class UProceduralMeshComponent* InProcMesh;
		int                            SectionIndex;
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector>         Normals;
		TArray<struct FVector2D>       UVs;
		TArray<struct FProcMeshTangent> Tangents;
	} params;

	params.InProcMesh = InProcMesh;
	params.SectionIndex = SectionIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 BoxRadius                      (CPF_Parm, CPF_IsPlainOldData)
// TArray<struct FVector>         Vertices                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<int>                    Triangles                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector>         Normals                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FVector2D>       UVs                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh");

	struct
	{
		struct FVector                 BoxRadius;
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector>         Normals;
		TArray<struct FVector2D>       UVs;
		TArray<struct FProcMeshTangent> Tangents;
	} params;

	params.BoxRadius = BoxRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            NumX                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumY                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWinding                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    Triangles                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles");

	struct
	{
		int                            NumX;
		int                            NumY;
		bool                           bWinding;
		TArray<int>                    Triangles;
	} params;

	params.NumX = NumX;
	params.NumY = NumY;
	params.bWinding = bWinding;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            LODIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UProceduralMeshComponent* ProcMeshComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bCreateCollision               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent");

	struct
	{
		class UStaticMeshComponent*    StaticMeshComponent;
		int                            LODIndex;
		class UProceduralMeshComponent* ProcMeshComponent;
		bool                           bCreateCollision;
	} params;

	params.StaticMeshComponent = StaticMeshComponent;
	params.LODIndex = LODIndex;
	params.ProcMeshComponent = ProcMeshComponent;
	params.bCreateCollision = bCreateCollision;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    Triangles                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            Vert0                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Vert1                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Vert2                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Vert3                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles");

	struct
	{
		TArray<int>                    Triangles;
		int                            Vert0;
		int                            Vert1;
		int                            Vert2;
		int                            Vert3;
	} params;

	params.Vert0 = Vert0;
	params.Vert1 = Vert1;
	params.Vert2 = Vert2;
	params.Vert3 = Vert3;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UVs                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector>         Normals                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FProcMeshTangent> Tangents                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh");

	struct
	{
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector2D>       UVs;
		TArray<struct FVector>         Normals;
		TArray<struct FProcMeshTangent> Tangents;
	} params;

	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector>         Normals                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV0                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV1                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV2                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV3                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FLinearColor>    VertexColors                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor");

	struct
	{
		int                            SectionIndex;
		TArray<struct FVector>         Vertices;
		TArray<struct FVector>         Normals;
		TArray<struct FVector2D>       UV0;
		TArray<struct FVector2D>       UV1;
		TArray<struct FVector2D>       UV2;
		TArray<struct FVector2D>       UV3;
		TArray<struct FLinearColor>    VertexColors;
		TArray<struct FProcMeshTangent> Tangents;
	} params;

	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.UV2 = UV2;
	params.UV3 = UV3;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	UObject::ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector>         Normals                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV0                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FColor>          VertexColors                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UProceduralMeshComponent::UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection");

	struct
	{
		int                            SectionIndex;
		TArray<struct FVector>         Vertices;
		TArray<struct FVector>         Normals;
		TArray<struct FVector2D>       UV0;
		TArray<struct FColor>          VertexColors;
		TArray<struct FProcMeshTangent> Tangents;
	} params;

	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	UObject::ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bNewVisibility                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProceduralMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible");

	struct
	{
		int                            SectionIndex;
		bool                           bNewVisibility;
	} params;

	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UProceduralMeshComponent::IsMeshSectionVisible(int SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible");

	struct
	{
		int                            SectionIndex;
		bool                           ReturnValue;
	} params;

	params.SectionIndex = SectionIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UProceduralMeshComponent::GetNumSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector>         Normals                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV0                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV1                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV2                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV3                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FLinearColor>    VertexColors                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bCreateCollision               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor");

	struct
	{
		int                            SectionIndex;
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector>         Normals;
		TArray<struct FVector2D>       UV0;
		TArray<struct FVector2D>       UV1;
		TArray<struct FVector2D>       UV2;
		TArray<struct FVector2D>       UV3;
		TArray<struct FLinearColor>    VertexColors;
		TArray<struct FProcMeshTangent> Tangents;
		bool                           bCreateCollision;
	} params;

	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.UV2 = UV2;
	params.UV3 = UV3;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	UObject::ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVector>         Vertices                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    Triangles                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector>         Normals                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVector2D>       UV0                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FColor>          VertexColors                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FProcMeshTangent> Tangents                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bCreateCollision               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProceduralMeshComponent::CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection");

	struct
	{
		int                            SectionIndex;
		TArray<struct FVector>         Vertices;
		TArray<int>                    Triangles;
		TArray<struct FVector>         Normals;
		TArray<struct FVector2D>       UV0;
		TArray<struct FColor>          VertexColors;
		TArray<struct FProcMeshTangent> Tangents;
		bool                           bCreateCollision;
	} params;

	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	UObject::ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            SectionIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProceduralMeshComponent::ClearMeshSection(int SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection");

	struct
	{
		int                            SectionIndex;
	} params;

	params.SectionIndex = SectionIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UProceduralMeshComponent::ClearAllMeshSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVector>         ConvexVerts                    (CPF_Parm, CPF_ZeroConstructor)

void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh");

	struct
	{
		TArray<struct FVector>         ConvexVerts;
	} params;

	params.ConvexVerts = ConvexVerts;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
