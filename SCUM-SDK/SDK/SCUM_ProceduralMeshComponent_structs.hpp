#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_ProceduralMeshComponent_enums.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010
struct FProcMeshTangent
{
	struct FVector                                     TangentX;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	bool                                               bFlipTangentY;                                            // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x004C
struct FProcMeshVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FProcMeshTangent                            Tangent;                                                  // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FColor                                      Color;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x002C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   UV1;                                                      // 0x0034(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   UV2;                                                      // 0x003C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector2D                                   UV3;                                                      // 0x0044(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040
struct FProcMeshSection
{
	TArray<struct FProcMeshVertex>                     ProcVertexBuffer;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<uint32_t>                                   ProcIndexBuffer;                                          // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        SectionLocalBox;                                          // 0x0020(0x001C) (CPF_IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSectionVisible;                                          // 0x003D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
