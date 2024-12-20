#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x730
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChainLightningEffectVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_ChainParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChainParticle;
        char m_ChainParticle[0xe0]; // 0x630        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_ChainSound; // 0x710        
        CSoundEventName m_VictimSound; // 0x720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightningEffectVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ChainLightningEffectVData) == 0x730);
};
