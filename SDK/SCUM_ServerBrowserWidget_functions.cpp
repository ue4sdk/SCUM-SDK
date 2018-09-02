// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_ServerBrowserWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerBrowserWidget.ServerBrowserWidget_C.ChangeFilter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Filter                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UServerBrowserWidget_C::ChangeFilter(const struct FText& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChangeFilter");

	struct
	{
		struct FText                   Filter;
	} params;

	params.Filter = Filter;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdatePreviewPrisoners
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ServerIp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            ServerResponsePort             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::UpdatePreviewPrisoners(const struct FString& ServerIp, int ServerResponsePort)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdatePreviewPrisoners");

	struct
	{
		struct FString                 ServerIp;
		int                            ServerResponsePort;
	} params;

	params.ServerIp = ServerIp;
	params.ServerResponsePort = ServerResponsePort;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.GetCurrentUser
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UDbUser*                 user                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::GetCurrentUser(class UDbUser** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GetCurrentUser");

	struct
	{
		class UDbUser*                 user;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (user != nullptr)
		*user = params.user;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.SaveDirectionConnectionAddress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::SaveDirectionConnectionAddress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.SaveDirectionConnectionAddress");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServerAndConnect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 authToken                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UServerBrowserWidget_C::ChooseServerAndConnect(const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServerAndConnect");

	struct
	{
		struct FString                 authToken;
	} params;

	params.authToken = authToken;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServer
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            ResponsePort                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::ChooseServer(struct FString* Ip, int* ResponsePort)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServer");

	struct
	{
		struct FString                 Ip;
		int                            ResponsePort;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Ip != nullptr)
		*Ip = params.Ip;
	if (ResponsePort != nullptr)
		*ResponsePort = params.ResponsePort;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.HidePasswordPopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::HidePasswordPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.HidePasswordPopup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ShowPasswordPopup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::ShowPasswordPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ShowPasswordPopup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.EnterPassword
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::EnterPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.EnterPassword");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ConnectToServerInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 authToken                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UServerBrowserWidget_C::ConnectToServerInfo(const struct FServerInfo& ServerInfo, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ConnectToServerInfo");

	struct
	{
		struct FServerInfo             ServerInfo;
		struct FString                 authToken;
	} params;

	params.ServerInfo = ServerInfo;
	params.authToken = authToken;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateSelectedServer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::UpdateSelectedServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateSelectedServer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnPreviewKeyDown
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UServerBrowserWidget_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnPreviewKeyDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.SelectServerForConnection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UServerBrowserWidget_C::SelectServerForConnection(class UServerInfoWidget_C* ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.SelectServerForConnection");

	struct
	{
		class UServerInfoWidget_C*     ServerInfo;
	} params;

	params.ServerInfo = ServerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.Get_Refresh_bIsEnabled_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UServerBrowserWidget_C::Get_Refresh_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Get_Refresh_bIsEnabled_1");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.GetVisibility_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UServerBrowserWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GetVisibility_1");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ToggleCategory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UUI_MenuButton_C*        Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UServerBrowserWidget_C::ToggleCategory(class UWidget* Widget, class UUI_MenuButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ToggleCategory");

	struct
	{
		class UWidget*                 Widget;
		class UUI_MenuButton_C*        Button;
	} params;

	params.Widget = Widget;
	params.Button = Button;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.Scroll
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::Scroll(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Scroll");

	struct
	{
		float                          Delta;
	} params;

	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UServerBrowserWidget_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnMouseWheel");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateList
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::UpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateList");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.RemoveInfo
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::RemoveInfo(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.RemoveInfo");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.AddNewInfo
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FServerInfo             ServerInfo                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UServerBrowserWidget_C::AddNewInfo(const struct FServerInfo& ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.AddNewInfo");

	struct
	{
		struct FServerInfo             ServerInfo;
	} params;

	params.ServerInfo = ServerInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnClickedOnServerInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfoWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UServerBrowserWidget_C::OnClickedOnServerInfo(class UServerInfoWidget_C* ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnClickedOnServerInfo");

	struct
	{
		class UServerInfoWidget_C*     ServerInfoWidget;
	} params;

	params.ServerInfoWidget = ServerInfoWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnServerInfoDoubleClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfoWidget               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UServerBrowserWidget_C::OnServerInfoDoubleClicked(class UServerInfoWidget_C* ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnServerInfoDoubleClicked");

	struct
	{
		class UServerInfoWidget_C*     ServerInfoWidget;
	} params;

	params.ServerInfoWidget = ServerInfoWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UServerBrowserWidget_C::BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UServerBrowserWidget_C::BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnESC
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnESC");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.CancelPassword
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::CancelPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.CancelPassword");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.GoBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GoBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OldIndex                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UServerBrowserWidget_C::BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	struct
	{
		int                            Index;
		int                            OldIndex;
		struct FText                   Value;
	} params;

	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature");

	struct
	{
		float                          Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnFavoriteRemoved
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FServerInfo             Info                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UServerBrowserWidget_C::OnFavoriteRemoved(const struct FServerInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnFavoriteRemoved");

	struct
	{
		struct FServerInfo             Info;
	} params;

	params.Info = Info;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ShowErrorDialog
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UServerBrowserWidget_C::ShowErrorDialog(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ShowErrorDialog");

	struct
	{
		struct FText                   Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BeginWaitingOnServerResponse
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BeginWaitingOnServerResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BeginWaitingOnServerResponse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.EndWaitingOnServerResponse
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::EndWaitingOnServerResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.EndWaitingOnServerResponse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UServerBrowserWidget_C::BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OpenContinueOrNewDialog
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            GameplayPort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ResponsePort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 authToken                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UServerBrowserWidget_C::OpenContinueOrNewDialog(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OpenContinueOrNewDialog");

	struct
	{
		struct FString                 Ip;
		int                            GameplayPort;
		int                            ResponsePort;
		struct FString                 authToken;
	} params;

	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.authToken = authToken;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnContinueWithCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            GameplayPort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ResponsePort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 authToken                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UServerBrowserWidget_C::OnContinueWithCharacter(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnContinueWithCharacter");

	struct
	{
		struct FString                 Ip;
		int                            GameplayPort;
		int                            ResponsePort;
		struct FString                 authToken;
	} params;

	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.authToken = authToken;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnCreateNewCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            GameplayPort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ResponsePort                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 authToken                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UServerBrowserWidget_C::OnCreateNewCharacter(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnCreateNewCharacter");

	struct
	{
		struct FString                 Ip;
		int                            GameplayPort;
		int                            ResponsePort;
		struct FString                 authToken;
	} params;

	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.authToken = authToken;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnNewCharacterConfirmed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::OnNewCharacterConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnNewCharacterConfirmed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.NewCharacterCanceled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::NewCharacterCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.NewCharacterCanceled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SortByButton_C*      Button;
		TEnumAsByte<ESortByTypes>      Type;
	} params;

	params.Button = Button;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ClearSorts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UServerBrowserWidget_C::ClearSorts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ClearSorts");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SortByButton_C*      Button;
		TEnumAsByte<ESortByTypes>      Type;
	} params;

	params.Button = Button;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SortByButton_C*      Button;
		TEnumAsByte<ESortByTypes>      Type;
	} params;

	params.Button = Button;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SortByButton_C*      Button;
		TEnumAsByte<ESortByTypes>      Type;
	} params;

	params.Button = Button;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature");

	struct
	{
		class UUI_SortByButton_C*      Button;
		TEnumAsByte<ESortByTypes>      Type;
	} params;

	params.Button = Button;
	params.Type = Type;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UServerBrowserWidget_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ExecuteUbergraph_ServerBrowserWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UServerBrowserWidget_C::ExecuteUbergraph_ServerBrowserWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ExecuteUbergraph_ServerBrowserWidget");

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
