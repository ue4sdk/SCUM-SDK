#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Airport_Terrace_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Airport_Terrace_01.BP_Airport_Terrace_01_C
// 0x0058 (0x0370 - 0x0318)
class ABP_Airport_Terrace_01_C : public AActor
{
public:
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh9;                         // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh8;                         // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh7;                         // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh6;                         // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh5;                         // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh4;                         // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh3;                         // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh2;                         // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh1;                         // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh;                          // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Airport_Terrace_01.BP_Airport_Terrace_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
