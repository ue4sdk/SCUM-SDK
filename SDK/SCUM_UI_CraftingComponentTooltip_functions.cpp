// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CraftingComponentTooltip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CraftingComponentTooltip.UI_CraftingComponentTooltip_C.InitFromItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_CraftingComponent_C* componentWidget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_CraftingComponentTooltip_C::InitFromItem(class UUI_CraftingComponent_C* componentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponentTooltip.UI_CraftingComponentTooltip_C.InitFromItem");

	struct
	{
		class UUI_CraftingComponent_C* componentWidget;
	} params;

	params.componentWidget = componentWidget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
