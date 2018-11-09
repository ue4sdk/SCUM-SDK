// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventLeaderboardWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::SetTopShownCount(int count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount");

	struct
	{
		int                            count;
	} params;

	params.count = count;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_GameEventLeaderboardRow_C* row                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::AssignRowColor(class UUI_GameEventLeaderboardRow_C* row, int rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor");

	struct
	{
		class UUI_GameEventLeaderboardRow_C* row;
		int                            rank;
	} params;

	params.row = row;
	params.rank = rank;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::UpdateTopList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterStatsSorting         sort                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           descending                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::RefreshData(ECharacterStatsSorting sort, bool descending)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData");

	struct
	{
		ECharacterStatsSorting         sort;
		bool                           descending;
	} params;

	params.sort = sort;
	params.descending = descending;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::UpdateRankingList(int rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList");

	struct
	{
		int                            rank;
	} params;

	params.rank = rank;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FCharacterStatsItem> StatsItems                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UVerticalBox*            TargetWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::UpdateList(class UVerticalBox* TargetWidget, TArray<struct FCharacterStatsItem>* StatsItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList");

	struct
	{
		TArray<struct FCharacterStatsItem> StatsItems;
		class UVerticalBox*            TargetWidget;
	} params;

	params.TargetWidget = TargetWidget;

	UObject::ProcessEvent(fn, &params);

	if (StatsItems != nullptr)
		*StatsItems = params.StatsItems;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::UpdateTopPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::UpdatePlayerRanking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::ExecuteUbergraph_UI_GameEventLeaderboardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget");

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
