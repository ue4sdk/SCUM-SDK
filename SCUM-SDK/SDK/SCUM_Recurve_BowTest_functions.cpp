// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Recurve_BowTest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Recurve_BowTest.Recurve_BowTest_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ARecurve_BowTest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_BowTest.Recurve_BowTest_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Recurve_BowTest.Recurve_BowTest_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARecurve_BowTest_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_BowTest.Recurve_BowTest_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Recurve_BowTest.Recurve_BowTest_C.ExecuteUbergraph_Recurve_BowTest
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARecurve_BowTest_C::ExecuteUbergraph_Recurve_BowTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_BowTest.Recurve_BowTest_C.ExecuteUbergraph_Recurve_BowTest");

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
