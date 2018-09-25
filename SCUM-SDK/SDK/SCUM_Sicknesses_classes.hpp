#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Sicknesses_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Sicknesses.Sicknesses_C
// 0x0090 (0x0310 - 0x0280)
class USicknesses_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParameterLine_C*                            sicknessLine;                                             // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContent;                                       // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                _sicknessCount;                                           // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	TArray<class UParameterLine_C*>                    _sicknessLines;                                           // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class USickness*>                           _sicknessesArray;                                         // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               _hasSicknessCountChanged;                                 // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    AlarmOnSicknessesEventDispatcher;                         // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    AlarmOffSicknessesEventDispatcher;                        // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass Sicknesses.Sicknesses_C");
		return ptr;
	}


	void HasContentSizeChanged(int oldSicknessCount, int newSicknessCount, bool* contentSizeChanged);
	void CheckForAlarms(int previousSicknessCount, int sicknessCount);
	void UpdateSicknessCount();
	void SicknessToText(class USickness* sicknessRef, struct FText* SicknessName, struct FText* sicknessState, struct FText* sicknessPhase);
	void FillSicknessLine(class UParameterLine_C* sicknessLineRef, class USickness* Sickness);
	void UpdateSicknessLine();
	void CreateSicknessLine(class USickness* sicknessRef, class UParameterLine_C** sicknessParameterLine);
	void ShowSickness(ESlateVisibility Visibility);
	void InitSicknesses();
	void AddSicknessLine(class UParameterLine_C* sicknessLineRef);
	void CreateSicknessLineFromText(const struct FText& SicknessName, const struct FText& SicknessTextValue, const struct FText& SicknessMaxValue, class UParameterLine_C** sicknessLine);
	TArray<class USickness*> GetSicknesses();
	void SetSicknessCount(int sicknessCountToSet);
	void ClearSicknessLines();
	void CountSicknesses(int* numberOfSicknesses);
	void HasSicknessCountChanged(bool* sicknessCountChanged);
	void UpdateSicknesses();
	struct FText GetTitleText();
	void GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void Construct();
	void OnMinimize(bool shouldMinimize);
	void OnPrisonerSet();
	void UpdateContent();
	void SicknessEmergedShouldActivateAlarm();
	void SicknessGoneShouldDeactivateAlarm();
	void ExecuteUbergraph_Sicknesses(int EntryPoint);
	void AlarmOffSicknessesEventDispatcher__DelegateSignature();
	void AlarmOnSicknessesEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
