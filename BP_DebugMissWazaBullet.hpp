#ifndef UE4SS_SDK_BP_DebugMissWazaBullet_HPP
#define UE4SS_SDK_BP_DebugMissWazaBullet_HPP

class ABP_DebugMissWazaBullet_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    double Timer;                                                                     // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_DebugMissWazaBullet(int32 EntryPoint);
}; // Size: 0x2B0

#endif
