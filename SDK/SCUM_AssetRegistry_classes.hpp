#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AssetRegistry_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AssetRegistry.AssetRegistryImpl
// 0x09F8 (0x0A20 - 0x0028)
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x9F8];                                     // 0x0028(0x09F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AssetRegistry.AssetRegistryImpl");
		return ptr;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AssetRegistry.AssetRegistryHelpers");
		return ptr;
	}


	static struct FSoftObjectPath ToSoftObjectPath(const struct FAssetData& InAssetData);
	static struct FARFilter SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues);
	static bool IsValid(const struct FAssetData& InAssetData);
	static bool IsUAsset(const struct FAssetData& InAssetData);
	static bool IsRedirector(const struct FAssetData& InAssetData);
	static bool IsAssetLoaded(const struct FAssetData& InAssetData);
	static bool GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue);
	static struct FString GetFullName(const struct FAssetData& InAssetData);
	static struct FString GetExportTextName(const struct FAssetData& InAssetData);
	static class UClass* GetClass(const struct FAssetData& InAssetData);
	static TScriptInterface<class UAssetRegistry> GetAssetRegistry();
	static class UObject* GetAsset(const struct FAssetData& InAssetData);
	static struct FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AssetRegistry.AssetRegistry");
		return ptr;
	}


	void RunAssetsThroughFilter(const struct FARFilter& Filter, TArray<struct FAssetData>* AssetDataList);
	bool IsLoadingAssets();
	bool HasAssets(const struct FName& PackagePath, bool bRecursive);
	void GetSubPaths(const struct FString& InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList);
	bool GetAssetsByPath(const struct FName& PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByPackageName(const struct FName& PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByClass(const struct FName& ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData);
	bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData);
	struct FAssetData GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);
	void GetAllCachedPaths(TArray<struct FString>* OutPathList);
	bool GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
