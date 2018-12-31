#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles = 0,
	ETriangleTessellationMode__FourTriangles = 1,
	ETriangleTessellationMode__ETriangleTessellationMode_MAX = 2
};


// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All        = 0,
	EInsetPolygonsMode__CenterPolygonOnly = 1,
	EInsetPolygonsMode__SidePolygonsOnly = 2,
	EInsetPolygonsMode__EInsetPolygonsMode_MAX = 3
};


// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft = 0,
	EPolygonEdgeHardness__NewEdgesHard = 1,
	EPolygonEdgeHardness__AllEdgesSoft = 2,
	EPolygonEdgeHardness__AllEdgesHard = 3,
	EPolygonEdgeHardness__EPolygonEdgeHardness_MAX = 4
};


// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None = 0,
	EMeshElementAttributeType__FVector4 = 1,
	EMeshElementAttributeType__FVector = 2,
	EMeshElementAttributeType__FVector2D = 3,
	EMeshElementAttributeType__Float = 4,
	EMeshElementAttributeType__Int = 5,
	EMeshElementAttributeType__Bool = 6,
	EMeshElementAttributeType__FName = 7,
	EMeshElementAttributeType__EMeshElementAttributeType_MAX = 8
};


// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange = 0,
	EMeshTopologyChange__TopologyChange = 1,
	EMeshTopologyChange__EMeshTopologyChange_MAX = 2
};


// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim = 0,
	EMeshModificationType__Interim = 1,
	EMeshModificationType__Final   = 2,
	EMeshModificationType__EMeshModificationType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
