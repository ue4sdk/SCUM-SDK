// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MessageContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MessageContainer.MessageContainer_C.AddMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<EMessageType>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void UMessageContainer_C::AddMessage(const struct FText& Text, TEnumAsByte<EMessageType> Type, float Duration, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageContainer.MessageContainer_C.AddMessage");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<EMessageType>      Type;
		float                          Duration;
		struct FLinearColor            Color;
	} params;

	params.Text = Text;
	params.Type = Type;
	params.Duration = Duration;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
