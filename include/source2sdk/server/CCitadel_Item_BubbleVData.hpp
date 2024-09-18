#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
    // Size: 0x1688
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Item_BubbleVData : public server::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1588        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_CastTargetSound; // 0x1668        
        // metadata: MPropertyGroupName "Modifiers"
        // m_BubbleModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_BubbleModifier;
        char m_BubbleModifier[0x10]; // 0x1678        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_BubbleVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_BubbleVData) == 0x1688);
};
