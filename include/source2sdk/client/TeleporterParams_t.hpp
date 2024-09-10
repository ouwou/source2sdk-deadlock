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
    // Size: 0x1f0
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct TeleporterParams_t
    {
    public:
        // m_StartEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StartEffect;
        char m_StartEffect[0xe0]; // 0x0        
        // m_EndEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EndEffect;
        char m_EndEffect[0xe0]; // 0xe0        
        CSoundEventName m_strEnterSound; // 0x1c0        
        CSoundEventName m_strStartSound; // 0x1d0        
        CSoundEventName m_strTeleportedSound; // 0x1e0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TeleporterParams_t, m_StartEffect) == 0x0);
    static_assert(offsetof(TeleporterParams_t, m_EndEffect) == 0xe0);
    static_assert(offsetof(TeleporterParams_t, m_strEnterSound) == 0x1c0);
    static_assert(offsetof(TeleporterParams_t, m_strStartSound) == 0x1d0);
    static_assert(offsetof(TeleporterParams_t, m_strTeleportedSound) == 0x1e0);
    
    static_assert(sizeof(TeleporterParams_t) == 0x1f0);
};
