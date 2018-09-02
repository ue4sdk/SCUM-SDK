#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_ConfirmationBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_ConfirmationBase.UI_ConfirmationBase_C
// 0x0020 (0x0240 - 0x0220)
class UUI_ConfirmationBase_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	bool                                               DestroyAfterClick;                                        // 0x0228(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    NoClicked;                                                // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_ConfirmationBase.UI_ConfirmationBase_C");
		return ptr;
	}


	void AddToCanvas(class UCanvasPanel* Canvas);
	void OnNo();
	void ExecuteUbergraph_UI_ConfirmationBase(int EntryPoint);
	void NoClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
