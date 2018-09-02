#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Menu.Menu_C
// 0x0028 (0x0348 - 0x0320)
class AMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class AWeatherController_C*                        WeatherController_ExecuteUbergraph_Menu_RefProperty;      // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ABP_Prisoner_C*                              BP_Prisoner_4136_ExecuteUbergraph_Menu_RefProperty;       // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      FollowsCursorActor_ExecuteUbergraph_Menu_RefProperty;     // 0x0338(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASceneCapture2D*                             HeadCapture_ExecuteUbergraph_Menu_RefProperty;            // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Menu.Menu_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Recapture();
	void ExecuteUbergraph_Menu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
