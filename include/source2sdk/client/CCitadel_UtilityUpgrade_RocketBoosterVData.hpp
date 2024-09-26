#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_UtilityUpgrade_RocketBootsVData.hpp"
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
    // Size: 0x1958
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_UtilityUpgrade_RocketBoosterVData : public client::CCitadel_UtilityUpgrade_RocketBootsVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_LandingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LandingParticle;
        char m_LandingParticle[0xe0]; // 0x1680        
        // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
        char m_AoEPreviewParticle[0xe0]; // 0x1760        
        // m_DropDownStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DropDownStartParticle;
        char m_DropDownStartParticle[0xe0]; // 0x1840        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_DropDownStartSound; // 0x1920        
        CSoundEventName m_LandingSound; // 0x1930        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x1940        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flSlamEnabledTime; // 0x1950        
        [[maybe_unused]] std::uint8_t pad_0x1954[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_UtilityUpgrade_RocketBoosterVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_UtilityUpgrade_RocketBoosterVData) == 0x1958);
};
