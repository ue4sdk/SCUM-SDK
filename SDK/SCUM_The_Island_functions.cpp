// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_The_Island_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function The_Island.The_Island_C.Recapture
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThe_Island_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function The_Island.The_Island_C.Recapture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function The_Island.The_Island_C.WorldOriginLocationChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FIntVector              OldOriginLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FIntVector              NewOriginLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void AThe_Island_C::WorldOriginLocationChanged(const struct FIntVector& OldOriginLocation, const struct FIntVector& NewOriginLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function The_Island.The_Island_C.WorldOriginLocationChanged");

	struct
	{
		struct FIntVector              OldOriginLocation;
		struct FIntVector              NewOriginLocation;
	} params;

	params.OldOriginLocation = OldOriginLocation;
	params.NewOriginLocation = NewOriginLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function The_Island.The_Island_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AThe_Island_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function The_Island.The_Island_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function The_Island.The_Island_C.ExecuteUbergraph_The_Island
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AThe_Island_C::ExecuteUbergraph_The_Island(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function The_Island.The_Island_C.ExecuteUbergraph_The_Island");

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
