// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Digestion_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Digestion.Digestion_C.HasContentSizeChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            oldDigestionItemCount          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            newDigestionItemCount          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           contentSizeChanged             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDigestion_C::HasContentSizeChanged(int oldDigestionItemCount, int newDigestionItemCount, bool* contentSizeChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.HasContentSizeChanged");

	struct
	{
		int                            oldDigestionItemCount;
		int                            newDigestionItemCount;
		bool                           contentSizeChanged;
	} params;

	params.oldDigestionItemCount = oldDigestionItemCount;
	params.newDigestionItemCount = newDigestionItemCount;

	UObject::ProcessEvent(fn, &params);

	if (contentSizeChanged != nullptr)
		*contentSizeChanged = params.contentSizeChanged;
}


// Function Digestion.Digestion_C.PrintArrayOfDigestionItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UDigestionItem*>  digestionItemsTArray           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UDigestion_C::PrintArrayOfDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.PrintArrayOfDigestionItems");

	struct
	{
		TArray<class UDigestionItem*>  digestionItemsTArray;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (digestionItemsTArray != nullptr)
		*digestionItemsTArray = params.digestionItemsTArray;
}


// Function Digestion.Digestion_C.UpdateDigestionItemsCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDigestion_C::UpdateDigestionItemsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.UpdateDigestionItemsCount");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.DigestionItemToText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDigestionItem*          digestionItemRef               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   digestionItemName              (CPF_Parm, CPF_OutParm)
// struct FText                   digestionItemID                (CPF_Parm, CPF_OutParm)
// struct FText                   digestionItemWeight            (CPF_Parm, CPF_OutParm)

void UDigestion_C::DigestionItemToText(class UDigestionItem* digestionItemRef, struct FText* digestionItemName, struct FText* digestionItemID, struct FText* digestionItemWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.DigestionItemToText");

	struct
	{
		class UDigestionItem*          digestionItemRef;
		struct FText                   digestionItemName;
		struct FText                   digestionItemID;
		struct FText                   digestionItemWeight;
	} params;

	params.digestionItemRef = digestionItemRef;

	UObject::ProcessEvent(fn, &params);

	if (digestionItemName != nullptr)
		*digestionItemName = params.digestionItemName;
	if (digestionItemID != nullptr)
		*digestionItemID = params.digestionItemID;
	if (digestionItemWeight != nullptr)
		*digestionItemWeight = params.digestionItemWeight;
}


