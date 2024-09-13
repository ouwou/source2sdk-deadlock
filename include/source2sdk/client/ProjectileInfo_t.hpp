#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/ProjectileBehaviorFlag_t.hpp"
#include "source2sdk/client/ProjectileShape_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x380
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ProjectileInfo_t
    {
    public:
        client::ProjectileBehaviorFlag_t m_nBehaviors; // 0x0        
        // metadata: MPropertyStartGroup "Physics"
        float m_flGravityScale; // 0x4        
        float m_flFriction; // 0x8        
        float m_flElasticity; // 0xc        
        float m_flSpeed; // 0x10        
        float m_flUpSpeed; // 0x14        
        float m_flMaxLinearRange; // 0x18        
        float m_flVerticalAimBias; // 0x1c        
        client::ProjectileShape_t m_eProjectileShape; // 0x20        
        // metadata: MPropertySuppressExpr "m_eProjectileShape != Sphere"
        float m_flTriggerRadius; // 0x24        
        // metadata: MPropertySuppressExpr "m_eProjectileShape != Sphere"
        float m_flPhysicsRadius; // 0x28        
        // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
        Vector m_vecCapsulePhysicsCenter1; // 0x2c        
        // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
        Vector m_vecCapsulePhysicsCenter2; // 0x38        
        // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
        float m_flCapsulePhysicsRadius; // 0x44        
        // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
        Vector m_vecCapsuleTriggerCenter1; // 0x48        
        // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
        Vector m_vecCapsuleTriggerCenter2; // 0x54        
        // metadata: MPropertySuppressExpr "m_eProjectileShape != Capsule"
        float m_flCapsuleTriggerRadius; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4]; // 0x64
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyFriendlyName "Trail Particle"
        // m_particle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_particle;
        char m_particle[0xe0]; // 0x68        
        bool m_bHideWarningParticle; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x149[0x7]; // 0x149
        // metadata: MPropertyFriendlyName "Warning Particle"
        // metadata: MPropertySuppressExpr "m_bHideWarningParticle == true"
        // m_warningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_warningParticle;
        char m_warningParticle[0xe0]; // 0x150        
        // metadata: MPropertyFriendlyName "Projectile Model"
        // m_customModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_customModel;
        char m_customModel[0xe0]; // 0x230        
        float m_flProjectileModelScale; // 0x310        
        [[maybe_unused]] std::uint8_t pad_0x314[0x4]; // 0x314
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_HitSound; // 0x318        
        CSoundEventName m_DetonateSound; // 0x328        
        CSoundEventName m_LoopingSound; // 0x338        
        CSoundEventName m_WarningSound; // 0x348        
        // metadata: MPropertyStartGroup "Tracking"
        float m_flTrackingDampingCoefficient; // 0x358        
        float m_flTrackingDuration; // 0x35c        
        float m_flTrackingStartTime; // 0x360        
        float m_flTrackingEndTime; // 0x364        
        float m_flTrackingStopDuration; // 0x368        
        [[maybe_unused]] std::uint8_t pad_0x36c[0x4]; // 0x36c
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AutoProjectileModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_AutoProjectileModifier;
        char m_AutoProjectileModifier[0x10]; // 0x370        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ProjectileInfo_t, m_nBehaviors) == 0x0);
    static_assert(offsetof(ProjectileInfo_t, m_flGravityScale) == 0x4);
    static_assert(offsetof(ProjectileInfo_t, m_flFriction) == 0x8);
    static_assert(offsetof(ProjectileInfo_t, m_flElasticity) == 0xc);
    static_assert(offsetof(ProjectileInfo_t, m_flSpeed) == 0x10);
    static_assert(offsetof(ProjectileInfo_t, m_flUpSpeed) == 0x14);
    static_assert(offsetof(ProjectileInfo_t, m_flMaxLinearRange) == 0x18);
    static_assert(offsetof(ProjectileInfo_t, m_flVerticalAimBias) == 0x1c);
    static_assert(offsetof(ProjectileInfo_t, m_eProjectileShape) == 0x20);
    static_assert(offsetof(ProjectileInfo_t, m_flTriggerRadius) == 0x24);
    static_assert(offsetof(ProjectileInfo_t, m_flPhysicsRadius) == 0x28);
    static_assert(offsetof(ProjectileInfo_t, m_vecCapsulePhysicsCenter1) == 0x2c);
    static_assert(offsetof(ProjectileInfo_t, m_vecCapsulePhysicsCenter2) == 0x38);
    static_assert(offsetof(ProjectileInfo_t, m_flCapsulePhysicsRadius) == 0x44);
    static_assert(offsetof(ProjectileInfo_t, m_vecCapsuleTriggerCenter1) == 0x48);
    static_assert(offsetof(ProjectileInfo_t, m_vecCapsuleTriggerCenter2) == 0x54);
    static_assert(offsetof(ProjectileInfo_t, m_flCapsuleTriggerRadius) == 0x60);
    static_assert(offsetof(ProjectileInfo_t, m_particle) == 0x68);
    static_assert(offsetof(ProjectileInfo_t, m_bHideWarningParticle) == 0x148);
    static_assert(offsetof(ProjectileInfo_t, m_warningParticle) == 0x150);
    static_assert(offsetof(ProjectileInfo_t, m_customModel) == 0x230);
    static_assert(offsetof(ProjectileInfo_t, m_flProjectileModelScale) == 0x310);
    static_assert(offsetof(ProjectileInfo_t, m_HitSound) == 0x318);
    static_assert(offsetof(ProjectileInfo_t, m_DetonateSound) == 0x328);
    static_assert(offsetof(ProjectileInfo_t, m_LoopingSound) == 0x338);
    static_assert(offsetof(ProjectileInfo_t, m_WarningSound) == 0x348);
    static_assert(offsetof(ProjectileInfo_t, m_flTrackingDampingCoefficient) == 0x358);
    static_assert(offsetof(ProjectileInfo_t, m_flTrackingDuration) == 0x35c);
    static_assert(offsetof(ProjectileInfo_t, m_flTrackingStartTime) == 0x360);
    static_assert(offsetof(ProjectileInfo_t, m_flTrackingEndTime) == 0x364);
    static_assert(offsetof(ProjectileInfo_t, m_flTrackingStopDuration) == 0x368);
    static_assert(offsetof(ProjectileInfo_t, m_AutoProjectileModifier) == 0x370);
    
    static_assert(sizeof(ProjectileInfo_t) == 0x380);
};
