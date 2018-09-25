// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_TeamInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_TeamInfo.UI_TeamInfo_C.ClearTeammateNames
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_TeamInfo_C::ClearTeammateNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.ClearTeammateNames");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamInfo.UI_TeamInfo_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UUI_TeamInfo_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.GetVisibility_1");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_TeamInfo.UI_TeamInfo_C.RemoveTeammateName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_TeamInfo_C::RemoveTeammateName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.RemoveTeammateName");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamInfo.UI_TeamInfo_C.AddTeammateName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_TeamInfo_C::AddTeammateName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.AddTeammateName");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamInfo.UI_TeamInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_TeamInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_TeamInfo.UI_TeamInfo_C.ExecuteUbergraph_UI_TeamInfo
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_TeamInfo_C::ExecuteUbergraph_UI_TeamInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TeamInfo.UI_TeamInfo_C.ExecuteUbergraph_UI_TeamInfo");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
