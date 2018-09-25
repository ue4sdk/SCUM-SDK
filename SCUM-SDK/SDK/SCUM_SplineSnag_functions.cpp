// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SplineSnag_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SplineSnag.SplineSnag_C.Calculate Chunk Transform
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Is_Uniform                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Current_Index                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Max_Index                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Spline_Length_Position         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Mesh_Local_Transform           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FTransform              Result_Transform               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ASplineSnag_C::Calculate_Chunk_Transform(bool Is_Uniform, int Current_Index, int Max_Index, float Spline_Length_Position, const struct FTransform& Mesh_Local_Transform, struct FTransform* Result_Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineSnag.SplineSnag_C.Calculate Chunk Transform");

	struct
	{
		bool                           Is_Uniform;
		int                            Current_Index;
		int                            Max_Index;
		float                          Spline_Length_Position;
		struct FTransform              Mesh_Local_Transform;
		struct FTransform              Result_Transform;
	} params;

	params.Is_Uniform = Is_Uniform;
	params.Current_Index = Current_Index;
	params.Max_Index = Max_Index;
	params.Spline_Length_Position = Spline_Length_Position;
	params.Mesh_Local_Transform = Mesh_Local_Transform;

	UObject::ProcessEvent(fn, &params);

	if (Result_Transform != nullptr)
		*Result_Transform = params.Result_Transform;
}


// Function SplineSnag.SplineSnag_C.Get Random Chunk Mesh
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ESplineSection>    Section                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Instance_Mesh                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UInstancedStaticMeshComponent* Mesh_Instance                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FTransform              Local_Transform                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// float                          Mesh_Width                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStaticMesh*             Mesh_Static                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ASplineSnag_C::Get_Random_Chunk_Mesh(TEnumAsByte<ESplineSection> Section, bool Instance_Mesh, class UInstancedStaticMeshComponent** Mesh_Instance, struct FTransform* Local_Transform, float* Mesh_Width, class UStaticMesh** Mesh_Static)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineSnag.SplineSnag_C.Get Random Chunk Mesh");

	struct
	{
		TEnumAsByte<ESplineSection>    Section;
		bool                           Instance_Mesh;
		class UInstancedStaticMeshComponent* Mesh_Instance;
		struct FTransform              Local_Transform;
		float                          Mesh_Width;
		class UStaticMesh*             Mesh_Static;
	} params;

	params.Section = Section;
	params.Instance_Mesh = Instance_Mesh;

	UObject::ProcessEvent(fn, &params);

	if (Mesh_Instance != nullptr)
		*Mesh_Instance = params.Mesh_Instance;
	if (Local_Transform != nullptr)
		*Local_Transform = params.Local_Transform;
	if (Mesh_Width != nullptr)
		*Mesh_Width = params.Mesh_Width;
	if (Mesh_Static != nullptr)
		*Mesh_Static = params.Mesh_Static;
}


// Function SplineSnag.SplineSnag_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASplineSnag_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplineSnag.SplineSnag_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
