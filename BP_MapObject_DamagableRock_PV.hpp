#ifndef UE4SS_SDK_BP_MapObject_DamagableRock_PV_HPP
#define UE4SS_SDK_BP_MapObject_DamagableRock_PV_HPP

class ABP_MapObject_DamagableRock_PV_C : public APalMapObject
{
    class UBoxComponent* CheckOverlapCollision;                                       // 0x03E8 (size: 0x8)
    class UBoxComponent* WorkableBounds;                                              // 0x03F0 (size: 0x8)
    class UArrowComponent* IndicatorOrigin;                                           // 0x03F8 (size: 0x8)
    class UPalMapObjectDropItemParameterComponent* DropItemParameter;                 // 0x0400 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0408 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0410 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0418 (size: 0x8)

}; // Size: 0x420

#endif
