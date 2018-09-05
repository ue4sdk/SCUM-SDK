// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BPI_Movable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Movable.BPI_Movable_C.OnStartDrag
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_Movable_C::OnStartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Movable.BPI_Movable_C.OnStartDrag");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
