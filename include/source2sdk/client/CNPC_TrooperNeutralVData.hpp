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
    // Size: 0x12c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralVData : public client::CAI_CitadelNPCVData
    {
    public:
        client::ENeutralTrooperType m_eTrooperType; // 0xf58        
        float m_flGoldReward; // 0xf5c        
        float m_flGoldRewardBonusPercentPerMinute; // 0xf60        
        bool m_bGiveGoldOnHit; // 0xf64        
        bool m_bOrbDropper; // 0xf65        
        bool m_bCapSimultanousAttackers; // 0xf66        
        [[maybe_unused]] std::uint8_t pad_0xf67[0x1]; // 0xf67
        float m_flShieldReactivateDelay; // 0xf68        
        float m_flDyingDuration; // 0xf6c        
        // metadata: MPropertyStartGroup "Behavior"
        // metadata: MPropertyFriendlyName "Damaged by Bullets?"
        bool m_bDamagedByBullets; // 0xf70        
        // metadata: MPropertyFriendlyName "Damaged by Melee?"
        bool m_bDamagedByMelee; // 0xf71        
        // metadata: MPropertyFriendlyName "Damaged by Abilities?"
        bool m_bDamagedByAbilities; // 0xf72        
        // metadata: MPropertyFriendlyName "Fixed Melee Damage?"
        bool m_bFixedMeleeDamage; // 0xf73        
        [[maybe_unused]] std::uint8_t pad_0xf74[0x4]; // 0xf74
        // metadata: MPropertyStartGroup "Shield FX"
        // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
        char m_ShieldParticle[0xe0]; // 0xf78        
        // metadata: MPropertyStartGroup "Retaliation Attack"
        // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
        float m_flRetaliateDamage; // 0x1058        
        float m_flRetaliateCooldown; // 0x105c        
        // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
        // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
        char m_retaliateParticle[0xe0]; // 0x1060        
        // metadata: MPropertyStartGroup "AOE Attack"
        bool m_bHasAOEAttack; // 0x1140        
        [[maybe_unused]] std::uint8_t pad_0x1141[0x3]; // 0x1141
        float m_flAOERadius; // 0x1144        
        float m_flAOEDamage; // 0x1148        
        float m_flAOEAttackCooldown; // 0x114c        
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x1150        
        // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AOEDebuffToApply;
        char m_AOEDebuffToApply[0x10]; // 0x1230        
        CSoundEventName m_AOEInitiateSound; // 0x1240        
        CSoundEventName m_AOESound; // 0x1250        
        float m_AOEDebuffDuration; // 0x1260        
        [[maybe_unused]] std::uint8_t pad_0x1264[0x4]; // 0x1264
        // metadata: MPropertyStartGroup "Body"
        // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomBodyGroup;
        char m_vecRandomBodyGroup[0x18]; // 0x1268        
        // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomSkin;
        char m_vecRandomSkin[0x18]; // 0x1280        
        // metadata: MPropertyStartGroup "Visuals"
        float m_flHullCapsuleRadius; // 0x1298        
        float m_flHullCapsuleHeight; // 0x129c        
        // metadata: MPropertyStartGroup "Idles"
        bool m_bFaceEnemyWhileIdle; // 0x12a0        
        [[maybe_unused]] std::uint8_t pad_0x12a1[0x7]; // 0x12a1
        CSoundEventName m_IdleLoopSound; // 0x12a8        
        // metadata: MPropertyStartGroup "Movement"
        client::MoveType_t m_MoveType; // 0x12b8        
        [[maybe_unused]] std::uint8_t pad_0x12b9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralVData) == 0x12c0);
};
