// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_UserImage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_UserImage.UI_UserImage_C.SetImageBrush
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateBrush             imageBrush                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_UserImage_C::SetImageBrush(const struct FSlateBrush& imageBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UserImage.UI_UserImage_C.SetImageBrush");

	struct
	{
		struct FSlateBrush             imageBrush;
	} params;

	params.imageBrush = imageBrush;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_UserImage.UI_UserImage_C.SetSizeOverride
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               sizeOverride                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UUI_UserImage_C::SetSizeOverride(const struct FVector2D& sizeOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UserImage.UI_UserImage_C.SetSizeOverride");

	struct
	{
		struct FVector2D               sizeOverride;
	} params;

	params.sizeOverride = sizeOverride;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_UserImage.UI_UserImage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_UserImage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UserImage.UI_UserImage_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_UserImage.UI_UserImage_C.ExecuteUbergraph_UI_UserImage
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_UserImage_C::ExecuteUbergraph_UI_UserImage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UserImage.UI_UserImage_C.ExecuteUbergraph_UI_UserImage");

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
