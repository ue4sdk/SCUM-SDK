#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SplineMesh.SplineMesh
// 0x0044
struct FSplineMesh
{
	class UStaticMesh*                                 Mesh_3_98616D404E981A0E6506C995A298365A;                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_6_89054D3F4BE85A86523F23BFBCE05C49;             // 0x0010(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Width_9_999B615748F522C47271E5B5826B1A65;                 // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
