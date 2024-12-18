#pragma once
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ENeutralTrooperType.hpp"
#include "source2sdk/client/MoveType_t.hpp"
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
    // Standard-layout class: false
    // Size: 0x1450
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralVData : public client::CAI_CitadelNPCVData
    {
    public:
        client::ENeutralTrooperType m_eTrooperType; // 0x10e8        
        float m_flGoldReward; // 0x10ec        
        float m_flGoldRewardBonusPercentPerMinute; // 0x10f0        
        bool m_bGiveGoldOnHit; // 0x10f4        
        bool m_bOrbDropper; // 0x10f5        
        bool m_bCapSimultanousAttackers; // 0x10f6        
        [[maybe_unused]] std::uint8_t pad_0x10f7[0x1]; // 0x10f7
        float m_flShieldReactivateDelay; // 0x10f8        
        float m_flDyingDuration; // 0x10fc        
        // metadata: MPropertyStartGroup "Behavior"
        // metadata: MPropertyFriendlyName "Damaged by Bullets?"
        bool m_bDamagedByBullets; // 0x1100        
        // metadata: MPropertyFriendlyName "Damaged by Melee?"
        bool m_bDamagedByMelee; // 0x1101        
        // metadata: MPropertyFriendlyName "Damaged by Abilities?"
        bool m_bDamagedByAbilities; // 0x1102        
        // metadata: MPropertyFriendlyName "Fixed Melee Damage?"
        bool m_bFixedMeleeDamage; // 0x1103        
        [[maybe_unused]] std::uint8_t pad_0x1104[0x4]; // 0x1104
        // metadata: MPropertyStartGroup "Shield FX"
        // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
        char m_ShieldParticle[0xe0]; // 0x1108        
        // metadata: MPropertyStartGroup "Retaliation Attack"
        // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
        float m_flRetaliateDamage; // 0x11e8        
        float m_flRetaliateCooldown; // 0x11ec        
        // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
        // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
        char m_retaliateParticle[0xe0]; // 0x11f0        
        // metadata: MPropertyStartGroup "AOE Attack"
        bool m_bHasAOEAttack; // 0x12d0        
        [[maybe_unused]] std::uint8_t pad_0x12d1[0x3]; // 0x12d1
        float m_flAOERadius; // 0x12d4        
        float m_flAOEDamage; // 0x12d8        
        float m_flAOEAttackCooldown; // 0x12dc        
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x12e0        
        // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AOEDebuffToApply;
        char m_AOEDebuffToApply[0x10]; // 0x13c0        
        CSoundEventName m_AOEInitiateSound; // 0x13d0        
        CSoundEventName m_AOESound; // 0x13e0        
        float m_AOEDebuffDuration; // 0x13f0        
        [[maybe_unused]] std::uint8_t pad_0x13f4[0x4]; // 0x13f4
        // metadata: MPropertyStartGroup "Body"
        // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomBodyGroup;
        char m_vecRandomBodyGroup[0x18]; // 0x13f8        
        // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomSkin;
        char m_vecRandomSkin[0x18]; // 0x1410        
        // metadata: MPropertyStartGroup "Visuals"
        float m_flHullCapsuleRadius; // 0x1428        
        float m_flHullCapsuleHeight; // 0x142c        
        // metadata: MPropertyStartGroup "Idles"
        bool m_bFaceEnemyWhileIdle; // 0x1430        
        [[maybe_unused]] std::uint8_t pad_0x1431[0x7]; // 0x1431
        CSoundEventName m_IdleLoopSound; // 0x1438        
        // metadata: MPropertyStartGroup "Movement"
        client::MoveType_t m_MoveType; // 0x1448        
        [[maybe_unused]] std::uint8_t pad_0x1449[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralVData) == 0x1450);
};
