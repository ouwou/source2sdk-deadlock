#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x720
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_LifeDrainVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SilenceModifier;
        char m_SilenceModifier[0x10]; // 0x630        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DrainParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrainParticle;
        char m_DrainParticle[0xe0]; // 0x640        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_LifeDrainVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_LifeDrainVData) == 0x720);
};
