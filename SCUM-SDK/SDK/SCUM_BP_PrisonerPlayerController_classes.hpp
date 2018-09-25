#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_PrisonerPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PrisonerPlayerController.BP_PrisonerPlayerController_C
// 0x0010 (0x0788 - 0x0778)
class ABP_PrisonerPlayerController_C : public APrisonerPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0778(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UUI_GameMenu_C*                              GameMenu;                                                 // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PrisonerPlayerController.BP_PrisonerPlayerController_C");
		return ptr;
	}


	void CreateGameMenu();
	void ToggleGameMenu();
	void UserConstructionScript();
	void ToggleGameMenuEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PrisonerPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
