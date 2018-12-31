#pragma once

// SCUM (0.1.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Slate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x0278 (0x02A8 - 0x0030)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0030(0x0278) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x0580 (0x05B0 - 0x0030)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0030(0x0580) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x03D8 (0x0408 - 0x0030)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0030(0x03D8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x03A0 (0x03D0 - 0x0030)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0030(0x03A0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x07F0 (0x0820 - 0x0030)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0030(0x07F0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x0218 (0x0248 - 0x0030)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0030(0x0218) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x01A0 (0x01D0 - 0x0030)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0030(0x01A0) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x04D0 (0x0500 - 0x0030)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0030(0x04D0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x0228 (0x0258 - 0x0030)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0030(0x0228) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.SlateSettings
// 0x0008 (0x0030 - 0x0028)
class USlateSettings : public UObject
{
public:
	bool                                               bExplicitCanvasChildZOrder;                               // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.SlateSettings");
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x02E8 (0x0318 - 0x0030)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0030(0x02E8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x01E0 (0x0210 - 0x0030)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0030(0x01E0) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
