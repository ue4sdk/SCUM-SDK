#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_MenuPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C
// 0x0018 (0x0688 - 0x0670)
class ABP_MenuPlayerController_C : public AMenuPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0670(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class APrisoner*                                   Prisoner;                                                 // 0x0678(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               _isMouseDown;                                             // 0x0680(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	float                                              PrisonerRotationSpeed;                                    // 0x0684(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void InputComponent_MouseReleased();
	void InputComponent_MousePressed();
	void ExecuteUbergraph_BP_MenuPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
