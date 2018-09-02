#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Foliage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Foliage.Menu_C
// 0x0010 (0x0330 - 0x0320)
class AMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class APrisoner*                                   None_ExecuteUbergraph_Foliage_RefProperty;                // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Foliage.Menu_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Recapture();
	void ExecuteUbergraph_Foliage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
