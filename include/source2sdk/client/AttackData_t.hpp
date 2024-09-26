#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x528
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AttackData_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyDescription "When this attack is used, pause weapon reloads for this long"
        float m_flReloadPauseDuration; // 0x8        
        // metadata: MPropertyDescription "Enemies are slowed for this duration when hit by this attack"
        float m_flEnemySlowOnHitDuration; // 0xc        
        // metadata: MPropertyDescription "Enemies are slowed to this speed when hit by this attack"
        float m_flEnemySlowOnHitSpeed; // 0x10        
        // metadata: MPropertyDescription "Is this a Heavy melee attack? Otherwise it's considered light."
        bool bIsHeavyAttack; // 0x14        
        // metadata: MPropertyDescription "When true, this attack can be parried"
        bool m_bCanBeParried; // 0x15        
        [[maybe_unused]] std::uint8_t pad_0x16[0x2]; // 0x16
        // metadata: MPropertyDescription "How long the button needs to be held to trigger this attack"
        float m_flHoldTimeRequired; // 0x18        
        // metadata: MPropertyDescription "How long after triggering until we can perform another melee attack"
        float m_flCooldownOnMiss; // 0x1c        
        float m_flCooldownOnHit; // 0x20        
        // metadata: MPropertyDescription "Half width of the cone at the player"
        float m_flTraceConeHalfWidth; // 0x24        
        // metadata: MPropertyDescription "How much force to apply upward on hit"
        float m_flKnockUpStrength; // 0x28        
        // metadata: MPropertyDescription "Trigger a big screen shake when this attack hits"
        bool m_bApplyScreenShake; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2d[0x3]; // 0x2d
        // metadata: MPropertyDescription "The curve defining move speed bonus/penalty.  This is how we apply the post-movement controller movement slow."
        CPiecewiseCurve m_SpeedBonusCurve; // 0x30        
        // metadata: MPropertyDescription "The curve defining movement controller target speed.  This is what defines the speed boost"
        CPiecewiseCurve m_MovementSpeedCurve; // 0x70        
        // metadata: MPropertyDescription "How much acceleration to apply to use when following the movement speed curve"
        float m_flMovementAcc; // 0xb0        
        // metadata: MPropertyDescription "How long to be in the attacking state once the attack triggers"
        float m_flAttackStateTime; // 0xb4        
        // metadata: MPropertyDescription "Animgraph trigger parameter for this attack"
        CGlobalSymbol m_Trigger; // 0xb8        
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "Sound to play when this attack activates"
        CSoundEventName m_strActivateSound; // 0xc0        
        // metadata: MPropertyDescription "Sound to play if this attack hits"
        CSoundEventName m_strHitSound; // 0xd0        
        CSoundEventName m_strHitHeroSound; // 0xe0        
        CSoundEventName m_strHitDebrisSound; // 0xf0        
        // metadata: MPropertyDescription "Sound to play if this attack misses"
        CSoundEventName m_strMissSound; // 0x100        
        // metadata: MPropertyDescription "Sound to play when starting the movement dash of this attack"
        CSoundEventName m_strDashStart; // 0x110        
        // metadata: MPropertyStartGroup "Visuals"
        // m_MeleeActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle;
        char m_MeleeActivateParticle[0xe0]; // 0x120        
        // m_MeleeSwingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle;
        char m_MeleeSwingParticle[0xe0]; // 0x200        
        // m_MeleeAttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeAttackParticle;
        char m_MeleeAttackParticle[0xe0]; // 0x2e0        
        // m_MeleeImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeImpactParticle;
        char m_MeleeImpactParticle[0xe0]; // 0x3c0        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttackStart; // 0x4a0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AttackData_t, m_flReloadPauseDuration) == 0x8);
    static_assert(offsetof(AttackData_t, m_flEnemySlowOnHitDuration) == 0xc);
    static_assert(offsetof(AttackData_t, m_flEnemySlowOnHitSpeed) == 0x10);
    static_assert(offsetof(AttackData_t, bIsHeavyAttack) == 0x14);
    static_assert(offsetof(AttackData_t, m_bCanBeParried) == 0x15);
    static_assert(offsetof(AttackData_t, m_flHoldTimeRequired) == 0x18);
    static_assert(offsetof(AttackData_t, m_flCooldownOnMiss) == 0x1c);
    static_assert(offsetof(AttackData_t, m_flCooldownOnHit) == 0x20);
    static_assert(offsetof(AttackData_t, m_flTraceConeHalfWidth) == 0x24);
    static_assert(offsetof(AttackData_t, m_flKnockUpStrength) == 0x28);
    static_assert(offsetof(AttackData_t, m_bApplyScreenShake) == 0x2c);
    static_assert(offsetof(AttackData_t, m_SpeedBonusCurve) == 0x30);
    static_assert(offsetof(AttackData_t, m_MovementSpeedCurve) == 0x70);
    static_assert(offsetof(AttackData_t, m_flMovementAcc) == 0xb0);
    static_assert(offsetof(AttackData_t, m_flAttackStateTime) == 0xb4);
    static_assert(offsetof(AttackData_t, m_Trigger) == 0xb8);
    static_assert(offsetof(AttackData_t, m_strActivateSound) == 0xc0);
    static_assert(offsetof(AttackData_t, m_strHitSound) == 0xd0);
    static_assert(offsetof(AttackData_t, m_strHitHeroSound) == 0xe0);
    static_assert(offsetof(AttackData_t, m_strHitDebrisSound) == 0xf0);
    static_assert(offsetof(AttackData_t, m_strMissSound) == 0x100);
    static_assert(offsetof(AttackData_t, m_strDashStart) == 0x110);
    static_assert(offsetof(AttackData_t, m_MeleeActivateParticle) == 0x120);
    static_assert(offsetof(AttackData_t, m_MeleeSwingParticle) == 0x200);
    static_assert(offsetof(AttackData_t, m_MeleeAttackParticle) == 0x2e0);
    static_assert(offsetof(AttackData_t, m_MeleeImpactParticle) == 0x3c0);
    static_assert(offsetof(AttackData_t, m_cameraSequenceAttackStart) == 0x4a0);
    
    static_assert(sizeof(AttackData_t) == 0x528);
};
