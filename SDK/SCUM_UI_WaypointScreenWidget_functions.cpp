// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_WaypointScreenWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWaypointWidget*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_WaypointScreenWidget_C::AddWaypointWidgetToScreen(class UWaypointWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen");

	struct
	{
		class UWaypointWidget*         Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWaypointWidget*         Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_WaypointScreenWidget_C::RemoveWaypointWidgetFromScreen(class UWaypointWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen");

	struct
	{
		class UWaypointWidget*         Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_WaypointScreenWidget_C::ExecuteUbergraph_UI_WaypointScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget");

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
