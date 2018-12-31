// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_EditableMesh_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EditableMesh.EditableMesh.WeldVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>       VertexIDs                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVertexID               OutNewVertexID                 (CPF_Parm, CPF_OutParm)

void UEditableMesh::WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.WeldVertices");

	struct
	{
		TArray<struct FVertexID>       VertexIDs;
		struct FVertexID               OutNewVertexID;
	} params;

	params.VertexIDs = VertexIDs;

	UObject::ProcessEvent(fn, &params);

	if (OutNewVertexID != nullptr)
		*OutNewVertexID = params.OutNewVertexID;
}


// Function EditableMesh.EditableMesh.TryToRemoveVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// bool                           bOutWasVertexRemoved           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEdgeID                 OutNewEdgeID                   (CPF_Parm, CPF_OutParm)

void UEditableMesh::TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemoveVertex");

	struct
	{
		struct FVertexID               VertexID;
		bool                           bOutWasVertexRemoved;
		struct FEdgeID                 OutNewEdgeID;
	} params;

	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	if (bOutWasVertexRemoved != nullptr)
		*bOutWasVertexRemoved = params.bOutWasVertexRemoved;
	if (OutNewEdgeID != nullptr)
		*OutNewEdgeID = params.OutNewEdgeID;
}


// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// bool                           bOutWasEdgeRemoved             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPolygonID              OutNewPolygonID                (CPF_Parm, CPF_OutParm)

void UEditableMesh::TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge");

	struct
	{
		struct FEdgeID                 EdgeID;
		bool                           bOutWasEdgeRemoved;
		struct FPolygonID              OutNewPolygonID;
	} params;

	params.EdgeID = EdgeID;

	UObject::ProcessEvent(fn, &params);

	if (bOutWasEdgeRemoved != nullptr)
		*bOutWasEdgeRemoved = params.bOutWasEdgeRemoved;
	if (OutNewPolygonID != nullptr)
		*OutNewPolygonID = params.OutNewPolygonID;
}


// Function EditableMesh.EditableMesh.TriangulatePolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FPolygonID>      OutNewTrianglePolygons         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TriangulatePolygons");

	struct
	{
		TArray<struct FPolygonID>      PolygonIDs;
		TArray<struct FPolygonID>      OutNewTrianglePolygons;
	} params;

	params.PolygonIDs = PolygonIDs;

	UObject::ProcessEvent(fn, &params);

	if (OutNewTrianglePolygons != nullptr)
		*OutNewTrianglePolygons = params.OutNewTrianglePolygons;
}


// Function EditableMesh.EditableMesh.TessellatePolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// ETriangleTessellationMode      TriangleTessellationMode       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FPolygonID>      OutNewPolygonIDs               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TessellatePolygons");

	struct
	{
		TArray<struct FPolygonID>      PolygonIDs;
		ETriangleTessellationMode      TriangleTessellationMode;
		TArray<struct FPolygonID>      OutNewPolygonIDs;
	} params;

	params.PolygonIDs = PolygonIDs;
	params.TriangleTessellationMode = TriangleTessellationMode;

	UObject::ProcessEvent(fn, &params);

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
}


