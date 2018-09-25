// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UMG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UMG.Widget.SetVisibility
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	struct
	{
		ESlateVisibility               InVisibility;
	} params;

	params.InVisibility = InVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetUserFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	struct
	{
		class APlayerController*       PlayerController;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetToolTipText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InToolTipText                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWidget::SetToolTipText(const struct FText& InToolTipText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	struct
	{
		struct FText                   InToolTipText;
	} params;

	params.InToolTipText = InToolTipText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetToolTip
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWidget::SetToolTip(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetRenderTranslation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Translation                    (CPF_Parm, CPF_IsPlainOldData)

void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	struct
	{
		struct FVector2D               Translation;
	} params;

	params.Translation = Translation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetRenderTransformPivot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Pivot                          (CPF_Parm, CPF_IsPlainOldData)

void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	struct
	{
		struct FVector2D               Pivot;
	} params;

	params.Pivot = Pivot;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetRenderTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FWidgetTransform        InTransform                    (CPF_Parm)

void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	struct
	{
		struct FWidgetTransform        InTransform;
	} params;

	params.InTransform = InTransform;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetRenderShear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Shear                          (CPF_Parm, CPF_IsPlainOldData)

void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	struct
	{
		struct FVector2D               Shear;
	} params;

	params.Shear = Shear;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetRenderScale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Scale                          (CPF_Parm, CPF_IsPlainOldData)

void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	struct
	{
		struct FVector2D               Scale;
	} params;

	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetRenderOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InOpacity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetRenderOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");

	struct
	{
		float                          InOpacity;
	} params;

	params.InOpacity = InOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetRenderAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetRenderAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderAngle");

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetNavigationRule
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EUINavigation                  Direction                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EUINavigationRule              Rule                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   WidgetToFocus                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");

	struct
	{
		EUINavigation                  Direction;
		EUINavigationRule              Rule;
		struct FName                   WidgetToFocus;
	} params;

	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetKeyboardFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UWidget::SetKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetIsEnabled
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInIsEnabled                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	struct
	{
		bool                           bInIsEnabled;
	} params;

	params.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetCursor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EMouseCursor>      InCursor                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetCursor(TEnumAsByte<EMouseCursor> InCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	struct
	{
		TEnumAsByte<EMouseCursor>      InCursor;
	} params;

	params.InCursor = InCursor;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetClipping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EWidgetClipping                InClipping                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetClipping(EWidgetClipping InClipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");

	struct
	{
		EWidgetClipping                InClipping;
	} params;

	params.InClipping = InClipping;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.SetAllNavigationRules
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EUINavigationRule              Rule                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   WidgetToFocus                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");

	struct
	{
		EUINavigationRule              Rule;
		struct FName                   WidgetToFocus;
	} params;

	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.ResetCursor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UWidget::ResetCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.RemoveFromParent
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UWidget::RemoveFromParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	struct
	{
		struct FEventReply             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

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


// Function UMG.Widget.IsVisible
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::IsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.IsHovered
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::IsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UWidget::InvalidateLayoutAndVolatility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.HasUserFocusedDescendants
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	struct
	{
		class APlayerController*       PlayerController;
		bool                           ReturnValue;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.HasUserFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::HasUserFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	struct
	{
		class APlayerController*       PlayerController;
		bool                           ReturnValue;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.HasMouseCapture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::HasMouseCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.HasKeyboardFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::HasKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.HasFocusedDescendants
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::HasFocusedDescendants()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.HasAnyUserFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::HasAnyUserFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.GetVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UWidget::GetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWidget::GetText__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	struct
	{
		struct FSlateColor             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.GetRenderOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWidget::GetRenderOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.GetParent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPanelWidget* UWidget::GetParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	struct
	{
		class UPanelWidget*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.GetOwningPlayer
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APlayerController*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APlayerController* UWidget::GetOwningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");

	struct
	{
		class APlayerController*       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// TEnumAsByte<EMouseCursor>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EMouseCursor> UWidget::GetMouseCursor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	struct
	{
		TEnumAsByte<EMouseCursor>      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasDefaults)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.GetIsEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::GetIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWidget::GetInt32__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWidget::GetFloat__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.GetDesiredSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UWidget::GetDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.GetClipping
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EWidgetClipping                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EWidgetClipping UWidget::GetClipping()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");

	struct
	{
		EWidgetClipping                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// ECheckBoxState                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	struct
	{
		ECheckBoxState                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.GetCachedGeometry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FGeometry               ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)

struct FGeometry UWidget::GetCachedGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");

	struct
	{
		struct FGeometry               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidget::GetBool__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 Item                           (CPF_Parm, CPF_ZeroConstructor)
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const struct FString& Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	struct
	{
		struct FString                 Item;
		class UWidget*                 ReturnValue;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	struct
	{
		class UObject*                 Item;
		class UWidget*                 ReturnValue;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Widget.ForceVolatile
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bForce                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidget::ForceVolatile(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	struct
	{
		bool                           bForce;
	} params;

	params.bForce = bForce;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Widget.ForceLayoutPrepass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UWidget::ForceLayoutPrepass()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.UnregisterInputComponent
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UUserWidget::UnregisterInputComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.StopListeningForInputAction
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EInputEvent>       EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");

	struct
	{
		struct FName                   ActionName;
		TEnumAsByte<EInputEvent>       EventType;
	} params;

	params.ActionName = ActionName;
	params.EventType = EventType;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UUserWidget::StopListeningForAllInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.StopAnimationsAndLatentActions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UUserWidget::StopAnimationsAndLatentActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.StopAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	struct
	{
		class UWidgetAnimation*        InAnimation;
	} params;

	params.InAnimation = InAnimation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.StopAllAnimations
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UUserWidget::StopAllAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetPositionInViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Position                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           bRemoveDPIScale                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	struct
	{
		struct FVector2D               Position;
		bool                           bRemoveDPIScale;
	} params;

	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetPlaybackSpeed
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          PlaybackSpeed                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");

	struct
	{
		class UWidgetAnimation*        InAnimation;
		float                          PlaybackSpeed;
	} params;

	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetPadding
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UUserWidget::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetOwningPlayer
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       LocalPlayerController          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");

	struct
	{
		class APlayerController*       LocalPlayerController;
	} params;

	params.LocalPlayerController = LocalPlayerController;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetOwningLocalPlayer
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningLocalPlayer");

	struct
	{
		class ULocalPlayer*            LocalPlayer;
	} params;

	params.LocalPlayer = LocalPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            NumLoopsToPlay                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");

	struct
	{
		class UWidgetAnimation*        InAnimation;
		int                            NumLoopsToPlay;
	} params;

	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetInputActionPriority
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// int                            NewPriority                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::SetInputActionPriority(int NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");

	struct
	{
		int                            NewPriority;
	} params;

	params.NewPriority = NewPriority;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetInputActionBlocking
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldBlock                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");

	struct
	{
		bool                           bShouldBlock;
	} params;

	params.bShouldBlock = bShouldBlock;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetForegroundColor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateColor             InForegroundColor              (CPF_Parm)

void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	struct
	{
		struct FSlateColor             InForegroundColor;
	} params;

	params.InForegroundColor = InForegroundColor;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Size                           (CPF_Parm, CPF_IsPlainOldData)

void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	struct
	{
		struct FVector2D               Size;
	} params;

	params.Size = Size;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetColorAndOpacity
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (CPF_Parm, CPF_IsPlainOldData)

void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	struct
	{
		struct FLinearColor            InColorAndOpacity;
	} params;

	params.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetAnchorsInViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FAnchors                Anchors                        (CPF_Parm)

void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	struct
	{
		struct FAnchors                Anchors;
	} params;

	params.Anchors = Anchors;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.SetAlignmentInViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Alignment                      (CPF_Parm, CPF_IsPlainOldData)

void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	struct
	{
		struct FVector2D               Alignment;
	} params;

	params.Alignment = Alignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.ReverseAnimation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");

	struct
	{
		class UWidgetAnimation*        InAnimation;
	} params;

	params.InAnimation = InAnimation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.RemoveFromViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UUserWidget::RemoveFromViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.RegisterInputComponent
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)

void UUserWidget::RegisterInputComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.PlaySound
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundBase*              SoundToPlay                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	struct
	{
		class USoundBase*              SoundToPlay;
	} params;

	params.SoundToPlay = SoundToPlay;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.PlayAnimationTo
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          StartAtTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndAtTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumLoopsToPlay                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EUMGSequencePlayMode> PlayMode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PlaybackSpeed                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTo");

	struct
	{
		class UWidgetAnimation*        InAnimation;
		float                          StartAtTime;
		float                          EndAtTime;
		int                            NumLoopsToPlay;
		TEnumAsByte<EUMGSequencePlayMode> PlayMode;
		float                          PlaybackSpeed;
	} params;

	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.PlayAnimation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          StartAtTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumLoopsToPlay                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EUMGSequencePlayMode> PlayMode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PlaybackSpeed                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	struct
	{
		class UWidgetAnimation*        InAnimation;
		float                          StartAtTime;
		int                            NumLoopsToPlay;
		TEnumAsByte<EUMGSequencePlayMode> PlayMode;
		float                          PlaybackSpeed;
	} params;

	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.PauseAnimation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	struct
	{
		class UWidgetAnimation*        InAnimation;
		float                          ReturnValue;
	} params;

	params.InAnimation = InAnimation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           InTouchEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchMoved
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           InTouchEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchGesture
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           GestureEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           GestureEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnTouchEnded
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InTouchEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           InTouchEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnRemovedFromFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_Parm)

void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params;

	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

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


// Function UMG.UserWidget.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnPaint
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// struct FPaintContext           Context                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUserWidget::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	struct
	{
		struct FPaintContext           Context;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.UserWidget.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

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


// Function UMG.UserWidget.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

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


// Function UMG.UserWidget.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnMouseCaptureLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUserWidget::OnMouseCaptureLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

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


// Function UMG.UserWidget.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

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


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

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


// Function UMG.UserWidget.OnMotionDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FMotionEvent            InMotionEvent                  (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FMotionEvent            InMotionEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnKeyChar
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FCharacterEvent         InCharacterEvent               (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FCharacterEvent         InCharacterEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent             InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FFocusEvent             InFocusEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_Parm)

void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params;

	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
		bool                           ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragOver
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
		bool                           ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_Parm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	UObject::ProcessEvent(fn, &params);

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function UMG.UserWidget.OnDragCancelled
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;

	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	struct
	{
		class UWidgetAnimation*        Animation;
	} params;

	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.OnAnalogValueChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FAnalogInputEvent       InAnalogInputEvent             (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FAnalogInputEvent       InAnalogInputEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.OnAddedToFocusPath
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_Parm)

void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params;

	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.ListenForInputAction
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EInputEvent>       EventType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bConsume                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_ZeroConstructor)

void UUserWidget::ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");

	struct
	{
		struct FName                   ActionName;
		TEnumAsByte<EInputEvent>       EventType;
		bool                           bConsume;
		struct FScriptDelegate         Callback;
	} params;

	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.IsPlayingAnimation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::IsPlayingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsListeningForInputAction
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::IsListeningForInputAction(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");

	struct
	{
		struct FName                   ActionName;
		bool                           ReturnValue;
	} params;

	params.ActionName = ActionName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::IsInViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::IsAnyAnimationPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlayingForward
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");

	struct
	{
		class UWidgetAnimation*        InAnimation;
		bool                           ReturnValue;
	} params;

	params.InAnimation = InAnimation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.IsAnimationPlaying
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");

	struct
	{
		class UWidgetAnimation*        InAnimation;
		bool                           ReturnValue;
	} params;

	params.InAnimation = InAnimation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	struct
	{
		class APawn*                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetOwningLocalPlayer
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULocalPlayer* UUserWidget::GetOwningLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningLocalPlayer");

	struct
	{
		class ULocalPlayer*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetIsVisible
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::GetIsVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");

	struct
	{
		class UWidgetAnimation*        InAnimation;
		float                          ReturnValue;
	} params;

	params.InAnimation = InAnimation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAnchorsInViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FAnchors                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAnchors UUserWidget::GetAnchorsInViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");

	struct
	{
		struct FAnchors                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.GetAlignmentInViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UUserWidget::GetAlignmentInViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UserWidget.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUserWidget::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUserWidget::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.CancelLatentActions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UUserWidget::CancelLatentActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.AddToViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ZOrder                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserWidget::AddToViewport(int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	struct
	{
		int                            ZOrder;
	} params;

	params.ZOrder = ZOrder;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UserWidget.AddToPlayerScreen
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ZOrder                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserWidget::AddToPlayerScreen(int ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	struct
	{
		int                            ZOrder;
		bool                           ReturnValue;
	} params;

	params.ZOrder = ZOrder;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.TextBlock.SetText
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InText                         (CPF_Parm)

void UTextBlock::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.SetShadowOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               InShadowOffset                 (CPF_Parm, CPF_IsPlainOldData)

void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	struct
	{
		struct FVector2D               InShadowOffset;
	} params;

	params.InShadowOffset = InShadowOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InShadowColorAndOpacity        (CPF_Parm, CPF_IsPlainOldData)

void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	struct
	{
		struct FLinearColor            InShadowColorAndOpacity;
	} params;

	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.SetOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InOpacity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTextBlock::SetOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	struct
	{
		float                          InOpacity;
	} params;

	params.InOpacity = InOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.SetMinDesiredWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMinDesiredWidth              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");

	struct
	{
		float                          InMinDesiredWidth;
	} params;

	params.InMinDesiredWidth = InMinDesiredWidth;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.SetJustification
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<ETextJustify>      InJustification                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTextBlock::SetJustification(TEnumAsByte<ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetJustification");

	struct
	{
		TEnumAsByte<ETextJustify>      InJustification;
	} params;

	params.InJustification = InJustification;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.SetFont
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (CPF_Parm)

void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	struct
	{
		struct FSlateFontInfo          InFontInfo;
	} params;

	params.InFontInfo = InFontInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.SetColorAndOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateColor             InColorAndOpacity              (CPF_Parm)

void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	struct
	{
		struct FSlateColor             InColorAndOpacity;
	} params;

	params.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.SetAutoWrapText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InAutoTextWrap                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");

	struct
	{
		bool                           InAutoTextWrap;
	} params;

	params.InAutoTextWrap = InAutoTextWrap;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBlock.GetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.TextBlock.GetDynamicOutlineMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.TextBlock.GetDynamicFontMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.AsyncTaskDownloadImage.DownloadImage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_ZeroConstructor)
// class UAsyncTaskDownloadImage* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	struct
	{
		struct FString                 URL;
		class UAsyncTaskDownloadImage* ReturnValue;
	} params;

	params.URL = URL;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChildAt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPanelWidget::RemoveChildAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	struct
	{
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.PanelWidget.RemoveChild
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	struct
	{
		class UWidget*                 Content;
		bool                           ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasChild
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPanelWidget::HasChild(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	struct
	{
		class UWidget*                 Content;
		bool                           ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.PanelWidget.HasAnyChildren
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UPanelWidget::HasAnyChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildrenCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPanelWidget::GetChildrenCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UPanelWidget::GetChildIndex(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	struct
	{
		class UWidget*                 Content;
		int                            ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.PanelWidget.GetChildAt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UPanelWidget::GetChildAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	struct
	{
		int                            Index;
		class UWidget*                 ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.PanelWidget.ClearChildren
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UPanelWidget::ClearChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.PanelWidget.AddChild
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	struct
	{
		class UWidget*                 Content;
		class UPanelSlot*              ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ContentWidget.SetContent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.SetContent");

	struct
	{
		class UWidget*                 Content;
		class UPanelSlot*              ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContentSlot
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPanelSlot*              ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UPanelSlot* UContentWidget::GetContentSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContentSlot");

	struct
	{
		class UPanelSlot*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ContentWidget.GetContent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UContentWidget::GetContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContent");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlur.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");

	struct
	{
		struct FSlateBrush             InBrush;
	} params;

	params.InBrush = InBrush;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlur.SetBlurStrength
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InStrength                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBackgroundBlur::SetBlurStrength(float InStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");

	struct
	{
		float                          InStrength;
	} params;

	params.InStrength = InStrength;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlur.SetBlurRadius
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InBlurRadius                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBackgroundBlur::SetBlurRadius(int InBlurRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");

	struct
	{
		int                            InBlurRadius;
	} params;

	params.InBlurRadius = InBlurRadius;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInApplyAlphaToBlur            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");

	struct
	{
		bool                           bInApplyAlphaToBlur;
	} params;

	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBackgroundBlurSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlurSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBackgroundBlurSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BoolBinding.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBoolBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BoolBinding.GetValue");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Border.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorder::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UBorder::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorder::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetDesiredSizeScale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               InScale                        (CPF_Parm, CPF_IsPlainOldData)

void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");

	struct
	{
		struct FVector2D               InScale;
	} params;

	params.InScale = InScale;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetContentColorAndOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InContentColorAndOpacity       (CPF_Parm, CPF_IsPlainOldData)

void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	struct
	{
		struct FLinearColor            InContentColorAndOpacity;
	} params;

	params.InContentColorAndOpacity = InContentColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetBrushFromTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetBrushFromMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	struct
	{
		class UMaterialInterface*      Material;
	} params;

	params.Material = Material;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetBrushFromAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USlateBrushAsset*        Asset                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	struct
	{
		class USlateBrushAsset*        Asset;
	} params;

	params.Asset = Asset;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetBrushColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InBrushColor                   (CPF_Parm, CPF_IsPlainOldData)

void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	struct
	{
		struct FLinearColor            InBrushColor;
	} params;

	params.InBrushColor = InBrushColor;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.SetBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBorder::SetBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	struct
	{
		struct FSlateBrush             InBrush;
	} params;

	params.InBrush = InBrush;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Border.GetDynamicMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.BorderSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorderSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BorderSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UBorderSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBorderSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.BrushBinding.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UBrushBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BrushBinding.GetValue");

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Button.SetTouchMethod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonTouchMethod> InTouchMethod                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButton::SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");

	struct
	{
		TEnumAsByte<EButtonTouchMethod> InTouchMethod;
	} params;

	params.InTouchMethod = InTouchMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Button.SetStyle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FButtonStyle            InStyle                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UButton::SetStyle(const struct FButtonStyle& InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");

	struct
	{
		struct FButtonStyle            InStyle;
	} params;

	params.InStyle = InStyle;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Button.SetColorAndOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (CPF_Parm, CPF_IsPlainOldData)

void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	struct
	{
		struct FLinearColor            InColorAndOpacity;
	} params;

	params.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Button.SetClickMethod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonClickMethod> InClickMethod                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButton::SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");

	struct
	{
		TEnumAsByte<EButtonClickMethod> InClickMethod;
	} params;

	params.InClickMethod = InClickMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Button.SetBackgroundColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InBackgroundColor              (CPF_Parm, CPF_IsPlainOldData)

void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	struct
	{
		struct FLinearColor            InBackgroundColor;
	} params;

	params.InBackgroundColor = InBackgroundColor;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Button.IsPressed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UButton::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButtonSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ButtonSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanel.AddChildToCanvas
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UCanvasPanelSlot*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanel.AddChildToCanvas");

	struct
	{
		class UWidget*                 Content;
		class UCanvasPanelSlot*        ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.SetZOrder
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InZOrder                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCanvasPanelSlot::SetZOrder(int InZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	struct
	{
		int                            InZOrder;
	} params;

	params.InZOrder = InZOrder;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               InSize                         (CPF_Parm, CPF_IsPlainOldData)

void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	struct
	{
		struct FVector2D               InSize;
	} params;

	params.InSize = InSize;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               InPosition                     (CPF_Parm, CPF_IsPlainOldData)

void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	struct
	{
		struct FVector2D               InPosition;
	} params;

	params.InPosition = InPosition;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetOffsets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InOffset                       (CPF_Parm)

void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	struct
	{
		struct FMargin                 InOffset;
	} params;

	params.InOffset = InOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetMinimum
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector2D               InMinimumAnchors               (CPF_Parm, CPF_IsPlainOldData)

void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	struct
	{
		struct FVector2D               InMinimumAnchors;
	} params;

	params.InMinimumAnchors = InMinimumAnchors;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetMaximum
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector2D               InMaximumAnchors               (CPF_Parm, CPF_IsPlainOldData)

void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	struct
	{
		struct FVector2D               InMaximumAnchors;
	} params;

	params.InMaximumAnchors = InMaximumAnchors;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetLayout
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FAnchorData             InLayoutData                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	struct
	{
		struct FAnchorData             InLayoutData;
	} params;

	params.InLayoutData = InLayoutData;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InbAutoSize                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	struct
	{
		bool                           InbAutoSize;
	} params;

	params.InbAutoSize = InbAutoSize;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetAnchors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FAnchors                InAnchors                      (CPF_Parm)

void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	struct
	{
		struct FAnchors                InAnchors;
	} params;

	params.InAnchors = InAnchors;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.SetAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               InAlignment                    (CPF_Parm, CPF_IsPlainOldData)

void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	struct
	{
		struct FVector2D               InAlignment;
	} params;

	params.InAlignment = InAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CanvasPanelSlot.GetZOrder
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCanvasPanelSlot::GetZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UCanvasPanelSlot::GetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetOffsets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMargin                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	struct
	{
		struct FMargin                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetLayout
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FAnchorData             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	struct
	{
		struct FAnchorData             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAutoSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCanvasPanelSlot::GetAutoSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAnchors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FAnchors                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	struct
	{
		struct FAnchors                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CanvasPanelSlot.GetAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CheckBox.SetIsChecked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InIsChecked                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	struct
	{
		bool                           InIsChecked;
	} params;

	params.InIsChecked = InIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CheckBox.SetCheckedState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ECheckBoxState                 InCheckedState                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	struct
	{
		ECheckBoxState                 InCheckedState;
	} params;

	params.InCheckedState = InCheckedState;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CheckBox.IsPressed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCheckBox::IsPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CheckBox.IsChecked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCheckBox::IsChecked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CheckBox.GetCheckedState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ECheckBoxState UCheckBox::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	struct
	{
		ECheckBoxState                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CheckedStateBinding.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ECheckBoxState UCheckedStateBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckedStateBinding.GetValue");

	struct
	{
		ECheckBoxState                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.CircularThrobber.SetRadius
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InRadius                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCircularThrobber::SetRadius(float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	struct
	{
		float                          InRadius;
	} params;

	params.InRadius = InRadius;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CircularThrobber.SetPeriod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InPeriod                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCircularThrobber::SetPeriod(float InPeriod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	struct
	{
		float                          InPeriod;
	} params;

	params.InPeriod = InPeriod;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InNumberOfPieces               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCircularThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	struct
	{
		int                            InNumberOfPieces;
	} params;

	params.InNumberOfPieces = InNumberOfPieces;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ColorBinding.GetSlateValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// struct FSlateColor             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateColor UColorBinding::GetSlateValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetSlateValue");

	struct
	{
		struct FSlateColor             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ColorBinding.GetLinearValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor UColorBinding::GetLinearValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetLinearValue");

	struct
	{
		struct FLinearColor            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.SetSelectedOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Option                         (CPF_Parm, CPF_ZeroConstructor)

void UComboBoxString::SetSelectedOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	struct
	{
		struct FString                 Option;
	} params;

	params.Option = Option;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ComboBoxString.RemoveOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Option                         (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UComboBoxString::RemoveOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	struct
	{
		struct FString                 Option;
		bool                           ReturnValue;
	} params;

	params.Option = Option;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.RefreshOptions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UComboBoxString::RefreshOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 SelectedItem                   (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<ESelectInfo>       SelectionType;
	} params;

	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ComboBoxString.GetSelectedOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UComboBoxString::GetSelectedOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionCount
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UComboBoxString::GetOptionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UComboBoxString::GetOptionAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	struct
	{
		int                            Index;
		struct FString                 ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.FindOptionIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 Option                         (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UComboBoxString::FindOptionIndex(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	struct
	{
		struct FString                 Option;
		int                            ReturnValue;
	} params;

	params.Option = Option;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ComboBoxString.ClearSelection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UComboBoxString::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ComboBoxString.ClearOptions
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UComboBoxString::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ComboBoxString.AddOption
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Option                         (CPF_Parm, CPF_ZeroConstructor)

void UComboBoxString::AddOption(const struct FString& Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	struct
	{
		struct FString                 Option;
	} params;

	params.Option = Option;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.DragDropOperation.Drop
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	struct
	{
		struct FPointerEvent           PointerEvent;
	} params;

	params.PointerEvent = PointerEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.DragDropOperation.Dragged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	struct
	{
		struct FPointerEvent           PointerEvent;
	} params;

	params.PointerEvent = PointerEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.DragDropOperation.DragCancelled
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	struct
	{
		struct FPointerEvent           PointerEvent;
	} params;

	params.PointerEvent = PointerEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableText.SetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InText                         (CPF_Parm)

void UEditableText::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableText.SetIsReadOnly
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InbIsReadyOnly                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	struct
	{
		bool                           InbIsReadyOnly;
	} params;

	params.InbIsReadyOnly = InbIsReadyOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableText.SetIsPassword
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InbIsPassword                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	struct
	{
		bool                           InbIsPassword;
	} params;

	params.InbIsPassword = InbIsPassword;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableText.SetHintText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InHintText                     (CPF_Parm)

void UEditableText::SetHintText(const struct FText& InHintText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	struct
	{
		struct FText                   InHintText;
	} params;

	params.InHintText = InHintText;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableText.GetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UEditableText::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.SetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InText                         (CPF_Parm)

void UEditableTextBox::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableTextBox.SetIsReadOnly
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");

	struct
	{
		bool                           bReadOnly;
	} params;

	params.bReadOnly = bReadOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableTextBox.SetHintText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InText                         (CPF_Parm)

void UEditableTextBox::SetHintText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableTextBox.SetError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InError                        (CPF_Parm)

void UEditableTextBox::SetError(const struct FText& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	struct
	{
		struct FText                   InError;
	} params;

	params.InError = InError;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.EditableTextBox.HasError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UEditableTextBox::HasError()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.GetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UEditableTextBox::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.EditableTextBox.ClearError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UEditableTextBox::ClearError()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           IsExpanded                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");

	struct
	{
		bool                           IsExpanded;
	} params;

	params.IsExpanded = IsExpanded;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ExpandableArea.SetIsExpanded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           IsExpanded                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	struct
	{
		bool                           IsExpanded;
	} params;

	params.IsExpanded = IsExpanded;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ExpandableArea.GetIsExpanded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UExpandableArea::GetIsExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.FloatBinding.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFloatBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.FloatBinding.GetValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.GridPanel.AddChildToGrid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UGridSlot*               ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	struct
	{
		class UWidget*                 Content;
		class UGridSlot*               ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.GridSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.GridSlot.SetRowSpan
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InRowSpan                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGridSlot::SetRowSpan(int InRowSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	struct
	{
		int                            InRowSpan;
	} params;

	params.InRowSpan = InRowSpan;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.GridSlot.SetRow
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InRow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGridSlot::SetRow(int InRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	struct
	{
		int                            InRow;
	} params;

	params.InRow = InRow;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.GridSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UGridSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.GridSlot.SetLayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InLayer                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGridSlot::SetLayer(int InLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");

	struct
	{
		int                            InLayer;
	} params;

	params.InLayer = InLayer;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.GridSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.GridSlot.SetColumnSpan
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InColumnSpan                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGridSlot::SetColumnSpan(int InColumnSpan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	struct
	{
		int                            InColumnSpan;
	} params;

	params.InColumnSpan = InColumnSpan;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.GridSlot.SetColumn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InColumn                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGridSlot::SetColumn(int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	struct
	{
		int                            InColumn;
	} params;

	params.InColumn = InColumn;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UHorizontalBoxSlot*      ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBox.AddChildToHorizontalBox");

	struct
	{
		class UWidget*                 Content;
		class UHorizontalBoxSlot*      ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.HorizontalBoxSlot.SetSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateChildSize         InSize                         (CPF_Parm)

void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");

	struct
	{
		struct FSlateChildSize         InSize;
	} params;

	params.InSize = InSize;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.HorizontalBoxSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Image.SetOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InOpacity                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UImage::SetOpacity(float InOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	struct
	{
		float                          InOpacity;
	} params;

	params.InOpacity = InOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Image.SetColorAndOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (CPF_Parm, CPF_IsPlainOldData)

void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	struct
	{
		struct FLinearColor            InColorAndOpacity;
	} params;

	params.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Image.SetBrushFromTextureDynamic
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*       Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMatchSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");

	struct
	{
		class UTexture2DDynamic*       Texture;
		bool                           bMatchSize;
	} params;

	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Image.SetBrushFromTexture
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMatchSize                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	struct
	{
		class UTexture2D*              Texture;
		bool                           bMatchSize;
	} params;

	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Image.SetBrushFromMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	struct
	{
		class UMaterialInterface*      Material;
	} params;

	params.Material = Material;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Image.SetBrushFromAsset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USlateBrushAsset*        Asset                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	struct
	{
		class USlateBrushAsset*        Asset;
	} params;

	params.Asset = Asset;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Image.SetBrush
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateBrush             InBrush                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UImage::SetBrush(const struct FSlateBrush& InBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	struct
	{
		struct FSlateBrush             InBrush;
	} params;

	params.InBrush = InBrush;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Image.GetDynamicMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.InputKeySelector.SetTextBlockVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInputKeySelector::SetTextBlockVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");

	struct
	{
		ESlateVisibility               InVisibility;
	} params;

	params.InVisibility = InVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InputKeySelector.SetSelectedKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FInputChord             InSelectedKey                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");

	struct
	{
		struct FInputChord             InSelectedKey;
	} params;

	params.InSelectedKey = InSelectedKey;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InNoKeySpecifiedText           (CPF_Parm)

void UInputKeySelector::SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");

	struct
	{
		struct FText                   InNoKeySpecifiedText;
	} params;

	params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InputKeySelector.SetKeySelectionText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InKeySelectionText             (CPF_Parm)

void UInputKeySelector::SetKeySelectionText(const struct FText& InKeySelectionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");

	struct
	{
		struct FText                   InKeySelectionText;
	} params;

	params.InKeySelectionText = InKeySelectionText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InputKeySelector.SetEscapeKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FKey>            InKeys                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UInputKeySelector::SetEscapeKeys(TArray<struct FKey> InKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");

	struct
	{
		TArray<struct FKey>            InKeys;
	} params;

	params.InKeys = InKeys;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAllowModifierKeys           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");

	struct
	{
		bool                           bInAllowModifierKeys;
	} params;

	params.bInAllowModifierKeys = bInAllowModifierKeys;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InputKeySelector.SetAllowGamepadKeys
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAllowGamepadKeys            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");

	struct
	{
		bool                           bInAllowGamepadKeys;
	} params;

	params.bInAllowGamepadKeys = bInAllowGamepadKeys;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FInputChord             SelectedKey                    (CPF_Parm)

void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");

	struct
	{
		struct FInputChord             SelectedKey;
	} params;

	params.SelectedKey = SelectedKey;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InputKeySelector.GetIsSelectingKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UInputKeySelector::GetIsSelectingKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Int32Binding.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UInt32Binding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Int32Binding.GetValue");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.InvalidationBox.SetCanCache
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           CanCache                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInvalidationBox::SetCanCache(bool CanCache)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");

	struct
	{
		bool                           CanCache;
	} params;

	params.CanCache = CanCache;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InvalidationBox.InvalidateCache
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UInvalidationBox::InvalidateCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.InvalidationBox.GetCanCache
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UInvalidationBox::GetCanCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.ToggleOpen
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bFocusOnOpen                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	struct
	{
		bool                           bFocusOnOpen;
	} params;

	params.bFocusOnOpen = bFocusOnOpen;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMenuAnchor::ShouldOpenDueToClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Open
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bFocusMenu                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMenuAnchor::Open(bool bFocusMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	struct
	{
		bool                           bFocusMenu;
	} params;

	params.bFocusMenu = bFocusMenu;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.MenuAnchor.IsOpen
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMenuAnchor::IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMenuAnchor::HasOpenSubMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.GetMenuPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.MenuAnchor.Close
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UMenuAnchor::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.MouseCursorBinding.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// TEnumAsByte<EMouseCursor>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EMouseCursor> UMouseCursorBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MouseCursorBinding.GetValue");

	struct
	{
		TEnumAsByte<EMouseCursor>      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.MultiLineEditableText.SetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InText                         (CPF_Parm)

void UMultiLineEditableText::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");

	struct
	{
		bool                           bReadOnly;
	} params;

	params.bReadOnly = bReadOnly;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.MultiLineEditableText.GetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UMultiLineEditableText::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.MultiLineEditableTextBox.SetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InText                         (CPF_Parm)

void UMultiLineEditableTextBox::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bReadOnly                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");

	struct
	{
		bool                           bReadOnly;
	} params;

	params.bReadOnly = bReadOnly;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.MultiLineEditableTextBox.SetError
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   InError                        (CPF_Parm)

void UMultiLineEditableTextBox::SetError(const struct FText& InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	struct
	{
		struct FText                   InError;
	} params;

	params.InError = InError;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.MultiLineEditableTextBox.GetText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UMultiLineEditableTextBox::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Overlay.AddChildToOverlay
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UOverlaySlot*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Overlay.AddChildToOverlay");

	struct
	{
		class UWidget*                 Content;
		class UOverlaySlot*            ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.OverlaySlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ProgressBar.SetPercent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InPercent                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProgressBar::SetPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	struct
	{
		float                          InPercent;
	} params;

	params.InPercent = InPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ProgressBar.SetIsMarquee
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InbIsMarquee                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	struct
	{
		bool                           InbIsMarquee;
	} params;

	params.InbIsMarquee = InbIsMarquee;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (CPF_Parm, CPF_IsPlainOldData)

void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	struct
	{
		struct FLinearColor            InColor;
	} params;

	params.InColor = InColor;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.RetainerBox.SetTextureParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   TextureParameter               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URetainerBox::SetTextureParameter(const struct FName& TextureParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");

	struct
	{
		struct FName                   TextureParameter;
	} params;

	params.TextureParameter = TextureParameter;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.RetainerBox.SetEffectMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMaterialInterface*      EffectMaterial                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");

	struct
	{
		class UMaterialInterface*      EffectMaterial;
	} params;

	params.EffectMaterial = EffectMaterial;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.RetainerBox.RequestRender
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void URetainerBox::RequestRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.RetainerBox.GetEffectMaterial
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SafeZone.SetSidesToPad
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InPadLeft                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InPadRight                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InPadTop                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InPadBottom                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");

	struct
	{
		bool                           InPadLeft;
		bool                           InPadRight;
		bool                           InPadTop;
		bool                           InPadBottom;
	} params;

	params.InPadLeft = InPadLeft;
	params.InPadRight = InPadRight;
	params.InPadTop = InPadTop;
	params.InPadBottom = InPadBottom;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InUserSpecifiedScale           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");

	struct
	{
		float                          InUserSpecifiedScale;
	} params;

	params.InUserSpecifiedScale = InUserSpecifiedScale;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScaleBox.SetStretchDirection
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EStretchDirection> InStretchDirection             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScaleBox::SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");

	struct
	{
		TEnumAsByte<EStretchDirection> InStretchDirection;
	} params;

	params.InStretchDirection = InStretchDirection;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScaleBox.SetStretch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EStretch>          InStretch                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScaleBox::SetStretch(TEnumAsByte<EStretch> InStretch)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");

	struct
	{
		TEnumAsByte<EStretch>          InStretch;
	} params;

	params.InStretch = InStretch;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInIgnoreInheritedScale        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");

	struct
	{
		bool                           bInIgnoreInheritedScale;
	} params;

	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScaleBoxSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBar.SetState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InOffsetFraction               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InThumbSizeFraction            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	struct
	{
		float                          InOffsetFraction;
		float                          InThumbSizeFraction;
	} params;

	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.SetScrollOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewScrollOffset                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	struct
	{
		float                          NewScrollOffset;
	} params;

	params.NewScrollOffset = NewScrollOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.SetScrollBarVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESlateVisibility               NewScrollBarVisibility         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollBox::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollBarVisibility");

	struct
	{
		ESlateVisibility               NewScrollBarVisibility;
	} params;

	params.NewScrollBarVisibility = NewScrollBarVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.SetScrollbarThickness
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               NewScrollbarThickness          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");

	struct
	{
		struct FVector2D               NewScrollbarThickness;
	} params;

	params.NewScrollbarThickness = NewScrollbarThickness;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.SetOrientation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EOrientation>      NewOrientation                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollBox::SetOrientation(TEnumAsByte<EOrientation> NewOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");

	struct
	{
		TEnumAsByte<EOrientation>      NewOrientation;
	} params;

	params.NewOrientation = NewOrientation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           NewAlwaysShowScrollbar         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");

	struct
	{
		bool                           NewAlwaysShowScrollbar;
	} params;

	params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.SetAllowOverscroll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           NewAllowOverscroll             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");

	struct
	{
		bool                           NewAllowOverscroll;
	} params;

	params.NewAllowOverscroll = NewAllowOverscroll;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 WidgetToFind                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           AnimateScroll                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EDescendantScrollDestination   ScrollDestination              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	struct
	{
		class UWidget*                 WidgetToFind;
		bool                           AnimateScroll;
		EDescendantScrollDestination   ScrollDestination;
	} params;

	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
	params.ScrollDestination = ScrollDestination;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.ScrollToStart
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UScrollBox::ScrollToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.ScrollToEnd
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UScrollBox::ScrollToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBox.GetScrollOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UScrollBox::GetScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.ScrollBoxSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.SetWidthOverride
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InWidthOverride                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	struct
	{
		float                          InWidthOverride;
	} params;

	params.InWidthOverride = InWidthOverride;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.SetMinDesiredWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMinDesiredWidth              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	struct
	{
		float                          InMinDesiredWidth;
	} params;

	params.InMinDesiredWidth = InMinDesiredWidth;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.SetMinDesiredHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMinDesiredHeight             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	struct
	{
		float                          InMinDesiredHeight;
	} params;

	params.InMinDesiredHeight = InMinDesiredHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMaxDesiredWidth              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	struct
	{
		float                          InMaxDesiredWidth;
	} params;

	params.InMaxDesiredWidth = InMaxDesiredWidth;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.SetMaxDesiredHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMaxDesiredHeight             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	struct
	{
		float                          InMaxDesiredHeight;
	} params;

	params.InMaxDesiredHeight = InMaxDesiredHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.SetMaxAspectRatio
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMaxAspectRatio               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");

	struct
	{
		float                          InMaxAspectRatio;
	} params;

	params.InMaxAspectRatio = InMaxAspectRatio;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.SetHeightOverride
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InHeightOverride               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	struct
	{
		float                          InHeightOverride;
	} params;

	params.InHeightOverride = InHeightOverride;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.ClearWidthOverride
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USizeBox::ClearWidthOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USizeBox::ClearMinDesiredWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USizeBox::ClearMinDesiredHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USizeBox::ClearMaxDesiredWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USizeBox::ClearMaxDesiredHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USizeBox::ClearMaxAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBox.ClearHeightOverride
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USizeBox::ClearHeightOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBoxSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGeometry               Geometry                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               ScreenPosition                 (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               LocalCoordinate                (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGeometry               Geometry;
		struct FVector2D               ScreenPosition;
		struct FVector2D               LocalCoordinate;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.ScreenPosition = ScreenPosition;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = params.LocalCoordinate;
}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ScreenPosition                 (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ScreenPosition;
		struct FVector2D               AbsoluteCoordinate;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = params.AbsoluteCoordinate;
}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ScreenPosition                 (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               ViewportPosition               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToViewport");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ScreenPosition;
		struct FVector2D               ViewportPosition;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGeometry               Geometry                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               LocalCoordinate                (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               PixelPosition                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector2D               ViewportPosition               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToViewport");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGeometry               Geometry;
		struct FVector2D               LocalCoordinate;
		struct FVector2D               PixelPosition;
		struct FVector2D               ViewportPosition;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               LocalCoordinate                (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToAbsolute");

	struct
	{
		struct FGeometry               Geometry;
		struct FVector2D               LocalCoordinate;
		struct FVector2D               ReturnValue;
	} params;

	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.IsUnderLocation");

	struct
	{
		struct FGeometry               Geometry;
		struct FVector2D               AbsoluteCoordinate;
		bool                           ReturnValue;
	} params;

	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalSize");

	struct
	{
		struct FGeometry               Geometry;
		struct FVector2D               ReturnValue;
	} params;

	params.Geometry = Geometry;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetAbsoluteSize");

	struct
	{
		struct FGeometry               Geometry;
		struct FVector2D               ReturnValue;
	} params;

	params.Geometry = Geometry;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             A                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FSlateBrush             B                              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush");

	struct
	{
		struct FSlateBrush             A;
		struct FSlateBrush             B;
		bool                           ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               AbsoluteDesktopCoordinate      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               PixelPosition                  (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector2D               ViewportPosition               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               AbsoluteDesktopCoordinate;
		struct FVector2D               PixelPosition;
		struct FVector2D               ViewportPosition;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector2D               AbsoluteCoordinate             (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal");

	struct
	{
		struct FGeometry               Geometry;
		struct FVector2D               AbsoluteCoordinate;
		struct FVector2D               ReturnValue;
	} params;

	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Slider.SetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USlider::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	struct
	{
		float                          InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Slider.SetStepSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USlider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");

	struct
	{
		float                          InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Slider.SetSliderHandleColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (CPF_Parm, CPF_IsPlainOldData)

void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");

	struct
	{
		struct FLinearColor            InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Slider.SetSliderBarColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (CPF_Parm, CPF_IsPlainOldData)

void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");

	struct
	{
		struct FLinearColor            InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Slider.SetLocked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USlider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Slider.SetIndentHandle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USlider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	struct
	{
		bool                           InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Slider.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USlider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Spacer.SetSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               InSize                         (CPF_Parm, CPF_IsPlainOldData)

void USpacer::SetSize(const struct FVector2D& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	struct
	{
		struct FVector2D               InSize;
	} params;

	params.InSize = InSize;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.SetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpinBox::SetValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	struct
	{
		float                          NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.SetMinValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpinBox::SetMinValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	struct
	{
		float                          NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.SetMinSliderValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpinBox::SetMinSliderValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	struct
	{
		float                          NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.SetMaxValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpinBox::SetMaxValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	struct
	{
		float                          NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.SetMaxSliderValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpinBox::SetMaxSliderValue(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	struct
	{
		float                          NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.SetForegroundColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateColor             InForegroundColor              (CPF_Parm)

void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	struct
	{
		struct FSlateColor             InForegroundColor;
	} params;

	params.InForegroundColor = InForegroundColor;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	struct
	{
		float                          InValue;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	struct
	{
		float                          InValue;
	} params;

	params.InValue = InValue;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USpinBox::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USpinBox::GetMinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMinSliderValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USpinBox::GetMinSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USpinBox::GetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SpinBox.GetMaxSliderValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float USpinBox::GetMaxSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.SpinBox.ClearMinValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USpinBox::ClearMinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.ClearMinSliderValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USpinBox::ClearMinSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.ClearMaxValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USpinBox::ClearMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.SpinBox.ClearMaxSliderValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USpinBox::ClearMaxSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TextBinding.GetTextValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTextBinding::GetTextValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetTextValue");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.TextBinding.GetStringValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTextBinding::GetStringValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetStringValue");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Throbber.SetNumberOfPieces
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InNumberOfPieces               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	struct
	{
		int                            InNumberOfPieces;
	} params;

	params.InNumberOfPieces = InNumberOfPieces;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Throbber.SetAnimateVertically
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAnimateVertically           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	struct
	{
		bool                           bInAnimateVertically;
	} params;

	params.bInAnimateVertically = bInAnimateVertically;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Throbber.SetAnimateOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAnimateOpacity              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	struct
	{
		bool                           bInAnimateOpacity;
	} params;

	params.bInAnimateOpacity = bInAnimateOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Throbber.SetAnimateHorizontally
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAnimateHorizontally         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	struct
	{
		bool                           bInAnimateHorizontally;
	} params;

	params.bInAnimateHorizontally = bInAnimateHorizontally;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TileView.SetItemWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTileView::SetItemWidth(float Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetItemWidth");

	struct
	{
		float                          Width;
	} params;

	params.Width = Width;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TileView.SetItemHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTileView::SetItemHeight(float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetItemHeight");

	struct
	{
		float                          Height;
	} params;

	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.TileView.RequestListRefresh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UTileView::RequestListRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.RequestListRefresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UniformGridPanel.SetSlotPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InSlotPadding                  (CPF_Parm)

void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	struct
	{
		struct FMargin                 InSlotPadding;
	} params;

	params.InSlotPadding = InSlotPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMinDesiredSlotWidth          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	struct
	{
		float                          InMinDesiredSlotWidth;
	} params;

	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMinDesiredSlotHeight         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	struct
	{
		float                          InMinDesiredSlotHeight;
	} params;

	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UUniformGridSlot*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	struct
	{
		class UWidget*                 Content;
		class UUniformGridSlot*        ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UniformGridSlot.SetRow
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InRow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUniformGridSlot::SetRow(int InRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	struct
	{
		int                            InRow;
	} params;

	params.InRow = InRow;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.UniformGridSlot.SetColumn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            InColumn                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUniformGridSlot::SetColumn(int InColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	struct
	{
		int                            InColumn;
	} params;

	params.InColumn = InColumn;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UVerticalBoxSlot*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBox.AddChildToVerticalBox");

	struct
	{
		class UWidget*                 Content;
		class UVerticalBoxSlot*        ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.VerticalBoxSlot.SetSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateChildSize         InSize                         (CPF_Parm)

void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	struct
	{
		struct FSlateChildSize         InSize;
	} params;

	params.InSize = InSize;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.VerticalBoxSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Viewport.Spawn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ActorClass                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UViewport::Spawn(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	struct
	{
		class UClass*                  ActorClass;
		class AActor*                  ReturnValue;
	} params;

	params.ActorClass = ActorClass;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Viewport.SetViewRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (CPF_Parm, CPF_IsPlainOldData)

void UViewport::SetViewRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	struct
	{
		struct FRotator                Rotation;
	} params;

	params.Rotation = Rotation;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Viewport.SetViewLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)

void UViewport::SetViewLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	struct
	{
		struct FVector                 Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.Viewport.GetViewRotation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator UViewport::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewportWorld
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWorld*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWorld* UViewport::GetViewportWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	struct
	{
		class UWorld*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.Viewport.GetViewLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UViewport::GetViewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.VisibilityBinding.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UVisibilityBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VisibilityBinding.GetValue");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.GetStartTime
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWidgetAnimation::GetStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetAnimation.GetEndTime
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWidgetAnimation::GetEndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBinding.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_Const)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UWidgetBinding::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBinding.GetValue");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.UnlockMouse");

	struct
	{
		struct FEventReply             Reply;
		struct FEventReply             ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Unhandled");

	struct
	{
		struct FEventReply             ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWidget*                 FocusWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bInAllUsers                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetUserFocus");

	struct
	{
		struct FEventReply             Reply;
		class UWidget*                 FocusWidget;
		bool                           bInAllUsers;
		struct FEventReply             ReturnValue;
	} params;

	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector2D               NewMousePosition               (CPF_Parm, CPF_IsPlainOldData)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetMousePosition");

	struct
	{
		struct FEventReply             Reply;
		struct FVector2D               NewMousePosition;
		struct FEventReply             ReturnValue;
	} params;

	params.NewMousePosition = NewMousePosition;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 InWidgetToFocus                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// EMouseLockMode                 InMouseLockMode                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx");

	struct
	{
		class APlayerController*       PlayerController;
		class UWidget*                 InWidgetToFocus;
		EMouseLockMode                 InMouseLockMode;
	} params;

	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 InWidgetToFocus                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bLockMouseToViewport           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly");

	struct
	{
		class APlayerController*       Target;
		class UWidget*                 InWidgetToFocus;
		bool                           bLockMouseToViewport;
	} params;

	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly");

	struct
	{
		class APlayerController*       PlayerController;
	} params;

	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 InWidgetToFocus                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// EMouseLockMode                 InMouseLockMode                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bHideCursorDuringCapture       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx");

	struct
	{
		class APlayerController*       PlayerController;
		class UWidget*                 InWidgetToFocus;
		EMouseLockMode                 InMouseLockMode;
		bool                           bHideCursorDuringCapture;
	} params;

	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       Target                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 InWidgetToFocus                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bLockMouseToViewport           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bHideCursorDuringCapture       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI");

	struct
	{
		class APlayerController*       Target;
		class UWidget*                 InWidgetToFocus;
		bool                           bLockMouseToViewport;
		bool                           bHideCursorDuringCapture;
	} params;

	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMouseCursor>      CursorShape                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   CursorName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               HotSpot                        (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor");

	struct
	{
		class UObject*                 WorldContextObject;
		TEnumAsByte<EMouseCursor>      CursorShape;
		struct FName                   CursorName;
		struct FVector2D               HotSpot;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTexture2D*              Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture");

	struct
	{
		struct FSlateBrush             Brush;
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UMaterialInterface*      Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial");

	struct
	{
		struct FSlateBrush             Brush;
		class UMaterialInterface*      Material;
	} params;

	params.Material = Material;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture");

	struct
	{
		struct FEventReply             Reply;
		struct FEventReply             ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bInAllJoysticks                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture");

	struct
	{
		struct FEventReply             Reply;
		bool                           bInAllJoysticks;
		struct FEventReply             ReturnValue;
	} params;

	params.bInAllJoysticks = bInAllJoysticks;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.NoResourceBrush");

	struct
	{
		struct FSlateBrush             ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture");

	struct
	{
		class UTexture2D*              Texture;
		int                            Width;
		int                            Height;
		struct FSlateBrush             ReturnValue;
	} params;

	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInterface*      Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial");

	struct
	{
		class UMaterialInterface*      Material;
		int                            Width;
		int                            Height;
		struct FSlateBrush             ReturnValue;
	} params;

	params.Material = Material;
	params.Width = Width;
	params.Height = Height;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USlateBrushAsset*        BrushAsset                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset");

	struct
	{
		class USlateBrushAsset*        BrushAsset;
		struct FSlateBrush             ReturnValue;
	} params;

	params.BrushAsset = BrushAsset;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWidget*                 CapturingWidget                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.LockMouse");

	struct
	{
		struct FEventReply             Reply;
		class UWidget*                 CapturingWidget;
		struct FEventReply             ReturnValue;
	} params;

	params.CapturingWidget = CapturingWidget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.IsDragDropping");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Handled
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::Handled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Handled");

	struct
	{
		struct FEventReply             ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector4                SafePadding                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector2D               SafePaddingScale               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector4                SpillOverPadding               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector4                SafePadding;
		struct FVector2D               SafePaddingScale;
		struct FVector4                SpillOverPadding;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SafePadding != nullptr)
		*SafePadding = params.SafePadding;
	if (SafePaddingScale != nullptr)
		*SafePaddingScale = params.SafePaddingScale;
	if (SpillOverPadding != nullptr)
		*SpillOverPadding = params.SpillOverPadding;
}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FAnalogInputEvent       Event                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FKeyEvent               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent");

	struct
	{
		struct FAnalogInputEvent       Event;
		struct FKeyEvent               ReturnValue;
	} params;

	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FPointerEvent           Event                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FInputEvent             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent");

	struct
	{
		struct FPointerEvent           Event;
		struct FInputEvent             ReturnValue;
	} params;

	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FNavigationEvent        Event                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FInputEvent             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent");

	struct
	{
		struct FNavigationEvent        Event;
		struct FInputEvent             ReturnValue;
	} params;

	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FKeyEvent               Event                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FInputEvent             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent");

	struct
	{
		struct FKeyEvent               Event;
		struct FInputEvent             ReturnValue;
	} params;

	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FCharacterEvent         Event                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FInputEvent             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent");

	struct
	{
		struct FCharacterEvent         Event;
		struct FInputEvent             ReturnValue;
	} params;

	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial");

	struct
	{
		struct FSlateBrush             Brush;
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UDragDropOperation*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent");

	struct
	{
		class UDragDropOperation*      ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D");

	struct
	{
		struct FSlateBrush             Brush;
		class UTexture2D*              ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UMaterialInterface*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial");

	struct
	{
		struct FSlateBrush             Brush;
		class UMaterialInterface*      ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UObject* UWidgetBlueprintLibrary::GetBrushResource(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResource");

	struct
	{
		struct FSlateBrush             Brush;
		class UObject*                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Brush != nullptr)
		*Brush = params.Brush;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Interface                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UUserWidget*>     FoundWidgets                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           TopLevelOnly                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  Interface;
		TArray<class UUserWidget*>     FoundWidgets;
		bool                           TopLevelOnly;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UUserWidget*>     FoundWidgets                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// class UClass*                  WidgetClass                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TopLevelOnly                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UUserWidget*>     FoundWidgets;
		class UClass*                  WidgetClass;
		bool                           TopLevelOnly;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.EndDragDrop");

	struct
	{
		struct FEventReply             Reply;
		struct FEventReply             ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector2D               Position                       (CPF_Parm, CPF_IsPlainOldData)
// class UFont*                   Font                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FontSize                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   FontTypeFace                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Tint                           (CPF_Parm, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted");

	struct
	{
		struct FPaintContext           Context;
		struct FText                   Text;
		struct FVector2D               Position;
		class UFont*                   Font;
		int                            FontSize;
		struct FName                   FontTypeFace;
		struct FLinearColor            Tint;
	} params;

	params.Text = Text;
	params.Position = Position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 inString                       (CPF_Parm, CPF_ZeroConstructor)
// struct FVector2D               Position                       (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Tint                           (CPF_Parm, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawText");

	struct
	{
		struct FPaintContext           Context;
		struct FString                 inString;
		struct FVector2D               Position;
		struct FLinearColor            Tint;
	} params;

	params.inString = inString;
	params.Position = Position;
	params.Tint = Tint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<struct FVector2D>       Points                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FLinearColor            Tint                           (CPF_Parm, CPF_IsPlainOldData)
// bool                           bAntiAlias                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLines");

	struct
	{
		struct FPaintContext           Context;
		TArray<struct FVector2D>       Points;
		struct FLinearColor            Tint;
		bool                           bAntiAlias;
	} params;

	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector2D               PositionA                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               PositionB                      (CPF_Parm, CPF_IsPlainOldData)
// struct FLinearColor            Tint                           (CPF_Parm, CPF_IsPlainOldData)
// bool                           bAntiAlias                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLine");

	struct
	{
		struct FPaintContext           Context;
		struct FVector2D               PositionA;
		struct FVector2D               PositionB;
		struct FLinearColor            Tint;
		bool                           bAntiAlias;
	} params;

	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector2D               Position                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               Size                           (CPF_Parm, CPF_IsPlainOldData)
// class USlateBrushAsset*        Brush                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Tint                           (CPF_Parm, CPF_IsPlainOldData)

void UWidgetBlueprintLibrary::DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawBox");

	struct
	{
		struct FPaintContext           Context;
		struct FVector2D               Position;
		struct FVector2D               Size;
		class USlateBrushAsset*        Brush;
		struct FLinearColor            Tint;
	} params;

	params.Position = Position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DismissAllMenus");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWidget*                 WidgetDetectingDrag            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FKey                    DragKey                        (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed");

	struct
	{
		struct FPointerEvent           PointerEvent;
		class UWidget*                 WidgetDetectingDrag;
		struct FKey                    DragKey;
		struct FEventReply             ReturnValue;
	} params;

	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWidget*                 WidgetDetectingDrag            (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FKey                    DragKey                        (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDrag");

	struct
	{
		struct FEventReply             Reply;
		class UWidget*                 WidgetDetectingDrag;
		struct FKey                    DragKey;
		struct FEventReply             ReturnValue;
	} params;

	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  OperationClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDragDropOperation*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(class UClass* OperationClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation");

	struct
	{
		class UClass*                  OperationClass;
		class UDragDropOperation*      ReturnValue;
	} params;

	params.OperationClass = OperationClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.Create
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  WidgetType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       OwningPlayer                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Create");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  WidgetType;
		class APlayerController*       OwningPlayer;
		class UUserWidget*             ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bInAllUsers                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ClearUserFocus");

	struct
	{
		struct FEventReply             Reply;
		bool                           bInAllUsers;
		struct FEventReply             ReturnValue;
	} params;

	params.bInAllUsers = bInAllUsers;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWidget*                 CapturingWidget                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureMouse");

	struct
	{
		struct FEventReply             Reply;
		class UWidget*                 CapturingWidget;
		struct FEventReply             ReturnValue;
	} params;

	params.CapturingWidget = CapturingWidget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UWidget*                 CapturingWidget                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bInAllJoysticks                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureJoystick");

	struct
	{
		struct FEventReply             Reply;
		class UWidget*                 CapturingWidget;
		bool                           bInAllJoysticks;
		struct FEventReply             ReturnValue;
	} params;

	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Reply != nullptr)
		*Reply = params.Reply;

	return params.ReturnValue;
}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CancelDragDrop");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetComponent.SetWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWidgetComponent::SetWidget(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	struct
	{
		class UUserWidget*             Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetComponent.SetTintColorAndOpacity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            NewTintColorAndOpacity         (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)

void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");

	struct
	{
		struct FLinearColor            NewTintColorAndOpacity;
	} params;

	params.NewTintColorAndOpacity = NewTintColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	struct
	{
		class ULocalPlayer*            LocalPlayer;
	} params;

	params.LocalPlayer = LocalPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetComponent.SetDrawSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               Size                           (CPF_Parm, CPF_IsPlainOldData)

void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	struct
	{
		struct FVector2D               Size;
	} params;

	params.Size = Size;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetComponent.SetBackgroundColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            NewBackgroundColor             (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)

void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");

	struct
	{
		struct FLinearColor            NewBackgroundColor;
	} params;

	params.NewBackgroundColor = NewBackgroundColor;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetComponent.RequestRedraw
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UWidgetComponent::RequestRedraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetComponent.GetUserWidgetObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	struct
	{
		class UUserWidget*             ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetRenderTarget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");

	struct
	{
		class UTextureRenderTarget2D*  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	struct
	{
		class ULocalPlayer*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetMaterialInstance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");

	struct
	{
		class UMaterialInstanceDynamic* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetComponent.GetDrawSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UWidgetComponent::GetDrawSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");

	struct
	{
		struct FHitResult              HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Characters                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           bRepeat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetInteractionComponent::SendKeyChar(const struct FString& Characters, bool bRepeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");

	struct
	{
		struct FString                 Characters;
		bool                           bRepeat;
		bool                           ReturnValue;
	} params;

	params.Characters = Characters;
	params.bRepeat = bRepeat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ScrollDelta                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");

	struct
	{
		float                          ScrollDelta;
	} params;

	params.ScrollDelta = ScrollDelta;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");

	struct
	{
		struct FKey                    Key;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetInteractionComponent.PressKey
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)
// bool                           bRepeat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");

	struct
	{
		struct FKey                    Key;
		bool                           bRepeat;
		bool                           ReturnValue;
	} params;

	params.Key = Key;
	params.bRepeat = bRepeat;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");

	struct
	{
		struct FKey                    Key;
		bool                           ReturnValue;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetInteractionComponent::IsOverInteractableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetInteractionComponent::IsOverFocusableWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FHitResult              ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)

struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");

	struct
	{
		struct FHitResult              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWidgetComponent*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");

	struct
	{
		class UWidgetComponent*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UVerticalBoxSlot*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot");

	struct
	{
		class UWidget*                 Widget;
		class UVerticalBoxSlot*        ReturnValue;
	} params;

	params.Widget = Widget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UUniformGridSlot*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot");

	struct
	{
		class UWidget*                 Widget;
		class UUniformGridSlot*        ReturnValue;
	} params;

	params.Widget = Widget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UOverlaySlot*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot");

	struct
	{
		class UWidget*                 Widget;
		class UOverlaySlot*            ReturnValue;
	} params;

	params.Widget = Widget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UHorizontalBoxSlot*      ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot");

	struct
	{
		class UWidget*                 Widget;
		class UHorizontalBoxSlot*      ReturnValue;
	} params;

	params.Widget = Widget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UGridSlot*               ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot");

	struct
	{
		class UWidget*                 Widget;
		class UGridSlot*               ReturnValue;
	} params;

	params.Widget = Widget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UCanvasPanelSlot*        ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot");

	struct
	{
		class UWidget*                 Widget;
		class UCanvasPanelSlot*        ReturnValue;
	} params;

	params.Widget = Widget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UBorderSlot*             ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot");

	struct
	{
		class UWidget*                 Widget;
		class UBorderSlot*             ReturnValue;
	} params;

	params.Widget = Widget;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 WorldLocation                  (CPF_Parm, CPF_IsPlainOldData)
// struct FVector2D               ScreenPosition                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition");

	struct
	{
		class APlayerController*       PlayerController;
		struct FVector                 WorldLocation;
		struct FVector2D               ScreenPosition;
		bool                           ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGeometry               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGeometry               ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportSize");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportScale");

	struct
	{
		class UObject*                 WorldContextObject;
		float                          ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGeometry               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry");

	struct
	{
		class APlayerController*       PlayerController;
		struct FGeometry               ReturnValue;
	} params;

	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Player                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LocationX                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LocationY                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI");

	struct
	{
		class APlayerController*       Player;
		float                          LocationX;
		float                          LocationY;
		bool                           ReturnValue;
	} params;

	params.Player = Player;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector2D               ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetSwitcher::SetActiveWidgetIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	struct
	{
		class UWidget*                 Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	struct
	{
		int                            Index;
		class UWidget*                 ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWidgetSwitcher::GetNumWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UWidgetSwitcher::GetActiveWidgetIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcher.GetActiveWidget
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UWidgetSwitcher::GetActiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WindowTitleBarArea.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WrapBox.SetInnerSlotPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               InPadding                      (CPF_Parm, CPF_IsPlainOldData)

void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	struct
	{
		struct FVector2D               InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WrapBox.AddChildWrapBox
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UWrapBoxSlot*            ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWrapBoxSlot* UWrapBox::AddChildWrapBox(class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildWrapBox");

	struct
	{
		class UWidget*                 Content;
		class UWrapBoxSlot*            ReturnValue;
	} params;

	params.Content = Content;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	struct
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	} params;

	params.InVerticalAlignment = InVerticalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WrapBoxSlot.SetPadding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (CPF_Parm)

void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	struct
	{
		struct FMargin                 InPadding;
	} params;

	params.InPadding = InPadding;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	struct
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	} params;

	params.InHorizontalAlignment = InHorizontalAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InFillSpanWhenLessThan         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	struct
	{
		float                          InFillSpanWhenLessThan;
	} params;

	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	UObject::ProcessEvent(fn, &params);
}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InbFillEmptySpace              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	struct
	{
		bool                           InbFillEmptySpace;
	} params;

	params.InbFillEmptySpace = InbFillEmptySpace;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
