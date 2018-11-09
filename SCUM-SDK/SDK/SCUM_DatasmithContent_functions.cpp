// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_DatasmithContent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Key                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey");

	struct
	{
		class UObject*                 Object;
		struct FName                   Key;
		struct FString                 ReturnValue;
	} params;

	params.Object = Object;
	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 StringToMatch                  (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FName>           OutKeys                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// TArray<struct FString>         OutValues                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue");

	struct
	{
		class UObject*                 Object;
		struct FString                 StringToMatch;
		TArray<struct FName>           OutKeys;
		TArray<struct FString>         OutValues;
	} params;

	params.Object = Object;
	params.StringToMatch = StringToMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
	if (OutValues != nullptr)
		*OutValues = params.OutValues;
}


// Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDatasmithAssetUserData* ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData");

	struct
	{
		class UObject*                 Object;
		class UDatasmithAssetUserData* ReturnValue;
	} params;

	params.Object = Object;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
