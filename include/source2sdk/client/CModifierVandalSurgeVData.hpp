#pragma once
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0x800
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierVandalSurgeVData : public client::CCitadel_Modifier_StunnedVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_LiftParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LiftParticle;
        char m_LiftParticle[0xe0]; // 0x710        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strStartSound; // 0x7f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierVandalSurgeVData because it is not a standard-layout class
    static_assert(sizeof(CModifierVandalSurgeVData) == 0x800);
};
