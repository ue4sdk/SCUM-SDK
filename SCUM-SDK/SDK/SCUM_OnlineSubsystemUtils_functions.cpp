// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_OnlineSubsystemUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   AchievementID                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFoundID                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          progress                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAchievementBlueprintLibrary::GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FName                   AchievementID;
		bool                           bFoundID;
		float                          progress;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (progress != nullptr)
		*progress = params.progress;
}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   AchievementID                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFoundID                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Title                          (CPF_Parm, CPF_OutParm)
// struct FText                   LockedDescription              (CPF_Parm, CPF_OutParm)
// struct FText                   UnlockedDescription            (CPF_Parm, CPF_OutParm)
// bool                           bHidden                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAchievementBlueprintLibrary::GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FName                   AchievementID;
		bool                           bFoundID;
		struct FText                   Title;
		struct FText                   LockedDescription;
		struct FText                   UnlockedDescription;
		bool                           bHidden;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementID = AchievementID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Title != nullptr)
		*Title = params.Title;
	if (LockedDescription != nullptr)
		*LockedDescription = params.LockedDescription;
	if (UnlockedDescription != nullptr)
		*UnlockedDescription = params.UnlockedDescription;
	if (bHidden != nullptr)
		*bHidden = params.bHidden;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAchievementQueryCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UAchievementQueryCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAchievementQueryCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UAchievementQueryCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   AchievementName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          progress                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            UserTag                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAchievementWriteCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float progress, int UserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FName                   AchievementName;
		float                          progress;
		int                            UserTag;
		class UAchievementWriteCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementName = AchievementName;
	params.progress = progress;
	params.UserTag = UserTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UConnectionCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UConnectionCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PublicConnections              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCreateSessionCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            PublicConnections;
		bool                           bUseLAN;
		class UCreateSessionCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDestroySessionCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UDestroySessionCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MatchID                        (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<EMPMatchOutcome>   LocalPlayerOutcome             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMPMatchOutcome>   OtherPlayersOutcome            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEndMatchCallbackProxy*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		TScriptInterface<class UTurnBasedMatchInterface> MatchActor;
		struct FString                 MatchID;
		TEnumAsByte<EMPMatchOutcome>   LocalPlayerOutcome;
		TEnumAsByte<EMPMatchOutcome>   OtherPlayersOutcome;
		class UEndMatchCallbackProxy*  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MatchID = MatchID;
	params.LocalPlayerOutcome = LocalPlayerOutcome;
	params.OtherPlayersOutcome = OtherPlayersOutcome;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MatchID                        (CPF_Parm, CPF_ZeroConstructor)
// TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UEndTurnCallbackProxy*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FString                 MatchID;
		TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface;
		class UEndTurnCallbackProxy*   ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.TurnBasedMatchInterface = TurnBasedMatchInterface;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UFindSessionsCallbackProxy::GetServerName(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName");

	struct
	{
		struct FBlueprintSessionResult Result;
		struct FString                 ReturnValue;
	} params;

	params.Result = Result;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UFindSessionsCallbackProxy::GetPingInMs(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs");

	struct
	{
		struct FBlueprintSessionResult Result;
		int                            ReturnValue;
	} params;

	params.Result = Result;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UFindSessionsCallbackProxy::GetMaxPlayers(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers");

	struct
	{
		struct FBlueprintSessionResult Result;
		int                            ReturnValue;
	} params;

	params.Result = Result;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UFindSessionsCallbackProxy::GetCurrentPlayers(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers");

	struct
	{
		struct FBlueprintSessionResult Result;
		int                            ReturnValue;
	} params;

	params.Result = Result;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MaxResults                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseLAN                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFindSessionsCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            MaxResults;
		bool                           bUseLAN;
		class UFindSessionsCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MinPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MaxPlayers                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PlayerGroup                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ShowExistingMatches            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFindTurnBasedMatchCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		TScriptInterface<class UTurnBasedMatchInterface> MatchActor;
		int                            MinPlayers;
		int                            MaxPlayers;
		int                            PlayerGroup;
		bool                           ShowExistingMatches;
		class UFindTurnBasedMatchCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MinPlayers = MinPlayers;
	params.MaxPlayers = MaxPlayers;
	params.PlayerGroup = PlayerGroup;
	params.ShowExistingMatches = ShowExistingMatches;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FInAppPurchaseProductRequest ProductRequest                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UInAppPurchaseCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase");

	struct
	{
		class APlayerController*       PlayerController;
		struct FInAppPurchaseProductRequest ProductRequest;
		class UInAppPurchaseCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.ProductRequest = ProductRequest;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FString>         ProductIdentifiers             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UInAppPurchaseQueryCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery");

	struct
	{
		class APlayerController*       PlayerController;
		TArray<struct FString>         ProductIdentifiers;
		class UInAppPurchaseQueryCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.ProductIdentifiers = ProductIdentifiers;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UInAppPurchaseRestoreCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore");

	struct
	{
		TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags;
		class APlayerController*       PlayerController;
		class UInAppPurchaseRestoreCallbackProxy* ReturnValue;
	} params;

	params.ConsumableProductFlags = ConsumableProductFlags;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBlueprintSessionResult SearchResult                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UJoinSessionCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FBlueprintSessionResult SearchResult;
		class UJoinSessionCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StatName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StatValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger");

	struct
	{
		class APlayerController*       PlayerController;
		struct FName                   StatName;
		int                            StatValue;
		bool                           ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.StatName = StatName;
	params.StatValue = StatValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SessionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULeaderboardFlushCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush");

	struct
	{
		class APlayerController*       PlayerController;
		struct FName                   SessionName;
		class ULeaderboardFlushCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.SessionName = SessionName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StatName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULeaderboardQueryCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");

	struct
	{
		class APlayerController*       PlayerController;
		struct FName                   StatName;
		class ULeaderboardQueryCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.StatName = StatName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULogoutCallbackProxy*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class ULogoutCallbackProxy*    ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Private, FUNC_NetClient)

void AOnlineBeaconClient::ClientOnConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 SessionId                      (CPF_Parm, CPF_ZeroConstructor)
// struct FPartyReservation       ReservationUpdate              (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void APartyBeaconClient::ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest");

	struct
	{
		struct FString                 SessionId;
		struct FPartyReservation       ReservationUpdate;
	} params;

	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FString                 SessionId                      (CPF_Parm, CPF_ZeroConstructor)
// struct FPartyReservation       Reservation                    (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void APartyBeaconClient::ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest");

	struct
	{
		struct FString                 SessionId;
		struct FPartyReservation       Reservation;
	} params;

	params.SessionId = SessionId;
	params.Reservation = Reservation;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_NetServer, FUNC_NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        PartyLeader                    (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void APartyBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest");

	struct
	{
		struct FUniqueNetIdRepl        PartyLeader;
	} params;

	params.PartyLeader = PartyLeader;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// int                            NumRemainingReservations       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates");

	struct
	{
		int                            NumRemainingReservations;
	} params;

	params.NumRemainingReservations = NumRemainingReservations;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void APartyBeaconClient::ClientSendReservationFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TEnumAsByte<EPartyReservationResult> ReservationResponse            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyBeaconClient::ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse");

	struct
	{
		TEnumAsByte<EPartyReservationResult> ReservationResponse;
	} params;

	params.ReservationResponse = ReservationResponse;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// TEnumAsByte<EPartyReservationResult> ReservationResponse            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APartyBeaconClient::ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse");

	struct
	{
		TEnumAsByte<EPartyReservationResult> ReservationResponse;
	} params;

	params.ReservationResponse = ReservationResponse;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MatchID                        (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<EMPMatchOutcome>   Outcome                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TurnTimeoutInSeconds           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UQuitMatchCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FString                 MatchID;
		TEnumAsByte<EMPMatchOutcome>   Outcome;
		int                            TurnTimeoutInSeconds;
		class UQuitMatchCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.Outcome = Outcome;
	params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       InPlayerController             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UShowLoginUICallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       InPlayerController;
		class UShowLoginUICallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InPlayerController = InPlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetServer, FUNC_NetValidate)

void ATestBeaconClient::ServerPong()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (FUNC_Net, FUNC_NetReliable, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)

void ATestBeaconClient::ClientPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UObject*                 Object;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.Object = Object;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MatchID                        (CPF_Parm, CPF_ZeroConstructor)
// int                            PlayerIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 PlayerDisplayName              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FString                 MatchID;
		int                            PlayerIndex;
		struct FString                 PlayerDisplayName;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.PlayerIndex = PlayerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = params.PlayerDisplayName;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MatchID                        (CPF_Parm, CPF_ZeroConstructor)
// int                            PlayerIndex                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FString                 MatchID;
		int                            PlayerIndex;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MatchID                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           bIsMyTurn                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTurnBasedBlueprintLibrary::GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FString                 MatchID;
		bool                           bIsMyTurn;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = params.bIsMyTurn;
}


// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UVoipListenerSynthComponent::IsIdling()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
