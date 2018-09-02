// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            Tag                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTag            Tag;
		bool                           ReturnValue;
	} params;

	params.Tag = Tag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            A                              (CPF_Parm)
// struct FString                 B                              (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag");

	struct
	{
		struct FGameplayTag            A;
		struct FString                 B;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   A                              (CPF_Parm)
// struct FString                 B                              (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer");

	struct
	{
		struct FGameplayTagContainer   A;
		struct FString                 B;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer");

	struct
	{
		struct FGameplayTagContainer   A;
		struct FGameplayTagContainer   B;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            A                              (CPF_Parm)
// struct FGameplayTag            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag");

	struct
	{
		struct FGameplayTag            A;
		struct FGameplayTag            B;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            TagOne                         (CPF_Parm)
// struct FGameplayTag            TagTwo                         (CPF_Parm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag");

	struct
	{
		struct FGameplayTag            TagOne;
		struct FGameplayTag            TagTwo;
		bool                           bExactMatch;
		bool                           ReturnValue;
	} params;

	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.bExactMatch = bExactMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            TagOne                         (CPF_Parm)
// struct FGameplayTagContainer   OtherContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags");

	struct
	{
		struct FGameplayTag            TagOne;
		struct FGameplayTagContainer   OtherContainer;
		bool                           bExactMatch;
		bool                           ReturnValue;
	} params;

	params.TagOne = TagOne;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   Value                          (CPF_Parm)
// struct FGameplayTagContainer   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer");

	struct
	{
		struct FGameplayTagContainer   Value;
		struct FGameplayTagContainer   ReturnValue;
	} params;

	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            Value                          (CPF_Parm)
// struct FGameplayTag            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(const struct FGameplayTag& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag");

	struct
	{
		struct FGameplayTag            Value;
		struct FGameplayTag            ReturnValue;
	} params;

	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagQuery       TagQuery                       (CPF_Parm)
// struct FGameplayTagQuery       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery");

	struct
	{
		struct FGameplayTagQuery       TagQuery;
		struct FGameplayTagQuery       ReturnValue;
	} params;

	params.TagQuery = TagQuery;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            SingleTag                      (CPF_Parm)
// struct FGameplayTagContainer   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag");

	struct
	{
		struct FGameplayTag            SingleTag;
		struct FGameplayTagContainer   ReturnValue;
	} params;

	params.SingleTag = SingleTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TArray<struct FGameplayTag>    GameplayTags                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray");

	struct
	{
		TArray<struct FGameplayTag>    GameplayTags;
		struct FGameplayTagContainer   ReturnValue;
	} params;

	params.GameplayTags = GameplayTags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            GameplayTag                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid");

	struct
	{
		struct FGameplayTag            GameplayTag;
		bool                           ReturnValue;
	} params;

	params.GameplayTag = GameplayTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            Tag                            (CPF_Parm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTag            Tag;
		bool                           bExactMatch;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.Tag = Tag;
	params.bExactMatch = bExactMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTagContainer   OtherContainer;
		bool                           bExactMatch;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bExactMatch                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTagContainer   OtherContainer;
		bool                           bExactMatch;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagContainer   OtherContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags");

	struct
	{
		TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;
		struct FGameplayTagContainer   OtherContainer;
		bool                           ReturnValue;
	} params;

	params.TagContainerInterface = TagContainerInterface;
	params.OtherContainer = OtherContainer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            GameplayTag                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UBlueprintGameplayTagLibrary::GetTagName(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName");

	struct
	{
		struct FGameplayTag            GameplayTag;
		struct FName                   ReturnValue;
	} params;

	params.GameplayTag = GameplayTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		int                            ReturnValue;
	} params;

	params.TagContainer = TagContainer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FString                 ReturnValue;
	} params;

	params.TagContainer = TagContainer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            GameplayTag                    (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag");

	struct
	{
		struct FGameplayTag            GameplayTag;
		struct FString                 ReturnValue;
	} params;

	params.GameplayTag = GameplayTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTagQuery       GameplayTagQuery               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  ActorClass;
		struct FGameplayTagQuery       GameplayTagQuery;
		TArray<class AActor*>          OutActors;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.GameplayTagQuery = GameplayTagQuery;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer");

	struct
	{
		struct FGameplayTagContainer   A;
		struct FGameplayTagContainer   B;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTag            A                              (CPF_Parm)
// struct FGameplayTag            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag");

	struct
	{
		struct FGameplayTag            A;
		struct FGameplayTag            B;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGameplayTag            Tag                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag");

	struct
	{
		TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;
		struct FGameplayTag            Tag;
		bool                           ReturnValue;
	} params;

	params.TagContainerInterface = TagContainerInterface;
	params.Tag = Tag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagQuery       TagQuery                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTagQuery       TagQuery;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FGameplayTag>    GameplayTags                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer");

	struct
	{
		struct FGameplayTagContainer   GameplayTagContainer;
		TArray<struct FGameplayTag>    GameplayTags;
	} params;

	params.GameplayTagContainer = GameplayTagContainer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GameplayTags != nullptr)
		*GameplayTags = params.GameplayTags;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   InOutTagContainer              (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTagContainer   InTagContainer                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers");

	struct
	{
		struct FGameplayTagContainer   InOutTagContainer;
		struct FGameplayTagContainer   InTagContainer;
	} params;

	params.InTagContainer = InTagContainer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FGameplayTag            Tag                            (CPF_Parm)

void UBlueprintGameplayTagLibrary::AddGameplayTag(const struct FGameplayTag& Tag, struct FGameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTag            Tag;
	} params;

	params.Tag = Tag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTag            TagToCheck                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag");

	struct
	{
		struct FGameplayTag            TagToCheck;
		bool                           ReturnValue;
	} params;

	params.TagToCheck = TagToCheck;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (CPF_Parm, CPF_OutParm)

void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags");

	struct
	{
		struct FGameplayTagContainer   TagContainer;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
