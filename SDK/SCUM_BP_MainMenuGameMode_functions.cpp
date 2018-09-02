// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_MainMenuGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UpdatePreviewPrisoners
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDbUserProfile*          userProfile                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MainMenuGameMode_C::UpdatePreviewPrisoners(class UDbUserProfile* userProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UpdatePreviewPrisoners");

	struct
	{
		class UDbUserProfile*          userProfile;
	} params;

	params.userProfile = userProfile;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MainMenuGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MainMenuGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MainMenuGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MainMenuGameMode_C::ExecuteUbergraph_BP_MainMenuGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainMenuGameMode.BP_MainMenuGameMode_C.ExecuteUbergraph_BP_MainMenuGameMode");

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
