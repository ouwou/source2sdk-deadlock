#pragma once
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/TrooperType_t.hpp"
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
    // Size: 0x1658
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_NPC_TrooperVData : public client::CAI_CitadelNPCVData
    {
    public:
        client::TrooperType_t m_TrooperType; // 0xf78        
        float m_flTrooperDamageResistPct; // 0xf7c        
        float m_flT1BossDamageResistPct; // 0xf80        
        float m_flT2BossDamageResistPct; // 0xf84        
        float m_flBarrackGuardianDamageResistPct; // 0xf88        
        float m_flNearDeathDuration; // 0xf8c        
        float m_flFlySpeed; // 0xf90        
        float m_flFlyHeight; // 0xf94        
        float m_flMeleeDamage; // 0xf98        
        float m_flMeleeDuration; // 0xf9c        
        float m_flMeleeChargeRange; // 0xfa0        
        float m_flAttackT1BossMaxRange; // 0xfa4        
        float m_flAttackTrooperMaxRange; // 0xfa8        
        float m_flShieldDamageResistPct; // 0xfac        
        float m_flHealthBarOffsetDucking; // 0xfb0        
        // metadata: MPropertyStartGroup "Trooper DPS"
        // metadata: MPropertyDescription "Trooper vs Trooper DPS"
        float m_flTrooperDPS; // 0xfb4        
        // metadata: MPropertyDescription "Trooper vs Player DPS"
        float m_flPlayerDPS; // 0xfb8        
        // metadata: MPropertyDescription "Trooper vs T1 Guardian Base DPS "
        float m_flT1BossDPS; // 0xfbc        
        float m_flT1BossDPSBaseResist; // 0xfc0        
        float m_flT1BossDPSMaxResist; // 0xfc4        
        float m_flT1BossDPSMaxResistTimeInSeconds; // 0xfc8        
        // metadata: MPropertyDescription "Trooper vs T2 Guardian Base DPS "
        float m_flT2BossDPS; // 0xfcc        
        float m_flT2BossDPSBaseResist; // 0xfd0        
        float m_flT2BossDPSMaxResist; // 0xfd4        
        float m_flT2BossDPSMaxResistTimeInSeconds; // 0xfd8        
        // metadata: MPropertyDescription "Trooper vs T3 Guardian DPS"
        float m_flT3BossDPS; // 0xfdc        
        // metadata: MPropertyDescription "Trooper vs Barrack Guardian DPS"
        float m_flBarrackBossDPS; // 0xfe0        
        // metadata: MPropertyDescription "Trooper vs Generator DPS"
        float m_flGeneratorBossDPS; // 0xfe4        
        // metadata: MPropertyStartGroup "Visuals"
        // m_BossAttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BossAttackParticle;
        char m_BossAttackParticle[0xe0]; // 0xfe8        
        // m_LastHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LastHitParticle;
        char m_LastHitParticle[0xe0]; // 0x10c8        
        // m_TargetingLaserParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingLaserParticle;
        char m_TargetingLaserParticle[0xe0]; // 0x11a8        
        // m_TargetingEyeFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingEyeFlashParticle;
        char m_TargetingEyeFlashParticle[0xe0]; // 0x1288        
        // m_sZiplineContainerBreakFromDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromDamageParticle;
        char m_sZiplineContainerBreakFromDamageParticle[0xe0]; // 0x1368        
        // m_sZiplineContainerBreakFromLandingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromLandingParticle;
        char m_sZiplineContainerBreakFromLandingParticle[0xe0]; // 0x1448        
        // m_MedicHealActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MedicHealActiveParticle;
        char m_MedicHealActiveParticle[0xe0]; // 0x1528        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sPlayerLastHitSound; // 0x1608        
        CSoundEventName m_sCelebrationSound; // 0x1618        
        CSoundEventName m_sZiplineContainerBreakSound; // 0x1628        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_NearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_NearDeathModifier;
        char m_NearDeathModifier[0x10]; // 0x1638        
        // m_TrooperBossInvulnModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TrooperBossInvulnModifier;
        char m_TrooperBossInvulnModifier[0x10]; // 0x1648        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_NPC_TrooperVData because it is not a standard-layout class
    static_assert(sizeof(CAI_NPC_TrooperVData) == 0x1658);
};
