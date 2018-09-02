// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ItemClass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ItemClass.UI_ItemClass_C.GetTexture
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemClass_C::GetTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.GetTexture");

	struct
	{
		class UTexture2D*              Texture;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function UI_ItemClass.UI_ItemClass_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_ItemClass_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.OnMouseButtonDoubleClick");

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_ItemClass.UI_ItemClass_C.Init
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  itemClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemClass_C::Init(class UClass* itemClass, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.Init");

	struct
	{
		class UClass*                  itemClass;
		class UTexture2D*              Texture;
	} params;

	params.itemClass = itemClass;
	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemClass.UI_ItemClass_C.OnSynchronizeProperties
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_ItemClass_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.OnSynchronizeProperties");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemClass.UI_ItemClass_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_ItemClass_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ItemClass.UI_ItemClass_C.ExecuteUbergraph_UI_ItemClass
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ItemClass_C::ExecuteUbergraph_UI_ItemClass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.ExecuteUbergraph_UI_ItemClass");

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
