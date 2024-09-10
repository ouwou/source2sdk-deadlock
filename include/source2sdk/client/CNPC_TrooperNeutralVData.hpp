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
    // Size: 0x1298
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralVData : public client::CAI_CitadelNPCVData
    {
    public:
        client::ENeutralTrooperType m_eTrooperType; // 0xf30        
        float m_flGoldReward; // 0xf34        
        float m_flGoldRewardBonusPercentPerMinute; // 0xf38        
        bool m_bGiveGoldOnHit; // 0xf3c        
        bool m_bOrbDropper; // 0xf3d        
        bool m_bCapSimultanousAttackers; // 0xf3e        
        [[maybe_unused]] std::uint8_t pad_0xf3f[0x1]; // 0xf3f
        float m_flShieldReactivateDelay; // 0xf40        
        float m_flDyingDuration; // 0xf44        
        // metadata: MPropertyStartGroup "Behavior"
        // metadata: MPropertyFriendlyName "Damaged by Bullets?"
        bool m_bDamagedByBullets; // 0xf48        
        // metadata: MPropertyFriendlyName "Damaged by Melee?"
        bool m_bDamagedByMelee; // 0xf49        
        // metadata: MPropertyFriendlyName "Damaged by Abilities?"
        bool m_bDamagedByAbilities; // 0xf4a        
        // metadata: MPropertyFriendlyName "Fixed Melee Damage?"
        bool m_bFixedMeleeDamage; // 0xf4b        
        [[maybe_unused]] std::uint8_t pad_0xf4c[0x4]; // 0xf4c
        // metadata: MPropertyStartGroup "Shield FX"
        // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
        char m_ShieldParticle[0xe0]; // 0xf50        
        // metadata: MPropertyStartGroup "Retaliation Attack"
        // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
        float m_flRetaliateDamage; // 0x1030        
        float m_flRetaliateCooldown; // 0x1034        
        // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
        // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
        char m_retaliateParticle[0xe0]; // 0x1038        
        // metadata: MPropertyStartGroup "AOE Attack"
        bool m_bHasAOEAttack; // 0x1118        
        [[maybe_unused]] std::uint8_t pad_0x1119[0x3]; // 0x1119
        float m_flAOERadius; // 0x111c        
        float m_flAOEDamage; // 0x1120        
        float m_flAOEAttackCooldown; // 0x1124        
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x1128        
        // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AOEDebuffToApply;
        char m_AOEDebuffToApply[0x10]; // 0x1208        
        CSoundEventName m_AOEInitiateSound; // 0x1218        
        CSoundEventName m_AOESound; // 0x1228        
        float m_AOEDebuffDuration; // 0x1238        
        [[maybe_unused]] std::uint8_t pad_0x123c[0x4]; // 0x123c
        // metadata: MPropertyStartGroup "Body"
        // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomBodyGroup;
        char m_vecRandomBodyGroup[0x18]; // 0x1240        
        // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomSkin;
        char m_vecRandomSkin[0x18]; // 0x1258        
        // metadata: MPropertyStartGroup "Visuals"
        float m_flHullCapsuleRadius; // 0x1270        
        float m_flHullCapsuleHeight; // 0x1274        
        // metadata: MPropertyStartGroup "Idles"
        bool m_bFaceEnemyWhileIdle; // 0x1278        
        [[maybe_unused]] std::uint8_t pad_0x1279[0x7]; // 0x1279
        CSoundEventName m_IdleLoopSound; // 0x1280        
        // metadata: MPropertyStartGroup "Movement"
        client::MoveType_t m_MoveType; // 0x1290        
        [[maybe_unused]] std::uint8_t pad_0x1291[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
    
    static_assert(sizeof(CNPC_TrooperNeutralVData) == 0x1298);
};
