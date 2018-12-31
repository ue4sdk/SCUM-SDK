// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ReplicationGraph_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// class UClass*                  Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CullDistance                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass");

	struct
	{
		class UClass*                  Class;
		float                          CullDistance;
	} params;

	params.Class = Class;
	params.CullDistance = CullDistance;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 str                            (CPF_Parm, CPF_ZeroConstructor)

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const struct FString& str)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo");

	struct
	{
		struct FString                 str;
	} params;

	params.str = str;

	UObject::ProcessEvent(fn, &params);
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void AReplicationGraphDebugActor::ServerCellInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_NetClient)
// Parameters:
// struct FVector                 CellLocation                   (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 CellExtent                     (CPF_Parm, CPF_IsPlainOldData)
// TArray<class AActor*>          Actors                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo");

	struct
	{
		struct FVector                 CellLocation;
		struct FVector                 CellExtent;
		TArray<class AActor*>          Actors;
	} params;

	params.CellLocation = CellLocation;
	params.CellExtent = CellExtent;
	params.Actors = Actors;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
