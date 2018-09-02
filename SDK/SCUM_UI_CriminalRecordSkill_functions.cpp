// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_UI_CriminalRecordSkill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CriminalRecordSkill.UI_CriminalRecordSkill_C.InitFromSkillTemplate
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSkillTemplate          SkillTemplate                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_CriminalRecordSkill_C::InitFromSkillTemplate(const struct FSkillTemplate& SkillTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordSkill.UI_CriminalRecordSkill_C.InitFromSkillTemplate");

	struct
	{
		struct FSkillTemplate          SkillTemplate;
	} params;

	params.SkillTemplate = SkillTemplate;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
