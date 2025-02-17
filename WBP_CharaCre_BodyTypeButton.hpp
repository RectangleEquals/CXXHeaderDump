#ifndef UE4SS_SDK_WBP_CharaCre_BodyTypeButton_HPP
#define UE4SS_SDK_WBP_CharaCre_BodyTypeButton_HPP

class UWBP_CharaCre_BodyTypeButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_UnselectToSelect;                                     // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UImage* Base;                                                               // 0x0290 (size: 0x8)
    class UImage* Frame;                                                              // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BodyType;                                          // 0x02A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A8 (size: 0x8)
    FDataTableRowHandle MsgId;                                                        // 0x02B0 (size: 0x10)
    FName Bind Preset Name;                                                           // 0x02C0 (size: 0x8)
    FWBP_CharaCre_BodyTypeButton_COnClicked OnClicked;                                // 0x02C8 (size: 0x10)
    void OnClicked(class UWBP_CharaCre_BodyTypeButton_C* Widget);
    FDataTableRowHandle VoiceMsgID;                                                   // 0x02D8 (size: 0x10)

    void SetupAsVoice(int32 ButtonIndex);
    void GetBindedPresetName(FName& PresetName);
    void Setup(FName BindPresetName, int32 ButtonIndex);
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CharaCre_BodyTypeButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_CharaCre_BodyTypeButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_CharaCre_BodyTypeButton_C* Widget);
}; // Size: 0x2E8

#endif
