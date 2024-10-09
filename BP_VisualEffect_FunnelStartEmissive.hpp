#ifndef UE4SS_SDK_BP_VisualEffect_FunnelStartEmissive_HPP
#define UE4SS_SDK_BP_VisualEffect_FunnelStartEmissive_HPP

class UBP_VisualEffect_FunnelStartEmissive_C : public UPalVisualEffectBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0070 (size: 0x8)
    double EmissionTime;                                                              // 0x0078 (size: 0x8)
    double EmissionTimer;                                                             // 0x0080 (size: 0x8)
    double CurrentEmission;                                                           // 0x0088 (size: 0x8)
    double EndEmission;                                                               // 0x0090 (size: 0x8)
    double StartEmissive;                                                             // 0x0098 (size: 0x8)
    FName flagName;                                                                   // 0x00A0 (size: 0x8)
    double ScaleTime;                                                                 // 0x00A8 (size: 0x8)
    double ScaleTimer;                                                                // 0x00B0 (size: 0x8)
    bool IsScaleEnable;                                                               // 0x00B8 (size: 0x1)

    void ModifyEffectBySize(class UNiagaraComponent* Effect, EPalSizeType Size);
    void SetScale(double Value);
    void OnBeginVisualEffect();
    void TickVisualEffect(float DeltaTime);
    void ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive(int32 EntryPoint);
}; // Size: 0xB9

#endif
