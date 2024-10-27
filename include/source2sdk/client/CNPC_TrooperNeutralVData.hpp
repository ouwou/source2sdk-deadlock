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
    // Size: 0x12e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralVData : public client::CAI_CitadelNPCVData
    {
    public:
        client::ENeutralTrooperType m_eTrooperType; // 0xf78        
        float m_flGoldReward; // 0xf7c        
        float m_flGoldRewardBonusPercentPerMinute; // 0xf80        
        bool m_bGiveGoldOnHit; // 0xf84        
        bool m_bOrbDropper; // 0xf85        
        bool m_bCapSimultanousAttackers; // 0xf86        
        [[maybe_unused]] std::uint8_t pad_0xf87[0x1]; // 0xf87
        float m_flShieldReactivateDelay; // 0xf88        
        float m_flDyingDuration; // 0xf8c        
        // metadata: MPropertyStartGroup "Behavior"
        // metadata: MPropertyFriendlyName "Damaged by Bullets?"
        bool m_bDamagedByBullets; // 0xf90        
        // metadata: MPropertyFriendlyName "Damaged by Melee?"
        bool m_bDamagedByMelee; // 0xf91        
        // metadata: MPropertyFriendlyName "Damaged by Abilities?"
        bool m_bDamagedByAbilities; // 0xf92        
        // metadata: MPropertyFriendlyName "Fixed Melee Damage?"
        bool m_bFixedMeleeDamage; // 0xf93        
        [[maybe_unused]] std::uint8_t pad_0xf94[0x4]; // 0xf94
        // metadata: MPropertyStartGroup "Shield FX"
        // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
        char m_ShieldParticle[0xe0]; // 0xf98        
        // metadata: MPropertyStartGroup "Retaliation Attack"
        // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
        float m_flRetaliateDamage; // 0x1078        
        float m_flRetaliateCooldown; // 0x107c        
        // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
        // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
        char m_retaliateParticle[0xe0]; // 0x1080        
        // metadata: MPropertyStartGroup "AOE Attack"
        bool m_bHasAOEAttack; // 0x1160        
        [[maybe_unused]] std::uint8_t pad_0x1161[0x3]; // 0x1161
        float m_flAOERadius; // 0x1164        
        float m_flAOEDamage; // 0x1168        
        float m_flAOEAttackCooldown; // 0x116c        
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x1170        
        // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AOEDebuffToApply;
        char m_AOEDebuffToApply[0x10]; // 0x1250        
        CSoundEventName m_AOEInitiateSound; // 0x1260        
        CSoundEventName m_AOESound; // 0x1270        
        float m_AOEDebuffDuration; // 0x1280        
        [[maybe_unused]] std::uint8_t pad_0x1284[0x4]; // 0x1284
        // metadata: MPropertyStartGroup "Body"
        // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomBodyGroup;
        char m_vecRandomBodyGroup[0x18]; // 0x1288        
        // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomSkin;
        char m_vecRandomSkin[0x18]; // 0x12a0        
        // metadata: MPropertyStartGroup "Visuals"
        float m_flHullCapsuleRadius; // 0x12b8        
        float m_flHullCapsuleHeight; // 0x12bc        
        // metadata: MPropertyStartGroup "Idles"
        bool m_bFaceEnemyWhileIdle; // 0x12c0        
        [[maybe_unused]] std::uint8_t pad_0x12c1[0x7]; // 0x12c1
        CSoundEventName m_IdleLoopSound; // 0x12c8        
        // metadata: MPropertyStartGroup "Movement"
        client::MoveType_t m_MoveType; // 0x12d8        
        [[maybe_unused]] std::uint8_t pad_0x12d9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralVData) == 0x12e0);
};
