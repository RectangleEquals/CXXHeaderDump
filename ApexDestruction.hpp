#ifndef UE4SS_SDK_ApexDestruction_HPP
#define UE4SS_SDK_ApexDestruction_HPP

#include "ApexDestruction_enums.hpp"

struct FDestructibleAdvancedParameters
{
    float DamageCap;                                                                  // 0x0000 (size: 0x4)
    float ImpactVelocityThreshold;                                                    // 0x0004 (size: 0x4)
    float MaxChunkSpeed;                                                              // 0x0008 (size: 0x4)
    float FractureImpulseScale;                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FDestructibleChunkParameters
{
    bool bIsSupportChunk;                                                             // 0x0000 (size: 0x1)
    bool bDoNotFracture;                                                              // 0x0001 (size: 0x1)
    bool bDoNotDamage;                                                                // 0x0002 (size: 0x1)
    bool bDoNotCrumble;                                                               // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FDestructibleDamageParameters
{
    float DamageThreshold;                                                            // 0x0000 (size: 0x4)
    float DamageSpread;                                                               // 0x0004 (size: 0x4)
    bool bEnableImpactDamage;                                                         // 0x0008 (size: 0x1)
    float ImpactDamage;                                                               // 0x000C (size: 0x4)
    int32 DefaultImpactDamageDepth;                                                   // 0x0010 (size: 0x4)
    bool bCustomImpactResistance;                                                     // 0x0014 (size: 0x1)
    float ImpactResistance;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FDestructibleDebrisParameters
{
    float DebrisLifetimeMin;                                                          // 0x0000 (size: 0x4)
    float DebrisLifetimeMax;                                                          // 0x0004 (size: 0x4)
    float DebrisMaxSeparationMin;                                                     // 0x0008 (size: 0x4)
    float DebrisMaxSeparationMax;                                                     // 0x000C (size: 0x4)
    FBox ValidBounds;                                                                 // 0x0010 (size: 0x38)

}; // Size: 0x48

struct FDestructibleDepthParameters
{
    TEnumAsByte<EImpactDamageOverride> ImpactDamageOverride;                          // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FDestructibleParameters
{
    FDestructibleDamageParameters DamageParameters;                                   // 0x0000 (size: 0x1C)
    FDestructibleDebrisParameters DebrisParameters;                                   // 0x0020 (size: 0x48)
    FDestructibleAdvancedParameters AdvancedParameters;                               // 0x0068 (size: 0x10)
    FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths;                       // 0x0078 (size: 0x14)
    TArray<FDestructibleDepthParameters> DepthParameters;                             // 0x0090 (size: 0x10)
    FDestructibleParametersFlag Flags;                                                // 0x00A0 (size: 0x4)

}; // Size: 0xA8

struct FDestructibleParametersFlag
{
    uint8 bAccumulateDamage;                                                          // 0x0000 (size: 0x1)
    uint8 bAssetDefinedSupport;                                                       // 0x0000 (size: 0x1)
    uint8 bWorldSupport;                                                              // 0x0000 (size: 0x1)
    uint8 bDebrisTimeout;                                                             // 0x0000 (size: 0x1)
    uint8 bDebrisMaxSeparation;                                                       // 0x0000 (size: 0x1)
    uint8 bCrumbleSmallestChunks;                                                     // 0x0000 (size: 0x1)
    uint8 bAccurateRaycasts;                                                          // 0x0000 (size: 0x1)
    uint8 bUseValidBounds;                                                            // 0x0000 (size: 0x1)
    uint8 bFormExtendedStructures;                                                    // 0x0001 (size: 0x1)

}; // Size: 0x4

struct FDestructibleSpecialHierarchyDepths
{
    int32 SupportDepth;                                                               // 0x0000 (size: 0x4)
    int32 MinimumFractureDepth;                                                       // 0x0004 (size: 0x4)
    bool bEnableDebris;                                                               // 0x0008 (size: 0x1)
    int32 DebrisDepth;                                                                // 0x000C (size: 0x4)
    int32 EssentialDepth;                                                             // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FFractureMaterial
{
    FVector2D UVScale;                                                                // 0x0000 (size: 0x10)
    FVector2D UVOffset;                                                               // 0x0010 (size: 0x10)
    FVector Tangent;                                                                  // 0x0020 (size: 0x18)
    float UAngle;                                                                     // 0x0038 (size: 0x4)
    int32 InteriorElementIndex;                                                       // 0x003C (size: 0x4)

}; // Size: 0x40

class ADestructibleActor : public AActor
{
    class UDestructibleComponent* DestructibleComponent;                              // 0x0290 (size: 0x8)
    FDestructibleActorOnActorFracture OnActorFracture;                                // 0x0298 (size: 0x10)
    void ActorFractureSignature(const FVector& HitPoint, const FVector& HitDirection);

}; // Size: 0x2A8

class UDestructibleComponent : public USkinnedMeshComponent
{
    uint8 bFractureEffectOverride;                                                    // 0x08A0 (size: 0x1)
    TArray<FFractureEffect> FractureEffects;                                          // 0x08A8 (size: 0x10)
    bool bEnableHardSleeping;                                                         // 0x08B8 (size: 0x1)
    float LargeChunkThreshold;                                                        // 0x08BC (size: 0x4)
    FDestructibleComponentOnComponentFracture OnComponentFracture;                    // 0x08C0 (size: 0x10)
    void ComponentFractureSignature(const FVector& HitPoint, const FVector& HitDirection);

    void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
    class UDestructibleMesh* GetDestructibleMesh();
    void ApplyRadiusDamage(float BaseDamage, const FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    void ApplyDamage(float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength);
}; // Size: 0x940

class UDestructibleFractureSettings : public UObject
{
    int32 CellSiteCount;                                                              // 0x0028 (size: 0x4)
    FFractureMaterial FractureMaterialDesc;                                           // 0x0030 (size: 0x40)
    int32 RandomSeed;                                                                 // 0x0070 (size: 0x4)
    TArray<FVector> VoronoiSites;                                                     // 0x0078 (size: 0x10)
    int32 OriginalSubmeshCount;                                                       // 0x0088 (size: 0x4)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0090 (size: 0x10)
    TArray<FDestructibleChunkParameters> ChunkParameters;                             // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UDestructibleMesh : public USkeletalMesh
{
    FDestructibleParameters DefaultDestructibleParameters;                            // 0x04E0 (size: 0xA8)
    TArray<FFractureEffect> FractureEffects;                                          // 0x0588 (size: 0x10)

}; // Size: 0x598

#endif
