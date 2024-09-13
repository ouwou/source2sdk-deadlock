#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1698
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityMeleeParryVData : public client::CitadelAbilityVData
    {
    public:
        float m_flWhiffDuration; // 0x1528        
        float m_flMovementRestrictionTime; // 0x152c        
        float m_flActiveTime; // 0x1530        
        float m_flParryEndVisualTime; // 0x1534        
        float m_flSuccessActiveTime; // 0x1538        
        float m_flBossVictimNoMeleeTime; // 0x153c        
        float m_flBossVictimCalmTime; // 0x1540        
        [[maybe_unused]] std::uint8_t pad_0x1544[0x4]; // 0x1544
        // metadata: MPropertyStartGroup "Visuals"
        // m_SuccessfulParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle;
        char m_SuccessfulParryParticle[0xe0]; // 0x1548        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSuccessfulParrySound; // 0x1628        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ParryActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryActiveModifier;
        char m_ParryActiveModifier[0x10]; // 0x1638        
        // m_ParryVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryVictimModifier;
        char m_ParryVictimModifier[0x10]; // 0x1648        
        // m_ParryCooldownModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryCooldownModifier;
        char m_ParryCooldownModifier[0x10]; // 0x1658        
        // m_ParryEndVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryEndVisualModifier;
        char m_ParryEndVisualModifier[0x10]; // 0x1668        
        // m_ParryBossVictimNoMeleeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimNoMeleeModifier;
        char m_ParryBossVictimNoMeleeModifier[0x10]; // 0x1678        
        // m_ParryBossVictimCalmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimCalmModifier;
        char m_ParryBossVictimCalmModifier[0x10]; // 0x1688        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityMeleeParryVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityMeleeParryVData) == 0x1698);
};
