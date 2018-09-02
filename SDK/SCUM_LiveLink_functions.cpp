// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_LiveLink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// TMap<struct FName, float>      CurveItems                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ULiveLinkRemapAsset::RemapCurveElements(TMap<struct FName, float>* CurveItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.RemapCurveElements");

	struct
	{
		TMap<struct FName, float>      CurveItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CurveItems != nullptr)
		*CurveItems = params.CurveItems;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FName                   CurveName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName ULiveLinkRemapAsset::GetRemappedCurveName(const struct FName& CurveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName");

	struct
	{
		struct FName                   CurveName;
		struct FName                   ReturnValue;
	} params;

	params.CurveName = CurveName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName ULiveLinkRemapAsset::GetRemappedBoneName(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName");

	struct
	{
		struct FName                   BoneName;
		struct FName                   ReturnValue;
	} params;

	params.BoneName = BoneName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
