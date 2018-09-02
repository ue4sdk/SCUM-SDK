// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_MovableWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovableWindow.MovableWindow_C.AttachContentWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovableWindow_C::AttachContentWidget(bool NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.AttachContentWidget");

	struct
	{
		bool                           NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function MovableWindow.MovableWindow_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMovableWindow_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnMouseButtonUp");

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


// Function MovableWindow.MovableWindow_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovableWindow_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnDragDetected");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           PointerEvent;
		class UDragDropOperation*      Operation;
	} params;

	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	UObject::ProcessEvent(fn, &params);

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function MovableWindow.MovableWindow_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMovableWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovableWindow.MovableWindow_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovableWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MovableWindow.MovableWindow_C.StartDrag
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMovableWindow_C::StartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.StartDrag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovableWindow.MovableWindow_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               Dimensions                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FString                 Title                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UMovableWindow_C::Init(const struct FVector2D& Dimensions, const struct FString& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.Init");

	struct
	{
		struct FVector2D               Dimensions;
		struct FString                 Title;
	} params;

	params.Dimensions = Dimensions;
	params.Title = Title;

	UObject::ProcessEvent(fn, &params);
}


// Function MovableWindow.MovableWindow_C.OnStartDrag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMovableWindow_C::OnStartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.OnStartDrag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovableWindow.MovableWindow_C.ExecuteUbergraph_MovableWindow
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovableWindow_C::ExecuteUbergraph_MovableWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovableWindow.MovableWindow_C.ExecuteUbergraph_MovableWindow");

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
