// SCUM (0.1.20) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Ultra_Dynamic_Sky_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::Set_Material_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::Set_Solar_Angle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateSky
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AUltra_Dynamic_Sky_BP_C::UpdateSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UpdateSky");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AUltra_Dynamic_Sky_BP_C::ExecuteUbergraph_Ultra_Dynamic_Sky_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP");

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
