#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_The_Island_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass The_Island.The_Island_C
// 0x0020 (0x0340 - 0x0320)
class AThe_Island_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	float                                              TimeDilation;                                             // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MouseSensitivityPitchScale;                               // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MouseSensitivityYawScale;                                 // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class AWeatherController_C*                        WeatherController_ExecuteUbergraph_The_Island_RefProperty;// 0x0338(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass The_Island.The_Island_C");
		return ptr;
	}


	void Recapture();
	void WorldOriginLocationChanged(const struct FIntVector& OldOriginLocation, const struct FIntVector& NewOriginLocation);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_The_Island(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
