// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventLeaderboardRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UUI_GameEventLeaderboardRow_C::Get_Background_BrushColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLeaderboardRow_C::SetRank(int rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank");

	struct
	{
		int                            rank;
	} params;

	params.rank = rank;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 characterName                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FCharacterStats         CharacterStats                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_GameEventLeaderboardRow_C::SetStats(const struct FString& characterName, const struct FCharacterStats& CharacterStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats");

	struct
	{
		struct FString                 characterName;
		struct FCharacterStats         CharacterStats;
	} params;

	params.characterName = characterName;
	params.CharacterStats = CharacterStats;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
