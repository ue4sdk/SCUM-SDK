#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Christmas_tree_Decorated_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Christmas_tree_Decorated.Christmas_tree_Decorated_C
// 0x0008 (0x0708 - 0x0700)
class AChristmas_tree_Decorated_C : public AItem
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0700(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Christmas_tree_Decorated.Christmas_tree_Decorated_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
