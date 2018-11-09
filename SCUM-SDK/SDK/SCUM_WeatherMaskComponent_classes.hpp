#pragma once

// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_WeatherMaskComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeatherMaskComponent.WeatherMaskComponent_C
// 0x0010 (0x0250 - 0x0240)
class UWeatherMaskComponent_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class APrisonerPlayerController*                   PlayerController;                                         // 0x0248(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WeatherMaskComponent.WeatherMaskComponent_C");
		return ptr;
	}


	void ShowComponents();
	void HideComponents();
	void ReceiveBeginPlay();
	void OnActorDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_WeatherMaskComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
