#pragma once
#include "source2sdk/client/ENeutralTrooperType.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1318
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralVData : public server::CAI_CitadelNPCVData
    {
    public:
        client::ENeutralTrooperType m_eTrooperType; // 0xfb0        
        float m_flGoldReward; // 0xfb4        
        float m_flGoldRewardBonusPercentPerMinute; // 0xfb8        
        bool m_bGiveGoldOnHit; // 0xfbc        
        bool m_bOrbDropper; // 0xfbd        
        bool m_bCapSimultanousAttackers; // 0xfbe        
        [[maybe_unused]] std::uint8_t pad_0xfbf[0x1]; // 0xfbf
        float m_flShieldReactivateDelay; // 0xfc0        
        float m_flDyingDuration; // 0xfc4        
        // metadata: MPropertyStartGroup "Behavior"
        // metadata: MPropertyFriendlyName "Damaged by Bullets?"
        bool m_bDamagedByBullets; // 0xfc8        
        // metadata: MPropertyFriendlyName "Damaged by Melee?"
        bool m_bDamagedByMelee; // 0xfc9        
        // metadata: MPropertyFriendlyName "Damaged by Abilities?"
        bool m_bDamagedByAbilities; // 0xfca        
        // metadata: MPropertyFriendlyName "Fixed Melee Damage?"
        bool m_bFixedMeleeDamage; // 0xfcb        
        [[maybe_unused]] std::uint8_t pad_0xfcc[0x4]; // 0xfcc
        // metadata: MPropertyStartGroup "Shield FX"
        // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
        char m_ShieldParticle[0xe0]; // 0xfd0        
        // metadata: MPropertyStartGroup "Retaliation Attack"
        // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
        float m_flRetaliateDamage; // 0x10b0        
        float m_flRetaliateCooldown; // 0x10b4        
        // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
        // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
        char m_retaliateParticle[0xe0]; // 0x10b8        
        // metadata: MPropertyStartGroup "AOE Attack"
        bool m_bHasAOEAttack; // 0x1198        
        [[maybe_unused]] std::uint8_t pad_0x1199[0x3]; // 0x1199
        float m_flAOERadius; // 0x119c        
        float m_flAOEDamage; // 0x11a0        
        float m_flAOEAttackCooldown; // 0x11a4        
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x11a8        
        // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_AOEDebuffToApply;
        char m_AOEDebuffToApply[0x10]; // 0x1288        
        CSoundEventName m_AOEInitiateSound; // 0x1298        
        CSoundEventName m_AOESound; // 0x12a8        
        float m_AOEDebuffDuration; // 0x12b8        
        [[maybe_unused]] std::uint8_t pad_0x12bc[0x4]; // 0x12bc
        // metadata: MPropertyStartGroup "Body"
        // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomBodyGroup;
        char m_vecRandomBodyGroup[0x18]; // 0x12c0        
        // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomSkin;
        char m_vecRandomSkin[0x18]; // 0x12d8        
        // metadata: MPropertyStartGroup "Visuals"
        float m_flHullCapsuleRadius; // 0x12f0        
        float m_flHullCapsuleHeight; // 0x12f4        
        // metadata: MPropertyStartGroup "Idles"
        bool m_bFaceEnemyWhileIdle; // 0x12f8        
        [[maybe_unused]] std::uint8_t pad_0x12f9[0x7]; // 0x12f9
        CSoundEventName m_IdleLoopSound; // 0x1300        
        // metadata: MPropertyStartGroup "Movement"
        client::MoveType_t m_MoveType; // 0x1310        
        [[maybe_unused]] std::uint8_t pad_0x1311[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralVData) == 0x1318);
};
