// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_WarningSign_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWarningType                   warningType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_WarningSign_C::InitFromWarningType(EWarningType warningType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType");

	struct
	{
		EWarningType                   warningType;
	} params;

	params.warningType = warningType;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_WarningSign.UI_WarningSign_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_WarningSign_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WarningSign.UI_WarningSign_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_WarningSign.UI_WarningSign_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_WarningSign_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WarningSign.UI_WarningSign_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_WarningSign_C::ExecuteUbergraph_UI_WarningSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign");

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