// Function EditableMesh.EditableMesh.StartModification
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EMeshModificationType          MeshModificationType           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EMeshTopologyChange            MeshTopologyChange             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.StartModification");

	struct
	{
		EMeshModificationType          MeshModificationType;
		EMeshTopologyChange            MeshTopologyChange;
	} params;

	params.MeshModificationType = MeshModificationType;
	params.MeshTopologyChange = MeshTopologyChange;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SplitPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToSplit> PolygonsToSplit                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygons");

	struct
	{
		TArray<struct FPolygonToSplit> PolygonsToSplit;
		TArray<struct FEdgeID>         OutNewEdgeIDs;
	} params;

	params.PolygonsToSplit = PolygonsToSplit;

	UObject::ProcessEvent(fn, &params);

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.SplitEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// TArray<float>                  Splits                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVertexID>       OutNewVertexIDs                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitEdge");

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<float>                  Splits;
		TArray<struct FVertexID>       OutNewVertexIDs;
	} params;

	params.EdgeID = EdgeID;
	params.Splits = Splits;

	UObject::ProcessEvent(fn, &params);

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>       VertexIDs                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  VerticesNewCornerSharpness     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness");

	struct
	{
		TArray<struct FVertexID>       VertexIDs;
		TArray<float>                  VerticesNewCornerSharpness;
	} params;

	params.VertexIDs = VertexIDs;
	params.VerticesNewCornerSharpness = VerticesNewCornerSharpness;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetVerticesAttributes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertex> AttributesForVertices          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesAttributes");

	struct
	{
		TArray<struct FAttributesForVertex> AttributesForVertices;
	} params;

	params.AttributesForVertices = AttributesForVertices;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes");

	struct
	{
		TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances;
	} params;

	params.AttributesForVertexInstances = AttributesForVertexInstances;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumTexCoords                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::SetTextureCoordinateCount(int NumTexCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetTextureCoordinateCount");

	struct
	{
		int                            NumTexCoords;
	} params;

	params.NumTexCoords = NumTexCoords;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetSubdivisionCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NewSubdivisionCount            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::SetSubdivisionCount(int NewSubdivisionCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetSubdivisionCount");

	struct
	{
		int                            NewSubdivisionCount;
	} params;

	params.NewSubdivisionCount = NewSubdivisionCount;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes");

	struct
	{
		TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons;
	} params;

	params.VertexAttributesForPolygons = VertexAttributesForPolygons;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetEdgesVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVerticesForEdge> VerticesForEdges               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::SetEdgesVertices(TArray<struct FVerticesForEdge> VerticesForEdges)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesVertices");

	struct
	{
		TArray<struct FVerticesForEdge> VerticesForEdges;
	} params;

	params.VerticesForEdges = VerticesForEdges;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDs                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          MaxDotProductForSoftEdge       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically");

	struct
	{
		TArray<struct FEdgeID>         EdgeIDs;
		float                          MaxDotProductForSoftEdge;
	} params;

	params.EdgeIDs = EdgeIDs;
	params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetEdgesHardness
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDs                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<bool>                   EdgesNewIsHard                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardness");

	struct
	{
		TArray<struct FEdgeID>         EdgeIDs;
		TArray<bool>                   EdgesNewIsHard;
	} params;

	params.EdgeIDs = EdgeIDs;
	params.EdgesNewIsHard = EdgesNewIsHard;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDs                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  EdgesNewCreaseSharpness        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness");

	struct
	{
		TArray<struct FEdgeID>         EdgeIDs;
		TArray<float>                  EdgesNewCreaseSharpness;
	} params;

	params.EdgeIDs = EdgeIDs;
	params.EdgesNewCreaseSharpness = EdgesNewCreaseSharpness;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetEdgesAttributes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForEdge> AttributesForEdges             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesAttributes");

	struct
	{
		TArray<struct FAttributesForEdge> AttributesForEdges;
	} params;

	params.AttributesForEdges = AttributesForEdges;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetAllowUndo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAllowUndo                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::SetAllowUndo(bool bInAllowUndo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowUndo");

	struct
	{
		bool                           bInAllowUndo;
	} params;

	params.bInAllowUndo = bInAllowUndo;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAllowSpatialDatabase        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowSpatialDatabase");

	struct
	{
		bool                           bInAllowSpatialDatabase;
	} params;

	params.bInAllowSpatialDatabase = bInAllowSpatialDatabase;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SetAllowCompact
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAllowCompact                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::SetAllowCompact(bool bInAllowCompact)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowCompact");

	struct
	{
		bool                           bInAllowCompact;
	} params;

	params.bInAllowCompact = bInAllowCompact;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 LineSegmentStart               (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 LineSegmentEnd                 (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// TArray<struct FPolygonID>      OutPolygons                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");

	struct
	{
		struct FVector                 LineSegmentStart;
		struct FVector                 LineSegmentEnd;
		TArray<struct FPolygonID>      OutPolygons;
	} params;

	params.LineSegmentStart = LineSegmentStart;
	params.LineSegmentEnd = LineSegmentEnd;

	UObject::ProcessEvent(fn, &params);

	if (OutPolygons != nullptr)
		*OutPolygons = params.OutPolygons;
}


// Function EditableMesh.EditableMesh.RevertInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UEditableMesh*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UEditableMesh* UEditableMesh::RevertInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RevertInstance");

	struct
	{
		class UEditableMesh*           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.Revert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UEditableMesh::Revert()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Revert");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            FirstVertexNumberToRemove      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumVerticesToRemove            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteOrphanedVertexInstances (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::RemovePolygonPerimeterVertices(const struct FPolygonID& PolygonID, int FirstVertexNumberToRemove, int NumVerticesToRemove, bool bDeleteOrphanedVertexInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            FirstVertexNumberToRemove;
		int                            NumVerticesToRemove;
		bool                           bDeleteOrphanedVertexInstances;
	} params;

	params.PolygonID = PolygonID;
	params.FirstVertexNumberToRemove = FirstVertexNumberToRemove;
	params.NumVerticesToRemove = NumVerticesToRemove;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.RebuildRenderMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UEditableMesh::RebuildRenderMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RebuildRenderMesh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.QuadrangulateMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      OutNewPolygonIDs               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.QuadrangulateMesh");

	struct
	{
		TArray<struct FPolygonID>      OutNewPolygonIDs;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
}


// Function EditableMesh.EditableMesh.PropagateInstanceChanges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UEditableMesh::PropagateInstanceChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.PropagateInstanceChanges");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.MoveVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexToMove>   VerticesToMove                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::MoveVertices(TArray<struct FVertexToMove> VerticesToMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MoveVertices");

	struct
	{
		TArray<struct FVertexToMove>   VerticesToMove;
	} params;

	params.VerticesToMove = VerticesToMove;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.MakeVertexID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            VertexIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVertexID UEditableMesh::MakeVertexID(int VertexIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeVertexID");

	struct
	{
		int                            VertexIndex;
		struct FVertexID               ReturnValue;
	} params;

	params.VertexIndex = VertexIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            PolygonIndex                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPolygonID              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonID UEditableMesh::MakePolygonID(int PolygonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonID");

	struct
	{
		int                            PolygonIndex;
		struct FPolygonID              ReturnValue;
	} params;

	params.PolygonIndex = PolygonIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonGroupID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            PolygonGroupIndex              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPolygonGroupID         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonGroupID UEditableMesh::MakePolygonGroupID(int PolygonGroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonGroupID");

	struct
	{
		int                            PolygonGroupIndex;
		struct FPolygonGroupID         ReturnValue;
	} params;

	params.PolygonGroupIndex = PolygonGroupIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakeEdgeID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            EdgeIndex                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEdgeID UEditableMesh::MakeEdgeID(int EdgeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeEdgeID");

	struct
	{
		int                            EdgeIndex;
		struct FEdgeID                 ReturnValue;
	} params;

	params.EdgeIndex = EdgeIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsValidVertex(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidVertex");

	struct
	{
		struct FVertexID               VertexID;
		bool                           ReturnValue;
	} params;

	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygonGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_ConstParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygonGroup");

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		bool                           ReturnValue;
	} params;

	params.PolygonGroupID = PolygonGroupID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsValidPolygon(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygon");

	struct
	{
		struct FPolygonID              PolygonID;
		bool                           ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsValidEdge(const struct FEdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidEdge");

	struct
	{
		struct FEdgeID                 EdgeID;
		bool                           ReturnValue;
	} params;

	params.EdgeID = EdgeID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsUndoAllowed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsUndoAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsUndoAllowed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsSpatialDatabaseAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsPreviewingSubdivisions()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsPreviewingSubdivisions");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsOrphanedVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsOrphanedVertex(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsOrphanedVertex");

	struct
	{
		struct FVertexID               VertexID;
		bool                           ReturnValue;
	} params;

	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCompactAllowed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsCompactAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCompactAllowed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommittedAsInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsCommittedAsInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommittedAsInstance");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommitted
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsCommitted()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommitted");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsBeingModified
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::IsBeingModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsBeingModified");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidVertexID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVertexID UEditableMesh::InvalidVertexID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidVertexID");

	struct
	{
		struct FVertexID               ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPolygonID              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonID UEditableMesh::InvalidPolygonID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonID");

	struct
	{
		struct FPolygonID              ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonGroupID UEditableMesh::InvalidPolygonGroupID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonGroupID");

	struct
	{
		struct FPolygonGroupID         ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidEdgeID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEdgeID UEditableMesh::InvalidEdgeID()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidEdgeID");

	struct
	{
		struct FEdgeID                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.InsetPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          InsetFixedDistance             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InsetProgressTowardCenter      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EInsetPolygonsMode             Mode                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FPolygonID>      OutNewCenterPolygonIDs         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FPolygonID>      OutNewSidePolygonIDs           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsetPolygons");

	struct
	{
		TArray<struct FPolygonID>      PolygonIDs;
		float                          InsetFixedDistance;
		float                          InsetProgressTowardCenter;
		EInsetPolygonsMode             Mode;
		TArray<struct FPolygonID>      OutNewCenterPolygonIDs;
		TArray<struct FPolygonID>      OutNewSidePolygonIDs;
	} params;

	params.PolygonIDs = PolygonIDs;
	params.InsetFixedDistance = InsetFixedDistance;
	params.InsetProgressTowardCenter = InsetProgressTowardCenter;
	params.Mode = Mode;

	UObject::ProcessEvent(fn, &params);

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
}


// Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            InsertBeforeVertexNumber       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVertexAndAttributes> VerticesToInsert               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::InsertPolygonPerimeterVertices(const struct FPolygonID& PolygonID, int InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes> VerticesToInsert)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            InsertBeforeVertexNumber;
		TArray<struct FVertexAndAttributes> VerticesToInsert;
	} params;

	params.PolygonID = PolygonID;
	params.InsertBeforeVertexNumber = InsertBeforeVertexNumber;
	params.VerticesToInsert = VerticesToInsert;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.InsertEdgeLoop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// TArray<float>                  Splits                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertEdgeLoop");

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<float>                  Splits;
		TArray<struct FEdgeID>         OutNewEdgeIDs;
	} params;

	params.EdgeID = EdgeID;
	params.Splits = Splits;

	UObject::ProcessEvent(fn, &params);

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.InitializeAdapters
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UEditableMesh::InitializeAdapters()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InitializeAdapters");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.GetVertexPairEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// struct FVertexID               NextVertexID                   (CPF_ConstParm, CPF_Parm)
// bool                           bOutEdgeWindingIsReversed      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEdgeID UEditableMesh::GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexPairEdge");

	struct
	{
		struct FVertexID               VertexID;
		struct FVertexID               NextVertexID;
		bool                           bOutEdgeWindingIsReversed;
		struct FEdgeID                 ReturnValue;
	} params;

	params.VertexID = VertexID;
	params.NextVertexID = NextVertexID;

	UObject::ProcessEvent(fn, &params);

	if (bOutEdgeWindingIsReversed != nullptr)
		*bOutEdgeWindingIsReversed = params.bOutEdgeWindingIsReversed;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_ConstParm, CPF_Parm)
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVertexID UEditableMesh::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceVertex");

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		struct FVertexID               ReturnValue;
	} params;

	params.VertexInstanceID = VertexInstanceID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetVertexInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_ConstParm, CPF_Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons");

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		TArray<struct FPolygonID>      OutConnectedPolygonIDs;
	} params;

	params.VertexInstanceID = VertexInstanceID;

	UObject::ProcessEvent(fn, &params);

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount");

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		int                            ReturnValue;
	} params;

	params.VertexInstanceID = VertexInstanceID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexInstanceID       VertexInstanceID               (CPF_ConstParm, CPF_Parm)
// int                            ConnectedPolygonNumber         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPolygonID              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int ConnectedPolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon");

	struct
	{
		struct FVertexInstanceID       VertexInstanceID;
		int                            ConnectedPolygonNumber;
		struct FPolygonID              ReturnValue;
	} params;

	params.VertexInstanceID = VertexInstanceID;
	params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetVertexCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons");

	struct
	{
		struct FVertexID               VertexID;
		TArray<struct FPolygonID>      OutConnectedPolygonIDs;
	} params;

	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// TArray<struct FEdgeID>         OutConnectedEdgeIDs            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdges");

	struct
	{
		struct FVertexID               VertexID;
		TArray<struct FEdgeID>         OutConnectedEdgeIDs;
	} params;

	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	if (OutConnectedEdgeIDs != nullptr)
		*OutConnectedEdgeIDs = params.OutConnectedEdgeIDs;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetVertexConnectedEdgeCount(const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount");

	struct
	{
		struct FVertexID               VertexID;
		int                            ReturnValue;
	} params;

	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// int                            ConnectedEdgeNumber            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEdgeID UEditableMesh::GetVertexConnectedEdge(const struct FVertexID& VertexID, int ConnectedEdgeNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdge");

	struct
	{
		struct FVertexID               VertexID;
		int                            ConnectedEdgeNumber;
		struct FEdgeID                 ReturnValue;
	} params;

	params.VertexID = VertexID;
	params.ConnectedEdgeNumber = ConnectedEdgeNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// TArray<struct FVertexID>       OutAdjacentVertexIDs           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices");

	struct
	{
		struct FVertexID               VertexID;
		TArray<struct FVertexID>       OutAdjacentVertexIDs;
	} params;

	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
}


// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetTextureCoordinateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetTextureCoordinateCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FSubdivisionLimitData   ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)

struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionLimitData");

	struct
	{
		struct FSubdivisionLimitData   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetSubdivisionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            PolygonTriangleNumber          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMeshTriangle           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMeshTriangle UEditableMesh::GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int PolygonTriangleNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            PolygonTriangleNumber;
		struct FMeshTriangle           ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.PolygonTriangleNumber = PolygonTriangleNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// TArray<struct FVertexID>       OutPolygonPerimeterVertexIDs   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices");

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FVertexID>       OutPolygonPerimeterVertexIDs;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	if (OutPolygonPerimeterVertexIDs != nullptr)
		*OutPolygonPerimeterVertexIDs = params.OutPolygonPerimeterVertexIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// TArray<struct FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances");

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
		*OutPolygonPerimeterVertexInstanceIDs = params.OutPolygonPerimeterVertexInstanceIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            PolygonVertexNumber            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVertexInstanceID       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int PolygonVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            PolygonVertexNumber;
		struct FVertexInstanceID       ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.PolygonVertexNumber = PolygonVertexNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            PolygonVertexNumber            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int PolygonVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            PolygonVertexNumber;
		struct FVertexID               ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.PolygonVertexNumber = PolygonVertexNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// TArray<struct FEdgeID>         OutPolygonPerimeterEdgeIDs     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges");

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FEdgeID>         OutPolygonPerimeterEdgeIDs;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	if (OutPolygonPerimeterEdgeIDs != nullptr)
		*OutPolygonPerimeterEdgeIDs = params.OutPolygonPerimeterEdgeIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            PerimeterEdgeNumber            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bOutEdgeWindingIsReversedForPolygon (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            PerimeterEdgeNumber;
		bool                           bOutEdgeWindingIsReversedForPolygon;
		struct FEdgeID                 ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.PerimeterEdgeNumber = PerimeterEdgeNumber;

	UObject::ProcessEvent(fn, &params);

	if (bOutEdgeWindingIsReversedForPolygon != nullptr)
		*bOutEdgeWindingIsReversedForPolygon = params.bOutEdgeWindingIsReversedForPolygon;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonInGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_ConstParm, CPF_Parm)
// int                            PolygonNumber                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPolygonID              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonID UEditableMesh::GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int PolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonInGroup");

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		int                            PolygonNumber;
		struct FPolygonID              ReturnValue;
	} params;

	params.PolygonGroupID = PolygonGroupID;
	params.PolygonNumber = PolygonNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVertexID>       OutHoleVertexIDs               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetPolygonHoleVertices(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FVertexID>* OutHoleVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleVertices");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		TArray<struct FVertexID>       OutHoleVertexIDs;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;

	UObject::ProcessEvent(fn, &params);

	if (OutHoleVertexIDs != nullptr)
		*OutHoleVertexIDs = params.OutHoleVertexIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVertexInstanceID> OutHoleVertexInstanceIDs       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetPolygonHoleVertexInstances(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FVertexInstanceID>* OutHoleVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleVertexInstances");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		TArray<struct FVertexInstanceID> OutHoleVertexInstanceIDs;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;

	UObject::ProcessEvent(fn, &params);

	if (OutHoleVertexInstanceIDs != nullptr)
		*OutHoleVertexInstanceIDs = params.OutHoleVertexInstanceIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleVertexInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PolygonVertexNumber            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVertexInstanceID       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVertexInstanceID UEditableMesh::GetPolygonHoleVertexInstance(const struct FPolygonID& PolygonID, int HoleNumber, int PolygonVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleVertexInstance");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		int                            PolygonVertexNumber;
		struct FVertexInstanceID       ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;
	params.PolygonVertexNumber = PolygonVertexNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleVertexCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonHoleVertexCount(const struct FPolygonID& PolygonID, int HoleNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleVertexCount");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PolygonVertexNumber            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVertexID UEditableMesh::GetPolygonHoleVertex(const struct FPolygonID& PolygonID, int HoleNumber, int PolygonVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleVertex");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		int                            PolygonVertexNumber;
		struct FVertexID               ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;
	params.PolygonVertexNumber = PolygonVertexNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FEdgeID>         OutHoleEdgeIDs                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetPolygonHoleEdges(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FEdgeID>* OutHoleEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleEdges");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		TArray<struct FEdgeID>         OutHoleEdgeIDs;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;

	UObject::ProcessEvent(fn, &params);

	if (OutHoleEdgeIDs != nullptr)
		*OutHoleEdgeIDs = params.OutHoleEdgeIDs;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleEdgeCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonHoleEdgeCount(const struct FPolygonID& PolygonID, int HoleNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleEdgeCount");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleEdge
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            HoleEdgeNumber                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEdgeID UEditableMesh::GetPolygonHoleEdge(const struct FPolygonID& PolygonID, int HoleNumber, int HoleEdgeNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleEdge");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		int                            HoleEdgeNumber;
		struct FEdgeID                 ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;
	params.HoleEdgeNumber = HoleEdgeNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonHoleCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonHoleCount(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonHoleCount");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonGroupCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonGroupCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonGroupCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonGroupID         PolygonGroupID                 (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCountInGroup");

	struct
	{
		struct FPolygonGroupID         PolygonGroupID;
		int                            ReturnValue;
	} params;

	params.PolygonGroupID = PolygonGroupID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetPolygonCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// TArray<struct FPolygonID>      OutAdjacentPolygons            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons");

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FPolygonID>      OutAdjacentPolygons;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	if (OutAdjacentPolygons != nullptr)
		*OutAdjacentPolygons = params.OutAdjacentPolygons;
}


// Function EditableMesh.EditableMesh.GetGroupForPolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// struct FPolygonGroupID         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetGroupForPolygon");

	struct
	{
		struct FPolygonID              PolygonID;
		struct FPolygonGroupID         ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup");

	struct
	{
		struct FPolygonGroupID         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// struct FVertexID               OutEdgeVertexID0               (CPF_Parm, CPF_OutParm)
// struct FVertexID               OutEdgeVertexID1               (CPF_Parm, CPF_OutParm)

void UEditableMesh::GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertices");

	struct
	{
		struct FEdgeID                 EdgeID;
		struct FVertexID               OutEdgeVertexID0;
		struct FVertexID               OutEdgeVertexID1;
	} params;

	params.EdgeID = EdgeID;

	UObject::ProcessEvent(fn, &params);

	if (OutEdgeVertexID0 != nullptr)
		*OutEdgeVertexID0 = params.OutEdgeVertexID0;
	if (OutEdgeVertexID1 != nullptr)
		*OutEdgeVertexID1 = params.OutEdgeVertexID1;
}


// Function EditableMesh.EditableMesh.GetEdgeVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// int                            EdgeVertexNumber               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVertexID               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVertexID UEditableMesh::GetEdgeVertex(const struct FEdgeID& EdgeID, int EdgeVertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertex");

	struct
	{
		struct FEdgeID                 EdgeID;
		int                            EdgeVertexNumber;
		struct FVertexID               ReturnValue;
	} params;

	params.EdgeID = EdgeID;
	params.EdgeVertexNumber = EdgeVertexNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVertexID               VertexID0                      (CPF_ConstParm, CPF_Parm)
// struct FVertexID               VertexID1                      (CPF_ConstParm, CPF_Parm)
// struct FEdgeID                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices");

	struct
	{
		struct FVertexID               VertexID0;
		struct FVertexID               VertexID1;
		struct FEdgeID                 ReturnValue;
	} params;

	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeLoopElements
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// TArray<struct FEdgeID>         EdgeLoopIDs                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeLoopElements");

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<struct FEdgeID>         EdgeLoopIDs;
	} params;

	params.EdgeID = EdgeID;

	UObject::ProcessEvent(fn, &params);

	if (EdgeLoopIDs != nullptr)
		*EdgeLoopIDs = params.EdgeLoopIDs;
}


// Function EditableMesh.EditableMesh.GetEdgeCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetEdgeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons");

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<struct FPolygonID>      OutConnectedPolygonIDs;
	} params;

	params.EdgeID = EdgeID;

	UObject::ProcessEvent(fn, &params);

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount");

	struct
	{
		struct FEdgeID                 EdgeID;
		int                            ReturnValue;
	} params;

	params.EdgeID = EdgeID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// int                            ConnectedPolygonNumber         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FPolygonID              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int ConnectedPolygonNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon");

	struct
	{
		struct FEdgeID                 EdgeID;
		int                            ConnectedPolygonNumber;
		struct FPolygonID              ReturnValue;
	} params;

	params.EdgeID = EdgeID;
	params.ConnectedPolygonNumber = ConnectedPolygonNumber;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals");

	struct
	{
		TArray<struct FPolygonID>      PolygonIDs;
	} params;

	params.PolygonIDs = PolygonIDs;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.FlipPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::FlipPolygons(TArray<struct FPolygonID> PolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FlipPolygons");

	struct
	{
		TArray<struct FPolygonID>      PolygonIDs;
	} params;

	params.PolygonIDs = PolygonIDs;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex");

	struct
	{
		struct FPolygonID              PolygonID;
		struct FVertexID               VertexID;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// struct FVertexID               EdgeVertexID0                  (CPF_ConstParm, CPF_Parm)
// struct FVertexID               EdgeVertexID1                  (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices");

	struct
	{
		struct FPolygonID              PolygonID;
		struct FVertexID               EdgeVertexID0;
		struct FVertexID               EdgeVertexID1;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.EdgeVertexID0 = EdgeVertexID0;
	params.EdgeVertexID1 = EdgeVertexID1;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonLoop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// TArray<struct FEdgeID>         OutEdgeLoopEdgeIDs             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FEdgeID>         OutFlippedEdgeIDs              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FEdgeID>         OutReversedEdgeIDPathToTake    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FPolygonID>      OutPolygonIDsToSplit           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonLoop");

	struct
	{
		struct FEdgeID                 EdgeID;
		TArray<struct FEdgeID>         OutEdgeLoopEdgeIDs;
		TArray<struct FEdgeID>         OutFlippedEdgeIDs;
		TArray<struct FEdgeID>         OutReversedEdgeIDPathToTake;
		TArray<struct FPolygonID>      OutPolygonIDsToSplit;
	} params;

	params.EdgeID = EdgeID;

	UObject::ProcessEvent(fn, &params);

	if (OutEdgeLoopEdgeIDs != nullptr)
		*OutEdgeLoopEdgeIDs = params.OutEdgeLoopEdgeIDs;
	if (OutFlippedEdgeIDs != nullptr)
		*OutFlippedEdgeIDs = params.OutFlippedEdgeIDs;
	if (OutReversedEdgeIDPathToTake != nullptr)
		*OutReversedEdgeIDPathToTake = params.OutReversedEdgeIDPathToTake;
	if (OutPolygonIDsToSplit != nullptr)
		*OutPolygonIDsToSplit = params.OutPolygonIDsToSplit;
}


// Function EditableMesh.EditableMesh.FindPolygonHoleVertexNumberForVertex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::FindPolygonHoleVertexNumberForVertex(const struct FPolygonID& PolygonID, int HoleNumber, const struct FVertexID& VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonHoleVertexNumberForVertex");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		struct FVertexID               VertexID;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;
	params.VertexID = VertexID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonHoleEdgeNumberForVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVertexID               EdgeVertexID0                  (CPF_ConstParm, CPF_Parm)
// struct FVertexID               EdgeVertexID1                  (CPF_ConstParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UEditableMesh::FindPolygonHoleEdgeNumberForVertices(const struct FPolygonID& PolygonID, int HoleNumber, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonHoleEdgeNumberForVertices");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		struct FVertexID               EdgeVertexID0;
		struct FVertexID               EdgeVertexID1;
		int                            ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;
	params.EdgeVertexID0 = EdgeVertexID0;
	params.EdgeVertexID1 = EdgeVertexID1;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ExtrudePolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      Polygons                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          ExtrudeDistance                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bKeepNeighborsTogether         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FPolygonID>      OutNewExtrudedFrontPolygons    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtrudePolygons");

	struct
	{
		TArray<struct FPolygonID>      Polygons;
		float                          ExtrudeDistance;
		bool                           bKeepNeighborsTogether;
		TArray<struct FPolygonID>      OutNewExtrudedFrontPolygons;
	} params;

	params.Polygons = Polygons;
	params.ExtrudeDistance = ExtrudeDistance;
	params.bKeepNeighborsTogether = bKeepNeighborsTogether;

	UObject::ProcessEvent(fn, &params);

	if (OutNewExtrudedFrontPolygons != nullptr)
		*OutNewExtrudedFrontPolygons = params.OutNewExtrudedFrontPolygons;
}


// Function EditableMesh.EditableMesh.ExtendVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>       VertexIDs                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bOnlyExtendClosestEdge         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReferencePosition              (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// TArray<struct FVertexID>       OutNewExtendedVertexIDs        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendVertices");

	struct
	{
		TArray<struct FVertexID>       VertexIDs;
		bool                           bOnlyExtendClosestEdge;
		struct FVector                 ReferencePosition;
		TArray<struct FVertexID>       OutNewExtendedVertexIDs;
	} params;

	params.VertexIDs = VertexIDs;
	params.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutNewExtendedVertexIDs != nullptr)
		*OutNewExtendedVertexIDs = params.OutNewExtendedVertexIDs;
}


// Function EditableMesh.EditableMesh.ExtendEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDs                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bWeldNeighbors                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FEdgeID>         OutNewExtendedEdgeIDs          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendEdges");

	struct
	{
		TArray<struct FEdgeID>         EdgeIDs;
		bool                           bWeldNeighbors;
		TArray<struct FEdgeID>         OutNewExtendedEdgeIDs;
	} params;

	params.EdgeIDs = EdgeIDs;
	params.bWeldNeighbors = bWeldNeighbors;

	UObject::ProcessEvent(fn, &params);

	if (OutNewExtendedEdgeIDs != nullptr)
		*OutNewExtendedEdgeIDs = params.OutNewExtendedEdgeIDs;
}


// Function EditableMesh.EditableMesh.EndModification
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bFromUndo                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::EndModification(bool bFromUndo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.EndModification");

	struct
	{
		bool                           bFromUndo;
	} params;

	params.bFromUndo = bFromUndo;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.DeleteVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bDeleteOrphanedVertices        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexInstances");

	struct
	{
		TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete;
		bool                           bDeleteOrphanedVertices;
	} params;

	params.VertexInstanceIDsToDelete = VertexInstanceIDsToDelete;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FVertexID               VertexID                       (CPF_ConstParm, CPF_Parm)
// bool                           bDeleteOrphanedEdges           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteOrphanedVertices        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteOrphanedVertexInstances (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteEmptyPolygonGroups      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons");

	struct
	{
		struct FVertexID               VertexID;
		bool                           bDeleteOrphanedEdges;
		bool                           bDeleteOrphanedVertices;
		bool                           bDeleteOrphanedVertexInstances;
		bool                           bDeleteEmptyPolygonGroups;
	} params;

	params.VertexID = VertexID;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.DeletePolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDsToDelete             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bDeleteOrphanedEdges           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteOrphanedVertices        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteOrphanedVertexInstances (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteEmptyPolygonGroups      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygons");

	struct
	{
		TArray<struct FPolygonID>      PolygonIDsToDelete;
		bool                           bDeleteOrphanedEdges;
		bool                           bDeleteOrphanedVertices;
		bool                           bDeleteOrphanedVertexInstances;
		bool                           bDeleteEmptyPolygonGroups;
	} params;

	params.PolygonIDsToDelete = PolygonIDsToDelete;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.DeletePolygonGroups
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupID> PolygonGroupIDs                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygonGroups");

	struct
	{
		TArray<struct FPolygonGroupID> PolygonGroupIDs;
	} params;

	params.PolygonGroupIDs = PolygonGroupIDs;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.DeleteOrphanVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>       VertexIDsToDelete              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteOrphanVertices");

	struct
	{
		TArray<struct FVertexID>       VertexIDsToDelete;
	} params;

	params.VertexIDsToDelete = VertexIDsToDelete;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.DeleteEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>         EdgeIDsToDelete                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bDeleteOrphanedVertices        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdges");

	struct
	{
		TArray<struct FEdgeID>         EdgeIDsToDelete;
		bool                           bDeleteOrphanedVertices;
	} params;

	params.EdgeIDsToDelete = EdgeIDsToDelete;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FEdgeID                 EdgeID                         (CPF_ConstParm, CPF_Parm)
// bool                           bDeleteOrphanedEdges           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteOrphanedVertices        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteOrphanedVertexInstances (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDeleteEmptyPolygonGroups      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons");

	struct
	{
		struct FEdgeID                 EdgeID;
		bool                           bDeleteOrphanedEdges;
		bool                           bDeleteOrphanedVertices;
		bool                           bDeleteOrphanedVertexInstances;
		bool                           bDeleteEmptyPolygonGroups;
	} params;

	params.EdgeID = EdgeID;
	params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.CreateVertices
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexToCreate> VerticesToCreate               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVertexID>       OutNewVertexIDs                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertices");

	struct
	{
		TArray<struct FVertexToCreate> VerticesToCreate;
		TArray<struct FVertexID>       OutNewVertexIDs;
	} params;

	params.VerticesToCreate = VerticesToCreate;

	UObject::ProcessEvent(fn, &params);

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.CreateVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FVertexInstanceID> OutNewVertexInstanceIDs        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertexInstances");

	struct
	{
		TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate;
		TArray<struct FVertexInstanceID> OutNewVertexInstanceIDs;
	} params;

	params.VertexInstancesToCreate = VertexInstancesToCreate;

	UObject::ProcessEvent(fn, &params);

	if (OutNewVertexInstanceIDs != nullptr)
		*OutNewVertexInstanceIDs = params.OutNewVertexInstanceIDs;
}


// Function EditableMesh.EditableMesh.CreatePolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToCreate> PolygonsToCreate               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FPolygonID>      OutNewPolygonIDs               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygons");

	struct
	{
		TArray<struct FPolygonToCreate> PolygonsToCreate;
		TArray<struct FPolygonID>      OutNewPolygonIDs;
		TArray<struct FEdgeID>         OutNewEdgeIDs;
	} params;

	params.PolygonsToCreate = PolygonsToCreate;

	UObject::ProcessEvent(fn, &params);

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = params.OutNewPolygonIDs;
	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.CreatePolygonGroups
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FPolygonGroupID> OutNewPolygonGroupIDs          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygonGroups");

	struct
	{
		TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate;
		TArray<struct FPolygonGroupID> OutNewPolygonGroupIDs;
	} params;

	params.PolygonGroupsToCreate = PolygonGroupsToCreate;

	UObject::ProcessEvent(fn, &params);

	if (OutNewPolygonGroupIDs != nullptr)
		*OutNewPolygonGroupIDs = params.OutNewPolygonGroupIDs;
}


// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges");

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FEdgeID>         OutNewEdgeIDs;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.CreateMissingPolygonHoleEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// int                            HoleNumber                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::CreateMissingPolygonHoleEdges(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonHoleEdges");

	struct
	{
		struct FPolygonID              PolygonID;
		int                            HoleNumber;
		TArray<struct FEdgeID>         OutNewEdgeIDs;
	} params;

	params.PolygonID = PolygonID;
	params.HoleNumber = HoleNumber;

	UObject::ProcessEvent(fn, &params);

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            NumVerticesToCreate            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FVertexID>       OutNewVertexIDs                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::CreateEmptyVertexRange(int NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEmptyVertexRange");

	struct
	{
		int                            NumVerticesToCreate;
		TArray<struct FVertexID>       OutNewVertexIDs;
	} params;

	params.NumVerticesToCreate = NumVerticesToCreate;

	UObject::ProcessEvent(fn, &params);

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = params.OutNewVertexIDs;
}


// Function EditableMesh.EditableMesh.CreateEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FEdgeToCreate>   EdgesToCreate                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FEdgeID>         OutNewEdgeIDs                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEdges");

	struct
	{
		TArray<struct FEdgeToCreate>   EdgesToCreate;
		TArray<struct FEdgeID>         OutNewEdgeIDs;
	} params;

	params.EdgesToCreate = EdgesToCreate;

	UObject::ProcessEvent(fn, &params);

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = params.OutNewEdgeIDs;
}


// Function EditableMesh.EditableMesh.ComputePolygonTriangulation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// TArray<struct FMeshTriangle>   OutTriangles                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::ComputePolygonTriangulation(const struct FPolygonID& PolygonID, TArray<struct FMeshTriangle>* OutTriangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonTriangulation");

	struct
	{
		struct FPolygonID              PolygonID;
		TArray<struct FMeshTriangle>   OutTriangles;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	if (OutTriangles != nullptr)
		*OutTriangles = params.OutTriangles;
}


// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FEdgeID>         OutSharedEdgeIDs               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges");

	struct
	{
		TArray<struct FPolygonID>      PolygonIDs;
		TArray<struct FEdgeID>         OutSharedEdgeIDs;
	} params;

	params.PolygonIDs = PolygonIDs;

	UObject::ProcessEvent(fn, &params);

	if (OutSharedEdgeIDs != nullptr)
		*OutSharedEdgeIDs = params.OutSharedEdgeIDs;
}


// Function EditableMesh.EditableMesh.ComputePolygonPlane
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// struct FPlane                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FPlane UEditableMesh::ComputePolygonPlane(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonPlane");

	struct
	{
		struct FPolygonID              PolygonID;
		struct FPlane                  ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonNormal
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UEditableMesh::ComputePolygonNormal(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonNormal");

	struct
	{
		struct FPolygonID              PolygonID;
		struct FVector                 ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonCenter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UEditableMesh::ComputePolygonCenter(const struct FPolygonID& PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonCenter");

	struct
	{
		struct FPolygonID              PolygonID;
		struct FVector                 ReturnValue;
	} params;

	params.PolygonID = PolygonID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FBoxSphereBounds        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere");

	struct
	{
		struct FBoxSphereBounds        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBox
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FBox                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FBox UEditableMesh::ComputeBoundingBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBox");

	struct
	{
		struct FBox                    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FPolygonID              PolygonID                      (CPF_ConstParm, CPF_Parm)
// struct FVector                 PointOnPolygon                 (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FMeshTriangle           OutTriangle                    (CPF_Parm, CPF_OutParm)
// struct FVector                 OutTriangleVertexWeights       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::ComputeBarycentricWeightForPointOnPolygon(const struct FPolygonID& PolygonID, const struct FVector& PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon");

	struct
	{
		struct FPolygonID              PolygonID;
		struct FVector                 PointOnPolygon;
		struct FMeshTriangle           OutTriangle;
		struct FVector                 OutTriangleVertexWeights;
		bool                           ReturnValue;
	} params;

	params.PolygonID = PolygonID;
	params.PointOnPolygon = PointOnPolygon;

	UObject::ProcessEvent(fn, &params);

	if (OutTriangle != nullptr)
		*OutTriangle = params.OutTriangle;
	if (OutTriangleVertexWeights != nullptr)
		*OutTriangleVertexWeights = params.OutTriangleVertexWeights;

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.CommitInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     ComponentToInstanceTo          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UEditableMesh*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CommitInstance");

	struct
	{
		class UPrimitiveComponent*     ComponentToInstanceTo;
		class UEditableMesh*           ReturnValue;
	} params;

	params.ComponentToInstanceTo = ComponentToInstanceTo;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMesh.Commit
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UEditableMesh::Commit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Commit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UEditableMesh::ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances");

	struct
	{
		TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons;
	} params;

	params.VertexInstancesForPolygons = VertexInstancesForPolygons;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.BevelPolygons
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>      PolygonIDs                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          BevelFixedDistance             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BevelProgressTowardCenter      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FPolygonID>      OutNewCenterPolygonIDs         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FPolygonID>      OutNewSidePolygonIDs           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UEditableMesh::BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.BevelPolygons");

	struct
	{
		TArray<struct FPolygonID>      PolygonIDs;
		float                          BevelFixedDistance;
		float                          BevelProgressTowardCenter;
		TArray<struct FPolygonID>      OutNewCenterPolygonIDs;
		TArray<struct FPolygonID>      OutNewSidePolygonIDs;
	} params;

	params.PolygonIDs = PolygonIDs;
	params.BevelFixedDistance = BevelFixedDistance;
	params.BevelProgressTowardCenter = BevelProgressTowardCenter;

	UObject::ProcessEvent(fn, &params);

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
}


// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bDeleteOrphanedPolygonGroups   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups");

	struct
	{
		TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons;
		bool                           bDeleteOrphanedPolygonGroups;
	} params;

	params.PolygonGroupForPolygons = PolygonGroupForPolygons;
	params.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;

	UObject::ProcessEvent(fn, &params);
}


// Function EditableMesh.EditableMesh.AnyChangesToUndo
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableMesh::AnyChangesToUndo()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AnyChangesToUndo");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            LODIndex                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEditableMesh*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UEditableMesh* UEditableMeshFactory::MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int LODIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMeshFactory.MakeEditableMesh");

	struct
	{
		class UPrimitiveComponent*     PrimitiveComponent;
		int                            LODIndex;
		class UEditableMesh*           ReturnValue;
	} params;

	params.PrimitiveComponent = PrimitiveComponent;
	params.LODIndex = LODIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
