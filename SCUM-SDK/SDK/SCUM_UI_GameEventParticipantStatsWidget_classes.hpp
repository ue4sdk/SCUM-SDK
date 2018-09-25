#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_GameEventParticipantStatsWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C
// 0x007C (0x02BC - 0x0240)
class UUI_GameEventParticipantStatsWidget_C : public UGameEventParticipantStatsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FLinearColor                                TextColor;                                                // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                _lastTeamIndex;                                           // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameEventTeamColours                       TeamColours;                                              // 0x025C(0x0060) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C");
		return ptr;
	}


	void UpdateTeamColor(int TeamIndex);
	struct FText UpdateNumber();
	bool IsOwning();
	ESlateVisibility GetSelectedOverlayVisiblity();
	ESlateVisibility GetInactiveOverlayVisibility();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void UpdateColours();
	void SetColours(const struct FGameEventTeamColours& colours);
	void UpdateStats();
	void ExecuteUbergraph_UI_GameEventParticipantStatsWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
