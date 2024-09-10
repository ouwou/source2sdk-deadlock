#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 15
    // Alignment: 4
    // Size: 0x4
    enum class ProjectileBehaviorFlag_t : std::uint32_t
    {
        // MPropertySuppressEnumerator
        PBF_None = 0x0,
        // MPropertyFriendlyName "Bounce off walls"
        PBF_BounceOffWall = 0x1,
        // MPropertyFriendlyName "Stick to valid targets"
        PBF_StickToTarget = 0x2,
        // MPropertyFriendlyName "Stick to world"
        PBF_StickToWorld = 0x4,
        // MPropertyFriendlyName "Don't turn towards velocity"
        PBF_NotTurnTowardVelocity = 0x8,
        // MPropertyFriendlyName "Detonate on hit valid target"
        PBF_DetonateOnHitTarget = 0x10,
        // MPropertyFriendlyName "Detonate on hit world"
        PBF_DetonateOnHitWorld = 0x20,
        // MPropertyFriendlyName "Detonate on hit ignore arming time"
        PBF_DetonateOnHitIgnoreArmingTime = 0x40,
        // MPropertyFriendlyName "Start detonate time on hit target"
        PBF_StartDetonateTimeOnHitTarget = 0x80,
        // MPropertyFriendlyName "Start detonate time on hit world"
        PBF_StartDetonateTimeOnHitWorld = 0x100,
        // MPropertyFriendlyName "Disable touch on hit"
        PBF_DisableTouchOnHit = 0x200,
        // MPropertyFriendlyName "Don't remove on touching tracked target"
        // MPropertyDescription "When set, tracked projectiles won't get removed automatically when touchign their target.  ***YOU MUST MANUALLY REMOVE THEM***"
        PBF_DisableRemoveOnTouchTrackedTarget = 0x400,
        // MPropertyFriendlyName "Disable trigger projectile impact behavior"
        PBF_DisableTriggerProjectileImpactBehavior = 0x800,
        // MPropertyFriendlyName "Detonate on lifetime expire"
        PBF_DetonateOnLifetimeExpire = 0x1000,
        // MPropertyFriendlyName "Validate Target Line of Sight"
        // MPropertyDescription "When set, validates the projectile can 'see' the target. Mitigates trigger volumes from hitting targets that are behind cover from the attack position"
        PBF_ValidateTargetLineOfSight = 0x2000,
    };
};
