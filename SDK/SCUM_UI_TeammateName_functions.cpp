// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_TeammateName_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TeammateName.UI_TeammateName_C.GetName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_TeammateName_C::GetName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeammateName.UI_TeammateName_C.GetName");

	struct
	{
		struct FString                 Name;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


// Function UI_TeammateName.UI_TeammateName_C.SetName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_TeammateName_C::SetName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeammateName.UI_TeammateName_C.SetName");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
