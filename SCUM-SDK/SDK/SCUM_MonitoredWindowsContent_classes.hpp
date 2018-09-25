#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MonitoredWindowsContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MonitoredWindowsContent.MonitoredWindowsContent_C
// 0x0020 (0x0280 - 0x0260)
class UMonitoredWindowsContent_C : public UWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class APrisoner*                                   _prisoner;                                                // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               _isPrisonerSet;                                           // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	struct FTimerHandle                                _updateContentTimer;                                      // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass MonitoredWindowsContent.MonitoredWindowsContent_C");
		return ptr;
	}


	void GetUpdateContentTimer(struct FTimerHandle* updateContentTimer);
	void IsBCUDataInitialized(bool* IsBCUDataInitialized);
	void NotifyParentOnAlarmSwitchedOff();
	void NotifyParentOnAlarmRaised();
	void IsPrisonerLifeComponentValid(bool* isLifeComponentValid);
	void GetPrisoner(class APrisoner** Prisoner);
	void SetDefaultPrisonerToMonitor(bool* Success);
	void SetPrisonerToMonitor(class APrisoner* Prisoner, bool* Success);
	void GetDefaultPrisoner(class APrisoner** Prisoner);
	void OnPrisonerSet();
	void UpdateContent();
	void ExecuteUbergraph_MonitoredWindowsContent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
