// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Foliage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Foliage.Menu_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.Menu_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Foliage.Menu_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMenu_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.Menu_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Foliage.Menu_C.Recapture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMenu_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.Menu_C.Recapture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Foliage.Menu_C.ExecuteUbergraph_Foliage
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMenu_C::ExecuteUbergraph_Foliage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.Menu_C.ExecuteUbergraph_Foliage");

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
