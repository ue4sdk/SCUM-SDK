// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventTeamHeaderWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TeamIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventTeamHeaderWidget_C::SetTeamIndex(int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex");

	struct
	{
		int                            TeamIndex;
	} params;

	params.TeamIndex = TeamIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventTeamHeaderWidget_C::SetTeamScore(float Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore");

	struct
	{
		float                          Score;
	} params;

	params.Score = Score;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventTeamHeaderWidget_C::SetRightSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventTeamHeaderWidget_C::SetLeftSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameEventTeamColours   colours                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_GameEventTeamHeaderWidget_C::SetTeamColours(const struct FGameEventTeamColours& colours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours");

	struct
	{
		struct FGameEventTeamColours   colours;
	} params;

	params.colours = colours;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_GameEventTeamHeaderWidget_C::SetTeamName(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName");

	struct
	{
		struct FText                   Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
