#pragma once
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
    // Standard-layout class: true
    // Size: 0xf8
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct PerSurfaceImpactEffects_t
    {
    public:
        CUtlString m_strDecal; // 0x0        
        // m_strParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strParticle;
        char m_strParticle[0xe0]; // 0x8        
        CSoundEventName m_strSound; // 0xe8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PerSurfaceImpactEffects_t, m_strDecal) == 0x0);
    static_assert(offsetof(PerSurfaceImpactEffects_t, m_strParticle) == 0x8);
    static_assert(offsetof(PerSurfaceImpactEffects_t, m_strSound) == 0xe8);
    
    static_assert(sizeof(PerSurfaceImpactEffects_t) == 0xf8);
};
