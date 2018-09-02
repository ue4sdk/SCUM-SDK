// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ImgMedia_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImgMedia.ImgMediaSource.SetSequencePath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_ZeroConstructor)

void UImgMediaSource::SetSequencePath(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");

	struct
	{
		struct FString                 Path;
	} params;

	params.Path = Path;

	UObject::ProcessEvent(fn, &params);
}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UImgMediaSource::GetSequencePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ImgMedia.ImgMediaSource.GetProxies
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FString>         OutProxies                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UImgMediaSource::GetProxies(TArray<struct FString>* OutProxies)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");

	struct
	{
		TArray<struct FString>         OutProxies;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutProxies != nullptr)
		*OutProxies = params.OutProxies;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
