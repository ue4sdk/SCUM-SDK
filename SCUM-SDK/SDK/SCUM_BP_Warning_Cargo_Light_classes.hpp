#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Warning_Cargo_Light_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C
// 0x0021 (0x0349 - 0x0328)
class ABP_Warning_Cargo_Light_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UChildActorComponent*                        SpotLight;                                                // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              YawAngle;                                                 // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               LightOn;                                                  // 0x0348(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Warning_Cargo_Light.BP_Warning_Cargo_Light_C");
		return ptr;
	}


	void GetLight(bool* LightOn);
	void SetLight(bool Enabled);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Warning_Cargo_Light(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
