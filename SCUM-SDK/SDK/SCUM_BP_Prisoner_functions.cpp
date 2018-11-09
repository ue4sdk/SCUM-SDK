// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Prisoner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prisoner.BP_Prisoner_C.FindOtherPlayersInRange
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          SearchDistance                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class ABP_Prisoner_C*>  OtherPlayers                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_Prisoner_C::FindOtherPlayersInRange(float SearchDistance, TArray<class ABP_Prisoner_C*>* OtherPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.FindOtherPlayersInRange");

	struct
	{
		float                          SearchDistance;
		TArray<class ABP_Prisoner_C*>  OtherPlayers;
	} params;

	params.SearchDistance = SearchDistance;

	UObject::ProcessEvent(fn, &params);

	if (OtherPlayers != nullptr)
		*OtherPlayers = params.OtherPlayers;
}


// Function BP_Prisoner.BP_Prisoner_C.DebugPrint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 MessageString                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ValueString                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Prisoner_C::DebugPrint(const struct FString& MessageString, const struct FString& ValueString, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.DebugPrint");

	struct
	{
		struct FString                 MessageString;
		struct FString                 ValueString;
		float                          Duration;
	} params;

	params.MessageString = MessageString;
	params.ValueString = ValueString;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.IKFootTraceToRemove
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TraceDistance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Socket                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          IKOffset                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Prisoner_C::IKFootTraceToRemove(float TraceDistance, const struct FName& Socket, float* IKOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.IKFootTraceToRemove");

	struct
	{
		float                          TraceDistance;
		struct FName                   Socket;
		float                          IKOffset;
	} params;

	params.TraceDistance = TraceDistance;
	params.Socket = Socket;

	UObject::ProcessEvent(fn, &params);

	if (IKOffset != nullptr)
		*IKOffset = params.IKOffset;
}


// Function BP_Prisoner.BP_Prisoner_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Prisoner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.DrawFootstep
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           flip                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Prisoner_C::DrawFootstep(bool flip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.DrawFootstep");

	struct
	{
		bool                           flip;
	} params;

	params.flip = flip;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.InitTextMeshFromName
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void ABP_Prisoner_C::InitTextMeshFromName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.InitTextMeshFromName");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.ServerProcessVoiceChatData
// (FUNC_Net, FUNC_NetServer, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<unsigned char>          CompressedVoiceData            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_Prisoner_C::ServerProcessVoiceChatData(TArray<unsigned char> CompressedVoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ServerProcessVoiceChatData");

	struct
	{
		TArray<unsigned char>          CompressedVoiceData;
	} params;

	params.CompressedVoiceData = CompressedVoiceData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.ClientReceiveVoiceData
// (FUNC_Net, FUNC_HasOutParms, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_Prisoner_C*          FromPlayer                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<unsigned char>          CompressedVoiceData            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_Prisoner_C::ClientReceiveVoiceData(class ABP_Prisoner_C* FromPlayer, TArray<unsigned char> CompressedVoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ClientReceiveVoiceData");

	struct
	{
		class ABP_Prisoner_C*          FromPlayer;
		TArray<unsigned char>          CompressedVoiceData;
	} params;

	params.FromPlayer = FromPlayer;
	params.CompressedVoiceData = CompressedVoiceData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.PlayVoiceChat
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<unsigned char>          CompressedVoiceData            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_Prisoner_C::PlayVoiceChat(TArray<unsigned char> CompressedVoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.PlayVoiceChat");

	struct
	{
		TArray<unsigned char>          CompressedVoiceData;
	} params;

	params.CompressedVoiceData = CompressedVoiceData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_Prisoner_C::BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_Prisoner_C::BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_Prisoner_C::BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Prisoner_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Prisoner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prisoner.BP_Prisoner_C.ExecuteUbergraph_BP_Prisoner
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Prisoner_C::ExecuteUbergraph_BP_Prisoner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ExecuteUbergraph_BP_Prisoner");

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
