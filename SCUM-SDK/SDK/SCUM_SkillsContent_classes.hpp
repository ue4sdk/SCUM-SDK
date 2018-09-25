#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_SkillsContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass SkillsContent.SkillsContent_C
// 0x0060 (0x02E0 - 0x0280)
class USkillsContent_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USafeZone*                                   SafeZonePadding;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContent;                                       // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	ESkillAttribute                                    _skillType;                                               // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	int                                                _skillsCount;                                             // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              deltaTimeCounter;                                         // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	TArray<class USkillLine2_C*>                       _currentTypeSkillLines;                                   // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass SkillsContent.SkillsContent_C");
		return ptr;
	}


	void FilterSkillsBySkillType(TArray<class USkill*>* allSkills, TArray<class USkill*>* skillsOfType);
	void SkillToText(class USkill* skillRef, struct FText* skillNameText, struct FText* skillPointsText, struct FText* maxValueText, float* percentage, float* skillLevelPercentage);
	void IsSkillTypeMatching(class USkill* Skill, bool* matchingSkill);
	void CountSkills(TArray<class USkill*>* skillArray, int* skillCount);
	void ClearSkillLinesContent();
	void UpdateSkillsCount(TArray<class USkill*>* skillArray);
	bool HasSkillCountChanged(TArray<class USkill*>* skillArray);
	void SkillToSkillText(const struct FString& skillName, float ExperiencePoints, ESkillLevel skillLevel, struct FText* skillNameText, struct FText* skillPointsText, struct FText* maxValueText, float* percentage, float* skillLevelPercentage);
	void GetSkillsCount(int* count);
	TArray<class USkill*> GetAllSkills();
	void FillSkillLine(class USkillLine2_C* skillLine2Ref, class USkill* Skill);
	void CreateSkillLine(const struct FText& skillName, const struct FText& skillValueText, const struct FText& maxSkillValueText, float percentage, float skillLevelPercentage, class USkillLine2_C** skillLineRef);
	void AddSkillLine(class USkillLine2_C* skillLineRef);
	void SetSkillsCount(int count);
	void InitSkillsContentCountAndType(ESkillAttribute skillType);
	void GetSkillType(ESkillAttribute* skillType);
	void SetSkillType(ESkillAttribute skillType);
	void UpdateSkills();
	struct FText GetTitleText();
	void SetSkillsContentVisibility(ESlateVisibility Visibility);
	void GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void OnMinimize(bool shouldMinimize);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateContent();
	void OnPrisonerSet();
	void ExecuteUbergraph_SkillsContent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