// Function Digestion.Digestion_C.FillDigestionLine
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParameterLine_C*        digestionLineRef               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UDigestionItem*          digestionItemRef               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDigestion_C::FillDigestionLine(class UParameterLine_C* digestionLineRef, class UDigestionItem* digestionItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.FillDigestionLine");

	struct
	{
		class UParameterLine_C*        digestionLineRef;
		class UDigestionItem*          digestionItemRef;
	} params;

	params.digestionLineRef = digestionLineRef;
	params.digestionItemRef = digestionItemRef;

	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.CreateDigestionLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDigestionItem*          digestionItemRef               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UParameterLine_C*        digestionParameterLine         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UDigestion_C::CreateDigestionLine(class UDigestionItem* digestionItemRef, class UParameterLine_C** digestionParameterLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.CreateDigestionLine");

	struct
	{
		class UDigestionItem*          digestionItemRef;
		class UParameterLine_C*        digestionParameterLine;
	} params;

	params.digestionItemRef = digestionItemRef;

	UObject::ProcessEvent(fn, &params);

	if (digestionParameterLine != nullptr)
		*digestionParameterLine = params.digestionParameterLine;
}


// Function Digestion.Digestion_C.ShowDigestion
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDigestion_C::ShowDigestion(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.ShowDigestion");

	struct
	{
		ESlateVisibility               Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.InitDigestionItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDigestion_C::InitDigestionItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.InitDigestionItems");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.AddDigestionLine
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UParameterLine_C*        digestionLineRef               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UDigestion_C::AddDigestionLine(int Index, class UParameterLine_C* digestionLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.AddDigestionLine");

	struct
	{
		int                            Index;
		class UParameterLine_C*        digestionLineRef;
	} params;

	params.Index = Index;
	params.digestionLineRef = digestionLineRef;

	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.CreateDigestionLineFromText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   digestionItemName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   digestionItemID                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   digestionItemWeightRemained    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UParameterLine_C*        digestionLine                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UDigestion_C::CreateDigestionLineFromText(const struct FText& digestionItemName, const struct FText& digestionItemID, const struct FText& digestionItemWeightRemained, class UParameterLine_C** digestionLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.CreateDigestionLineFromText");

	struct
	{
		struct FText                   digestionItemName;
		struct FText                   digestionItemID;
		struct FText                   digestionItemWeightRemained;
		class UParameterLine_C*        digestionLine;
	} params;

	params.digestionItemName = digestionItemName;
	params.digestionItemID = digestionItemID;
	params.digestionItemWeightRemained = digestionItemWeightRemained;

	UObject::ProcessEvent(fn, &params);

	if (digestionLine != nullptr)
		*digestionLine = params.digestionLine;
}


// Function Digestion.Digestion_C.GetDigestionItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UDigestionItem*>  digestionItemsTArrayRef        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UDigestion_C::GetDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.GetDigestionItems");

	struct
	{
		TArray<class UDigestionItem*>  digestionItemsTArrayRef;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (digestionItemsTArrayRef != nullptr)
		*digestionItemsTArrayRef = params.digestionItemsTArrayRef;
}


// Function Digestion.Digestion_C.SetDigestionCount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            digestionItemsCountToSet       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDigestion_C::SetDigestionCount(int digestionItemsCountToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.SetDigestionCount");

	struct
	{
		int                            digestionItemsCountToSet;
	} params;

	params.digestionItemsCountToSet = digestionItemsCountToSet;

	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.ClearDigestionLines
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDigestion_C::ClearDigestionLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.ClearDigestionLines");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.CountDigestionItems
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            numberOfDigestionItems         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDigestion_C::CountDigestionItems(int* numberOfDigestionItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.CountDigestionItems");

	struct
	{
		int                            numberOfDigestionItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (numberOfDigestionItems != nullptr)
		*numberOfDigestionItems = params.numberOfDigestionItems;
}


// Function Digestion.Digestion_C.HasDigestionCountChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           sicknessCountChanged           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDigestion_C::HasDigestionCountChanged(bool* sicknessCountChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.HasDigestionCountChanged");

	struct
	{
		bool                           sicknessCountChanged;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (sicknessCountChanged != nullptr)
		*sicknessCountChanged = params.sicknessCountChanged;
}


// Function Digestion.Digestion_C.UpdateDigestion
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDigestion_C::UpdateDigestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.UpdateDigestion");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.GetTitleText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UDigestion_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.GetTitleText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Digestion.Digestion_C.GetDefaultTitle
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (CPF_Parm, CPF_OutParm)

void UDigestion_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.GetDefaultTitle");

	struct
	{
		struct FText                   defaultTitle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Digestion.Digestion_C.SelectCustomColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UDigestion_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.SelectCustomColor");

	struct
	{
		struct FLinearColor            Color;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Digestion.Digestion_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UDigestion_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.OnMinimize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDigestion_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.OnMinimize");

	struct
	{
		bool                           shouldMinimize;
	} params;

	params.shouldMinimize = shouldMinimize;

	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.OnPrisonerSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDigestion_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.OnPrisonerSet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.UpdateContent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UDigestion_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.UpdateContent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Digestion.Digestion_C.ExecuteUbergraph_Digestion
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDigestion_C::ExecuteUbergraph_Digestion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Digestion.Digestion_C.ExecuteUbergraph_Digestion");

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
