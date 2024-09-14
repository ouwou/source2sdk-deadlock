#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2a0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Wrecker_Ultimate : public server::CCitadelModifier
    {
    public:
        // m_vecGrabbed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecGrabbed;
        char m_vecGrabbed[0x18]; // 0xc0        
        client::ParticleIndex_t m_nFXIndex; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xdc[0x1c4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Wrecker_Ultimate because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Wrecker_Ultimate) == 0x2a0);
};
