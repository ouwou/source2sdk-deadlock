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
    // Size: 0x16c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityMeleeParryVData : public client::CitadelAbilityVData
    {
    public:
        float m_flWhiffDuration; // 0x1550        
        float m_flMovementRestrictionTime; // 0x1554        
        float m_flActiveTime; // 0x1558        
        float m_flParryEndVisualTime; // 0x155c        
        float m_flSuccessActiveTime; // 0x1560        
        float m_flBossVictimNoMeleeTime; // 0x1564        
        float m_flBossVictimCalmTime; // 0x1568        
        [[maybe_unused]] std::uint8_t pad_0x156c[0x4]; // 0x156c
        // metadata: MPropertyStartGroup "Visuals"
        // m_SuccessfulParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle;
        char m_SuccessfulParryParticle[0xe0]; // 0x1570        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSuccessfulParrySound; // 0x1650        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ParryActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryActiveModifier;
        char m_ParryActiveModifier[0x10]; // 0x1660        
        // m_ParryVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryVictimModifier;
        char m_ParryVictimModifier[0x10]; // 0x1670        
        // m_ParryCooldownModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryCooldownModifier;
        char m_ParryCooldownModifier[0x10]; // 0x1680        
        // m_ParryEndVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryEndVisualModifier;
        char m_ParryEndVisualModifier[0x10]; // 0x1690        
        // m_ParryBossVictimNoMeleeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimNoMeleeModifier;
        char m_ParryBossVictimNoMeleeModifier[0x10]; // 0x16a0        
        // m_ParryBossVictimCalmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimCalmModifier;
        char m_ParryBossVictimCalmModifier[0x10]; // 0x16b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityMeleeParryVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityMeleeParryVData) == 0x16c0);
};
