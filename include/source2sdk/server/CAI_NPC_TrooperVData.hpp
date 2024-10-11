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
    // Size: 0x1630
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_NPC_TrooperVData : public server::CAI_CitadelNPCVData
    {
    public:
        client::TrooperType_t m_TrooperType; // 0xf60        
        float m_flTrooperDamageResistPct; // 0xf64        
        float m_flT1BossDamageResistPct; // 0xf68        
        float m_flT2BossDamageResistPct; // 0xf6c        
        float m_flBarrackGuardianDamageResistPct; // 0xf70        
        float m_flNearDeathDuration; // 0xf74        
        float m_flFlySpeed; // 0xf78        
        float m_flFlyHeight; // 0xf7c        
        float m_flMeleeDamage; // 0xf80        
        float m_flMeleeDuration; // 0xf84        
        float m_flMeleeChargeRange; // 0xf88        
        float m_flAttackT1BossMaxRange; // 0xf8c        
        float m_flAttackTrooperMaxRange; // 0xf90        
        float m_flShieldDamageResistPct; // 0xf94        
        float m_flHealthBarOffsetDucking; // 0xf98        
        // metadata: MPropertyStartGroup "Trooper DPS"
        // metadata: MPropertyDescription "Trooper vs Trooper DPS"
        float m_flTrooperDPS; // 0xf9c        
        // metadata: MPropertyDescription "Trooper vs Player DPS"
        float m_flPlayerDPS; // 0xfa0        
        // metadata: MPropertyDescription "Trooper vs T1 Guardian Base DPS "
        float m_flT1BossDPSBase; // 0xfa4        
        float m_flT1BossDPSMax; // 0xfa8        
        // metadata: MPropertyDescription "Trooper vs T1 Guardian Max Time"
        float m_flT1BossDPSMaxTimeInSeconds; // 0xfac        
        // metadata: MPropertyDescription "Trooper vs T2 Guardian DPS"
        float m_flT2BossDPS; // 0xfb0        
        // metadata: MPropertyDescription "Trooper vs T3 Guardian DPS"
        float m_flT3BossDPS; // 0xfb4        
        // metadata: MPropertyDescription "Trooper vs Barrack Guardian DPS"
        float m_flBarrackBossDPS; // 0xfb8        
        // metadata: MPropertyDescription "Trooper vs Generator DPS"
        float m_flGeneratorBossDPS; // 0xfbc        
        // metadata: MPropertyStartGroup "Visuals"
        // m_BossAttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BossAttackParticle;
        char m_BossAttackParticle[0xe0]; // 0xfc0        
        // m_LastHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LastHitParticle;
        char m_LastHitParticle[0xe0]; // 0x10a0        
        // m_TargetingLaserParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingLaserParticle;
        char m_TargetingLaserParticle[0xe0]; // 0x1180        
        // m_TargetingEyeFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingEyeFlashParticle;
        char m_TargetingEyeFlashParticle[0xe0]; // 0x1260        
        // m_sZiplineContainerBreakFromDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromDamageParticle;
        char m_sZiplineContainerBreakFromDamageParticle[0xe0]; // 0x1340        
        // m_sZiplineContainerBreakFromLandingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromLandingParticle;
        char m_sZiplineContainerBreakFromLandingParticle[0xe0]; // 0x1420        
        // m_MedicHealActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MedicHealActiveParticle;
        char m_MedicHealActiveParticle[0xe0]; // 0x1500        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sPlayerLastHitSound; // 0x15e0        
        CSoundEventName m_sCelebrationSound; // 0x15f0        
        CSoundEventName m_sZiplineContainerBreakSound; // 0x1600        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_NearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_NearDeathModifier;
        char m_NearDeathModifier[0x10]; // 0x1610        
        // m_TrooperBossInvulnModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_TrooperBossInvulnModifier;
        char m_TrooperBossInvulnModifier[0x10]; // 0x1620        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_NPC_TrooperVData because it is not a standard-layout class
    static_assert(sizeof(CAI_NPC_TrooperVData) == 0x1630);
};
