#ifndef UE4SS_SDK_GeometryFramework_HPP
#define UE4SS_SDK_GeometryFramework_HPP

#include "GeometryFramework_enums.hpp"

struct FDynamicMeshChangeInfo
{
    EDynamicMeshChangeType Type;                                                      // 0x0000 (size: 0x1)
    EDynamicMeshAttributeChangeFlags Flags;                                           // 0x0001 (size: 0x1)
    bool bIsRevertChange;                                                             // 0x0002 (size: 0x1)

}; // Size: 0x20

class ADynamicMeshActor : public AActor
{
    class UDynamicMeshComponent* DynamicMeshComponent;                                // 0x0290 (size: 0x8)
    bool bEnableComputeMeshPool;                                                      // 0x0298 (size: 0x1)
    class UDynamicMeshPool* DynamicMeshPool;                                          // 0x02A0 (size: 0x8)

    bool ReleaseComputeMesh(class UDynamicMesh* Mesh);
    void ReleaseAllComputeMeshes();
    class UDynamicMeshComponent* GetDynamicMeshComponent();
    class UDynamicMeshPool* GetComputeMeshPool();
    void FreeAllComputeMeshes();
    class UDynamicMesh* AllocateComputeMesh();
}; // Size: 0x2A8

class IMeshCommandChangeTarget : public IInterface
{
}; // Size: 0x28

class IMeshReplacementCommandChangeTarget : public IInterface
{
}; // Size: 0x28

class IMeshVertexCommandChangeTarget : public IInterface
{
}; // Size: 0x28

class UBaseDynamicMeshComponent : public UMeshComponent
{
    bool bExplicitShowWireframe;                                                      // 0x0590 (size: 0x1)
    FLinearColor WireframeColor;                                                      // 0x0594 (size: 0x10)
    EDynamicMeshComponentColorOverrideMode ColorMode;                                 // 0x05A4 (size: 0x1)
    FColor ConstantColor;                                                             // 0x05A8 (size: 0x4)
    bool bEnableFlatShading;                                                          // 0x05AC (size: 0x1)
    bool bEnableViewModeOverrides;                                                    // 0x05AD (size: 0x1)
    class UMaterialInterface* OverrideRenderMaterial;                                 // 0x05B0 (size: 0x8)
    class UMaterialInterface* SecondaryRenderMaterial;                                // 0x05B8 (size: 0x8)
    bool bEnableRayTracing;                                                           // 0x05C1 (size: 0x1)
    TArray<class UMaterialInterface*> BaseMaterials;                                  // 0x05C8 (size: 0x10)

    void SetViewModeOverridesEnabled(bool bEnabled);
    void SetShadowsEnabled(bool bEnabled);
    void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
    void SetSecondaryBuffersVisibility(bool bSetVisible);
    void SetOverrideRenderMaterial(class UMaterialInterface* Material);
    void SetEnableWireframeRenderPass(bool bEnable);
    void SetEnableRaytracing(bool bSetEnabled);
    void SetEnableFlatShading(bool bEnable);
    void SetConstantOverrideColor(FColor NewColor);
    void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode newMode);
    bool HasOverrideRenderMaterial(int32 K);
    bool GetViewModeOverridesEnabled();
    bool GetShadowsEnabled();
    class UMaterialInterface* GetSecondaryRenderMaterial();
    bool GetSecondaryBuffersVisibility();
    class UMaterialInterface* GetOverrideRenderMaterial(int32 MaterialIndex);
    bool GetFlatShadingEnabled();
    bool GetEnableWireframeRenderPass();
    bool GetEnableRaytracing();
    class UDynamicMesh* GetDynamicMesh();
    FColor GetConstantOverrideColor();
    EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();
    void ClearSecondaryRenderMaterial();
    void ClearOverrideRenderMaterial();
}; // Size: 0x5E0

class UDynamicMesh : public UObject
{
    FDynamicMeshMeshModifiedBPEvent MeshModifiedBPEvent;                              // 0x0070 (size: 0x10)
    void OnDynamicMeshModifiedBP(class UDynamicMesh* Mesh);
    class UDynamicMeshGenerator* MeshGenerator;                                       // 0x00A0 (size: 0x8)
    bool bEnableMeshGenerator;                                                        // 0x00A8 (size: 0x1)

    class UDynamicMesh* ResetToCube();
    class UDynamicMesh* Reset();
    bool IsEmpty();
    int32 GetTriangleCount();
}; // Size: 0xB0

class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{
    class UDynamicMesh* MeshObject;                                                   // 0x05E0 (size: 0x8)
    EDynamicMeshComponentTangentsMode TangentsType;                                   // 0x06E0 (size: 0x1)
    TEnumAsByte<ECollisionTraceFlag> CollisionType;                                   // 0x0720 (size: 0x1)
    bool bUseAsyncCooking;                                                            // 0x0721 (size: 0x1)
    bool bEnableComplexCollision;                                                     // 0x0722 (size: 0x1)
    bool bDeferCollisionUpdates;                                                      // 0x0723 (size: 0x1)
    class UBodySetup* MeshBodySetup;                                                  // 0x0728 (size: 0x8)
    FKAggregateGeom AggGeom;                                                          // 0x0768 (size: 0x68)
    TArray<class UBodySetup*> AsyncBodySetupQueue;                                    // 0x07D0 (size: 0x10)

    bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);
    void UpdateCollision(bool bOnlyIfPending);
    void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);
    void SetDynamicMesh(class UDynamicMesh* NewMesh);
    void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
    void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
    EDynamicMeshComponentTangentsMode GetTangentsType();
    void EnableComplexAsSimpleCollision();
    void ConfigureMaterialSet(const TArray<class UMaterialInterface*>& NewMaterialSet);
}; // Size: 0x7F0

class UDynamicMeshGenerator : public UObject
{
}; // Size: 0x28

class UDynamicMeshPool : public UObject
{
    TArray<class UDynamicMesh*> CachedMeshes;                                         // 0x0028 (size: 0x10)
    TArray<class UDynamicMesh*> AllCreatedMeshes;                                     // 0x0038 (size: 0x10)

    void ReturnMesh(class UDynamicMesh* Mesh);
    void ReturnAllMeshes();
    class UDynamicMesh* RequestMesh();
    void FreeAllMeshes();
}; // Size: 0x48

#endif
