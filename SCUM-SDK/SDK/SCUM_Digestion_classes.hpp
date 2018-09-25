#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Digestion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Digestion.Digestion_C
// 0x0079 (0x02F9 - 0x0280)
class UDigestion_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UParameterLine_C*                            DigestionLineLeft;                                        // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UParameterLine_C*                            DigestionLineRight;                                       // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContentLeft;                                   // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContentRight;                                  // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                _digestionItemsCount;                                     // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	TArray<class UParameterLine_C*>                    _digestionLines;                                          // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class USickness*>                           _digestionItemsArray;                                     // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               _hasDigestionItemsCountChanged;                           // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass Digestion.Digestion_C");
		return ptr;
	}


	void HasContentSizeChanged(int oldDigestionItemCount, int newDigestionItemCount, bool* contentSizeChanged);
	void PrintArrayOfDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArray);
	void UpdateDigestionItemsCount();
	void DigestionItemToText(class UDigestionItem* digestionItemRef, struct FText* digestionItemName, struct FText* digestionItemID, struct FText* digestionItemWeight);
	void FillDigestionLine(class UParameterLine_C* digestionLineRef, class UDigestionItem* digestionItemRef);
	void CreateDigestionLine(class UDigestionItem* digestionItemRef, class UParameterLine_C** digestionParameterLine);
	void ShowDigestion(ESlateVisibility Visibility);
	void InitDigestionItems();
	void AddDigestionLine(int Index, class UParameterLine_C* digestionLineRef);
	void CreateDigestionLineFromText(const struct FText& digestionItemName, const struct FText& digestionItemID, const struct FText& digestionItemWeightRemained, class UParameterLine_C** digestionLine);
	void GetDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArrayRef);
	void SetDigestionCount(int digestionItemsCountToSet);
	void ClearDigestionLines();
	void CountDigestionItems(int* numberOfDigestionItems);
	void HasDigestionCountChanged(bool* sicknessCountChanged);
	void UpdateDigestion();
	struct FText GetTitleText();
	void GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void Construct();
	void OnMinimize(bool shouldMinimize);
	void OnPrisonerSet();
	void UpdateContent();
	void ExecuteUbergraph_Digestion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
