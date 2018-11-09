// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Message_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Message.Message_C.StartFade
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMessage_C::StartFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Message.Message_C.StartFade");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Message.Message_C.Init
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<EMessageType>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessage_C::Init(const struct FText& Text, TEnumAsByte<EMessageType> Type, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Message.Message_C.Init");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<EMessageType>      Type;
		float                          Duration;
	} params;

	params.Text = Text;
	params.Type = Type;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function Message.Message_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Message.Message_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Message.Message_C.ExecuteUbergraph_Message
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMessage_C::ExecuteUbergraph_Message(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Message.Message_C.ExecuteUbergraph_Message");

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
