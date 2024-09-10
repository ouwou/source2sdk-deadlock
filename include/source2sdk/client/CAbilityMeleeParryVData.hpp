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
    // Size: 0x1660
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityMeleeParryVData : public client::CitadelAbilityVData
    {
    public:
        float m_flWhiffDuration; // 0x14f0        
        float m_flMovementRestrictionTime; // 0x14f4        
        float m_flActiveTime; // 0x14f8        
        float m_flParryEndVisualTime; // 0x14fc        
        float m_flSuccessActiveTime; // 0x1500        
        float m_flBossVictimNoMeleeTime; // 0x1504        
        float m_flBossVictimCalmTime; // 0x1508        
        [[maybe_unused]] std::uint8_t pad_0x150c[0x4]; // 0x150c
        // metadata: MPropertyStartGroup "Visuals"
        // m_SuccessfulParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle;
        char m_SuccessfulParryParticle[0xe0]; // 0x1510        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSuccessfulParrySound; // 0x15f0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ParryActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryActiveModifier;
        char m_ParryActiveModifier[0x10]; // 0x1600        
        // m_ParryVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryVictimModifier;
        char m_ParryVictimModifier[0x10]; // 0x1610        
        // m_ParryCooldownModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryCooldownModifier;
        char m_ParryCooldownModifier[0x10]; // 0x1620        
        // m_ParryEndVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryEndVisualModifier;
        char m_ParryEndVisualModifier[0x10]; // 0x1630        
        // m_ParryBossVictimNoMeleeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimNoMeleeModifier;
        char m_ParryBossVictimNoMeleeModifier[0x10]; // 0x1640        
        // m_ParryBossVictimCalmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimCalmModifier;
        char m_ParryBossVictimCalmModifier[0x10]; // 0x1650        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityMeleeParryVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityMeleeParryVData) == 0x1660);
};
