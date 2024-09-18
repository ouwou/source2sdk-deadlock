#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"
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
    // Size: 0x1758
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Item_HealthRegenAuraVData : public server::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_HealParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealParticle;
        char m_HealParticle[0xe0]; // 0x1588        
        // m_CastHealParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastHealParticle;
        char m_CastHealParticle[0xe0]; // 0x1668        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_HealingPulseTrackerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_HealingPulseTrackerModifier;
        char m_HealingPulseTrackerModifier[0x10]; // 0x1748        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_HealthRegenAuraVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_HealthRegenAuraVData) == 0x1758);
};
