#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Wristwatch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C
// 0x0018 (0x0340 - 0x0328)
class ABP_Wristwatch_C : public AWristwatch
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UWidgetComponent*                            FaceWidget;                                               // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C");
		return ptr;
	}


	void UpdateFatnessLeannessVisuals();
	void UserConstructionScript();
	void SetTime(float Value);
	void ReceiveBeginPlay();
	void ToggleDisplayVisibility(bool Visiblity);
	void SetDisplayBrightness(float Value);
	void ExecuteUbergraph_BP_Wristwatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
