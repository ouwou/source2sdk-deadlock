#pragma once
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
    // Size: 0x158
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_PerchedPredatorDrag : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        QAngle m_qRelativeOffset; // 0x138        
        float m_flRelativeDist; // 0x144        
        Vector m_vecOffsetDir; // 0x148        
        // m_hFollowEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFollowEnt;
        char m_hFollowEnt[0x4]; // 0x154        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_PerchedPredatorDrag because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_PerchedPredatorDrag) == 0x158);
};
