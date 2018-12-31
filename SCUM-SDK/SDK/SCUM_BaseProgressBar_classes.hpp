#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BaseProgressBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BaseProgressBar.BaseProgressBar_C
// 0x002D (0x028D - 0x0260)
class UBaseProgressBar_C : public UWindowsContent_C
{
public:
	struct FText                                       _titleBase;                                               // 0x0260(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              _percentage;                                              // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _previousPercentage;                                      // 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              _alarmThreshold;                                          // 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               _isClampingOn;                                            // 0x0284(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               _isAlarmOn;                                               // 0x0285(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0286(0x0002) MISSED OFFSET
	float                                              _alarmThresholdHigh;                                      // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               _isAlarmThresholdHighActive;                              // 0x028C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass BaseProgressBar.BaseProgressBar_C");
		return ptr;
	}


	void PercentageToUITextWOPercSign(float Value, struct FText* percentageString);
	void GetAlarmThresholdHigh(float* alarmThreshold);
	void SetAlarmThresholdHigh(float alarmThreshold);
	void CheckAlarmThresholdHigh(bool* shouldAlarmBeOn);
	void SetAlarmThresholdHighActive(bool shouldBeActive);
	void GetIsAlarmOn(bool* isAlarmOn);
	void PercentageToUIText(float Value, struct FText* percentageString);
	void SetClamping(bool shouldEnableClamping);
	void PercentageToText(float Value, struct FText* PercentageText);
	void GetPreviousPercentage(float* prevPercentage);
	void CheckAlarmThreshold(bool* shouldAlarmBeOn);
	void AlarmSwitchOn();
	void AlarmSwitchOff();
	void GetAlarmThreshold(float* alarmThreshold);
	void SetAlarmThreshold(float alarmThreshold);
	void PercentageToString(float Value, struct FString* percentageString);
	void PercentageToInt(float Value, int* percentageInt);
	void SetPreviousPercentage(float previousPercentage);
	void SavePercentageAsPrevious();
	void OnPercentageChanged();
	void SetTitleBase(const struct FText& Title);
	void GetTitleBase(struct FText* Title);
	void IncreasePercentage(float IncreasePercentage);
	void decreasePercentage(float decreasePercentage);
	void SetPercentage(float percentInputToSet);
	void GetPercentage(float* percentage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
