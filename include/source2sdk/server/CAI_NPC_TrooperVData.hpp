#pragma once
#include "source2sdk/client/TrooperType_t.hpp"
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
    // Size: 0x17c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_NPC_TrooperVData : public server::CAI_CitadelNPCVData
    {
    public:
        client::TrooperType_t m_TrooperType; // 0x10e8        
        float m_flTrooperDamageResistPct; // 0x10ec        
        float m_flT1BossDamageResistPct; // 0x10f0        
        float m_flT2BossDamageResistPct; // 0x10f4        
        float m_flBarrackGuardianDamageResistPct; // 0x10f8        
        float m_flNearDeathDuration; // 0x10fc        
        float m_flFlySpeed; // 0x1100        
        float m_flFlyHeight; // 0x1104        
        float m_flMeleeDamage; // 0x1108        
        float m_flMeleeDuration; // 0x110c        
        float m_flMeleeChargeRange; // 0x1110        
        float m_flAttackT1BossMaxRange; // 0x1114        
        float m_flAttackTrooperMaxRange; // 0x1118        
        float m_flShieldDamageResistPct; // 0x111c        
        float m_flHealthBarOffsetDucking; // 0x1120        
        // metadata: MPropertyStartGroup "Trooper DPS"
        // metadata: MPropertyDescription "Trooper vs Trooper DPS"
        float m_flTrooperDPS; // 0x1124        
        // metadata: MPropertyDescription "Trooper vs Player DPS"
        float m_flPlayerDPS; // 0x1128        
        // metadata: MPropertyDescription "Trooper vs T1 Guardian Base DPS "
        float m_flT1BossDPS; // 0x112c        
        float m_flT1BossDPSBaseResist; // 0x1130        
        float m_flT1BossDPSMaxResist; // 0x1134        
        float m_flT1BossDPSMaxResistTimeInSeconds; // 0x1138        
        // metadata: MPropertyDescription "Trooper vs T2 Guardian Base DPS "
        float m_flT2BossDPS; // 0x113c        
        float m_flT2BossDPSBaseResist; // 0x1140        
        float m_flT2BossDPSMaxResist; // 0x1144        
        float m_flT2BossDPSMaxResistTimeInSeconds; // 0x1148        
        // metadata: MPropertyDescription "Trooper vs T3 Guardian DPS"
        float m_flT3BossDPS; // 0x114c        
        // metadata: MPropertyDescription "Trooper vs Barrack Guardian DPS"
        float m_flBarrackBossDPS; // 0x1150        
        // metadata: MPropertyDescription "Trooper vs Generator DPS"
        float m_flGeneratorBossDPS; // 0x1154        
        // metadata: MPropertyStartGroup "Visuals"
        // m_BossAttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BossAttackParticle;
        char m_BossAttackParticle[0xe0]; // 0x1158        
        // m_LastHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LastHitParticle;
        char m_LastHitParticle[0xe0]; // 0x1238        
        // m_TargetingLaserParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingLaserParticle;
        char m_TargetingLaserParticle[0xe0]; // 0x1318        
        // m_TargetingEyeFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingEyeFlashParticle;
        char m_TargetingEyeFlashParticle[0xe0]; // 0x13f8        
        // m_sZiplineContainerBreakFromDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromDamageParticle;
        char m_sZiplineContainerBreakFromDamageParticle[0xe0]; // 0x14d8        
        // m_sZiplineContainerBreakFromLandingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromLandingParticle;
        char m_sZiplineContainerBreakFromLandingParticle[0xe0]; // 0x15b8        
        // m_MedicHealActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MedicHealActiveParticle;
        char m_MedicHealActiveParticle[0xe0]; // 0x1698        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sPlayerLastHitSound; // 0x1778        
        CSoundEventName m_sCelebrationSound; // 0x1788        
        CSoundEventName m_sZiplineContainerBreakSound; // 0x1798        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_NearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_NearDeathModifier;
        char m_NearDeathModifier[0x10]; // 0x17a8        
        // m_TrooperBossInvulnModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_TrooperBossInvulnModifier;
        char m_TrooperBossInvulnModifier[0x10]; // 0x17b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_NPC_TrooperVData because it is not a standard-layout class
    static_assert(sizeof(CAI_NPC_TrooperVData) == 0x17c8);
};
