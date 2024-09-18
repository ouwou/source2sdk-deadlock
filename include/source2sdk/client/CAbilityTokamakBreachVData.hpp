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
    // Size: 0x1640
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityTokamakBreachVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AllySmokeAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AllySmokeAOEModifier;
        char m_AllySmokeAOEModifier[0x10]; // 0x1540        
        // m_EnemySmokeAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_EnemySmokeAOEModifier;
        char m_EnemySmokeAOEModifier[0x10]; // 0x1550        
        // metadata: MPropertyStartGroup "Visuals"
        // m_PurgeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PurgeParticle;
        char m_PurgeParticle[0xe0]; // 0x1560        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityTokamakBreachVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityTokamakBreachVData) == 0x1640);
};
