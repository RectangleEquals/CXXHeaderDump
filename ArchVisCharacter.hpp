#ifndef UE4SS_SDK_ArchVisCharacter_HPP
#define UE4SS_SDK_ArchVisCharacter_HPP

class AArchVisCharacter : public ACharacter
{
    FString LookUpAxisName;                                                           // 0x0618 (size: 0x10)
    FString LookUpAtRateAxisName;                                                     // 0x0628 (size: 0x10)
    FString TurnAxisName;                                                             // 0x0638 (size: 0x10)
    FString TurnAtRateAxisName;                                                       // 0x0648 (size: 0x10)
    FString MoveForwardAxisName;                                                      // 0x0658 (size: 0x10)
    FString MoveRightAxisName;                                                        // 0x0668 (size: 0x10)
    float MouseSensitivityScale_Pitch;                                                // 0x0678 (size: 0x4)
    float MouseSensitivityScale_Yaw;                                                  // 0x067C (size: 0x4)

}; // Size: 0x680

class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
    FRotator RotationalAcceleration;                                                  // 0x1048 (size: 0x18)
    FRotator RotationalDeceleration;                                                  // 0x1060 (size: 0x18)
    FRotator MaxRotationalVelocity;                                                   // 0x1078 (size: 0x18)
    float MinPitch;                                                                   // 0x1090 (size: 0x4)
    float MaxPitch;                                                                   // 0x1094 (size: 0x4)
    float WalkingFriction;                                                            // 0x1098 (size: 0x4)
    float WalkingSpeed;                                                               // 0x109C (size: 0x4)
    float WalkingAcceleration;                                                        // 0x10A0 (size: 0x4)

}; // Size: 0x10E0

#endif
