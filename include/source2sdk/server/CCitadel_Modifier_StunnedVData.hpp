#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x710
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_StunnedVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_StunnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StunnedParticle;
        char m_StunnedParticle[0xe0]; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_StunnedVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_StunnedVData) == 0x710);
};
