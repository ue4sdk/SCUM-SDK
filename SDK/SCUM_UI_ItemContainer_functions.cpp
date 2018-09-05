// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ItemContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ItemContainer.UI_ItemContainer_C.GetDurabilityPercentageText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UUI_ItemContainer_C::GetDurabilityPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemContainer.UI_ItemContainer_C.GetDurabilityPercentageText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_ItemContainer.UI_ItemContainer_C.InitFromItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemContainer_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemContainer.UI_ItemContainer_C.InitFromItem");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemContainer.UI_ItemContainer_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_ItemContainer_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemContainer.UI_ItemContainer_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
