// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AssetRegistry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FSoftObjectPath         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath");

	struct
	{
		struct FAssetData              InAssetData;
		struct FSoftObjectPath         ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FARFilter               InFilter                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FTagAndValue>    InTagsAndValues                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FARFilter               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues");

	struct
	{
		struct FARFilter               InFilter;
		TArray<struct FTagAndValue>    InTagsAndValues;
		struct FARFilter               ReturnValue;
	} params;

	params.InFilter = InFilter;
	params.InTagsAndValues = InTagsAndValues;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsValid");

	struct
	{
		struct FAssetData              InAssetData;
		bool                           ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsUAsset");

	struct
	{
		struct FAssetData              InAssetData;
		bool                           ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsRedirector");

	struct
	{
		struct FAssetData              InAssetData;
		bool                           ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded");

	struct
	{
		struct FAssetData              InAssetData;
		bool                           ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   InTagName                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FString                 OutTagValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetTagValue");

	struct
	{
		struct FAssetData              InAssetData;
		struct FName                   InTagName;
		struct FString                 OutTagValue;
		bool                           ReturnValue;
	} params;

	params.InAssetData = InAssetData;
	params.InTagName = InTagName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutTagValue != nullptr)
		*OutTagValue = params.OutTagValue;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetFullName");

	struct
	{
		struct FAssetData              InAssetData;
		struct FString                 ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetExportTextName");

	struct
	{
		struct FAssetData              InAssetData;
		struct FString                 ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetClass");

	struct
	{
		struct FAssetData              InAssetData;
		class UClass*                  ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UAssetRegistry> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TScriptInterface<class UAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry");

	struct
	{
		TScriptInterface<class UAssetRegistry> ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAssetData              InAssetData                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAsset");

	struct
	{
		struct FAssetData              InAssetData;
		class UObject*                 ReturnValue;
	} params;

	params.InAssetData = InAssetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 InAsset                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAllowBlueprintClass           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAssetData              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAssetData UAssetRegistryHelpers::CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.CreateAssetData");

	struct
	{
		class UObject*                 InAsset;
		bool                           bAllowBlueprintClass;
		struct FAssetData              ReturnValue;
	} params;

	params.InAsset = InAsset;
	params.bAllowBlueprintClass = bAllowBlueprintClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSynchronousSearch             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.SearchAllAssets");

	struct
	{
		bool                           bSynchronousSearch;
	} params;

	params.bSynchronousSearch = bSynchronousSearch;

	UObject::ProcessEvent(fn, &params);
}


// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         InPaths                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bForceRescan                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAssetRegistry::ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanPathsSynchronous");

	struct
	{
		TArray<struct FString>         InPaths;
		bool                           bForceRescan;
	} params;

	params.InPaths = InPaths;
	params.bForceRescan = bForceRescan;

	UObject::ProcessEvent(fn, &params);
}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFilePaths                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UAssetRegistry::ScanModifiedAssetFiles(TArray<struct FString> InFilePaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles");

	struct
	{
		TArray<struct FString>         InFilePaths;
	} params;

	params.InFilePaths = InFilePaths;

	UObject::ProcessEvent(fn, &params);
}


// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFilePaths                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bForceRescan                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAssetRegistry::ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanFilesSynchronous");

	struct
	{
		TArray<struct FString>         InFilePaths;
		bool                           bForceRescan;
	} params;

	params.InFilePaths = InFilePaths;
	params.bForceRescan = bForceRescan;

	UObject::ProcessEvent(fn, &params);
}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FAssetData>      AssetDataList                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FARFilter               Filter                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAssetRegistry::RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter");

	struct
	{
		TArray<struct FAssetData>      AssetDataList;
		struct FARFilter               Filter;
	} params;

	params.Filter = Filter;

	UObject::ProcessEvent(fn, &params);

	if (AssetDataList != nullptr)
		*AssetDataList = params.AssetDataList;
}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PathToPrioritize               (CPF_Parm, CPF_ZeroConstructor)

void UAssetRegistry::PrioritizeSearchPath(const struct FString& PathToPrioritize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.PrioritizeSearchPath");

	struct
	{
		struct FString                 PathToPrioritize;
	} params;

	params.PathToPrioritize = PathToPrioritize;

	UObject::ProcessEvent(fn, &params);
}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistry::IsLoadingAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.IsLoadingAssets");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.HasAssets
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   PackagePath                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRecursive                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistry::HasAssets(const struct FName& PackagePath, bool bRecursive)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.HasAssets");

	struct
	{
		struct FName                   PackagePath;
		bool                           bRecursive;
		bool                           ReturnValue;
	} params;

	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 InBasePath                     (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FString>         OutPathList                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           bInRecurse                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAssetRegistry::GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetSubPaths");

	struct
	{
		struct FString                 InBasePath;
		TArray<struct FString>         OutPathList;
		bool                           bInRecurse;
	} params;

	params.InBasePath = InBasePath;
	params.bInRecurse = bInRecurse;

	UObject::ProcessEvent(fn, &params);

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   PackagePath                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           bRecursive                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistry::GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPath");

	struct
	{
		struct FName                   PackagePath;
		TArray<struct FAssetData>      OutAssetData;
		bool                           bRecursive;
		bool                           bIncludeOnlyOnDiskAssets;
		bool                           ReturnValue;
	} params;

	params.PackagePath = PackagePath;
	params.bRecursive = bRecursive;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	UObject::ProcessEvent(fn, &params);

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   PackageName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           bIncludeOnlyOnDiskAssets       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistry::GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPackageName");

	struct
	{
		struct FName                   PackageName;
		TArray<struct FAssetData>      OutAssetData;
		bool                           bIncludeOnlyOnDiskAssets;
		bool                           ReturnValue;
	} params;

	params.PackageName = PackageName;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	UObject::ProcessEvent(fn, &params);

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ClassName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           bSearchSubClasses              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistry::GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByClass");

	struct
	{
		struct FName                   ClassName;
		TArray<struct FAssetData>      OutAssetData;
		bool                           bSearchSubClasses;
		bool                           ReturnValue;
	} params;

	params.ClassName = ClassName;
	params.bSearchSubClasses = bSearchSubClasses;

	UObject::ProcessEvent(fn, &params);

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssets
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FARFilter               Filter                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssets");

	struct
	{
		struct FARFilter               Filter;
		TArray<struct FAssetData>      OutAssetData;
		bool                           ReturnValue;
	} params;

	params.Filter = Filter;

	UObject::ProcessEvent(fn, &params);

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ObjectPath                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIncludeOnlyOnDiskAssets       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAssetData              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAssetData UAssetRegistry::GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetByObjectPath");

	struct
	{
		struct FName                   ObjectPath;
		bool                           bIncludeOnlyOnDiskAssets;
		struct FAssetData              ReturnValue;
	} params;

	params.ObjectPath = ObjectPath;
	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FString>         OutPathList                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UAssetRegistry::GetAllCachedPaths(TArray<struct FString>* OutPathList)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllCachedPaths");

	struct
	{
		TArray<struct FString>         OutPathList;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutPathList != nullptr)
		*OutPathList = params.OutPathList;
}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FAssetData>      OutAssetData                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           bIncludeOnlyOnDiskAssets       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAssetRegistry::GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllAssets");

	struct
	{
		TArray<struct FAssetData>      OutAssetData;
		bool                           bIncludeOnlyOnDiskAssets;
		bool                           ReturnValue;
	} params;

	params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

	UObject::ProcessEvent(fn, &params);

	if (OutAssetData != nullptr)
		*OutAssetData = params.OutAssetData;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
