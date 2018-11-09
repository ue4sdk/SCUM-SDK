// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_SpawnSectorSelector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SetSelectedSector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InRow                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InColumn                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnSectorSelector_C::SetSelectedSector(int InRow, int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SetSelectedSector");

	struct
	{
		int                            InRow;
		int                            InColumn;
	} params;

	params.InRow = InRow;
	params.InColumn = InColumn;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.UpdateCurrentSector
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnRow                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnColumn                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnSectorSelector_C::UpdateCurrentSector(int* ReturnRow, int* ReturnColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.UpdateCurrentSector");

	struct
	{
		int                            ReturnRow;
		int                            ReturnColumn;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ReturnRow != nullptr)
		*ReturnRow = params.ReturnRow;
	if (ReturnColumn != nullptr)
		*ReturnColumn = params.ReturnColumn;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.GetSelectedSector
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            X                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Y                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnSectorSelector_C::GetSelectedSector(int* X, int* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.GetSelectedSector");

	struct
	{
		int                            X;
		int                            Y;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SelectSector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_SpawnSectorSelector_C::SelectSector(class UButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SelectSector");

	struct
	{
		class UButton*                 Button;
	} params;

	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_SpawnSectorSelector_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.ExecuteUbergraph_UI_SpawnSectorSelector
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_SpawnSectorSelector_C::ExecuteUbergraph_UI_SpawnSectorSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.ExecuteUbergraph_UI_SpawnSectorSelector");

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
