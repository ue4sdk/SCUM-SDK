#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_GameplayTags_enums.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTag
// 0x0008
struct FGameplayTag
{
	struct FName                                       TagName;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_SaveGame, CPF_IsPlainOldData)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0020
struct FGameplayTagContainer
{
	TArray<struct FGameplayTag>                        GameplayTags;                                             // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame)
	TArray<struct FGameplayTag>                        ParentTags;                                               // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
struct FGameplayTagQuery
{
	int                                                TokenStreamVersion;                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGameplayTag>                        TagDictionary;                                            // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<unsigned char>                              QueryTokenStream;                                         // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserDescription;                                          // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AutoDescription;                                          // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagSource
// 0x0020
struct FGameplayTagSource
{
	struct FName                                       SourceName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EGameplayTagSourceType                             SourceType;                                               // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UGameplayTagsList*                           SourceTagList;                                            // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class URestrictedGameplayTagsList*                 SourceRestrictedTagList;                                  // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0018 (0x0020 - 0x0008)
struct FGameplayTagTableRow : public FTableRowBase
{
	struct FName                                       Tag;                                                      // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DevComment;                                               // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// 0x0008 (0x0028 - 0x0020)
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
	bool                                               bAllowNonRestrictedChildren;                              // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// 0x0020
struct FGameplayTagCategoryRemap
{
	struct FString                                     BaseCategory;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FString>                             RemapCategories;                                          // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// 0x0010
struct FGameplayTagRedirect
{
	struct FName                                       OldTagName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewTagName;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// 0x0020
struct FRestrictedConfigInfo
{
	struct FString                                     RestrictedConfigName;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             Owners;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// 0x0001
struct FGameplayTagCreationWidgetHelper
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// 0x0010
struct FGameplayTagReferenceHelper
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0050
struct FGameplayTagNode
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
