#ifndef UE4SS_SDK_BP_PettingCamera_HPP
#define UE4SS_SDK_BP_PettingCamera_HPP

class ABP_PettingCamera_C : public AActor
{
    class UPalCharacterCameraComponent* PalCharacterCamera;                           // 0x0290 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void EndPettingCamera(class APlayerController* PlayerController);
    void StartPettingCamera(class APlayerController* PlayerController);
    void UpdatePettingCameraOffset(class APlayerController* PlayerController, class AActor* TargetPal);
}; // Size: 0x2A8

#endif
