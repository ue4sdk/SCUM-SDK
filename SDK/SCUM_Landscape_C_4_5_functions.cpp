// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Landscape_C_4_5_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Landscape_C_4_5.Landscape_C_C.BndEvt__LandscapeProxy_11_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscape_C_C::BndEvt__LandscapeProxy_11_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape_C_4_5.Landscape_C_C.BndEvt__LandscapeProxy_11_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	struct
	{
		class AActor*                  OverlappedActor;
		class AActor*                  OtherActor;
	} params;

	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Landscape_C_4_5.Landscape_C_C.ExecuteUbergraph_Landscape_C_4_5
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscape_C_C::ExecuteUbergraph_Landscape_C_4_5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape_C_4_5.Landscape_C_C.ExecuteUbergraph_Landscape_C_4_5");

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
