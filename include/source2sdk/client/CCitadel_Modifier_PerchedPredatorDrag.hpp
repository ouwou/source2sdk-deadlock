#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x150
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_PerchedPredatorDrag : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x70]; // 0xc0
        QAngle m_qRelativeOffset; // 0x130        
        float m_flRelativeDist; // 0x13c        
        Vector m_vecOffsetDir; // 0x140        
        // m_hFollowEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFollowEnt;
        char m_hFollowEnt[0x4]; // 0x14c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_PerchedPredatorDrag because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_PerchedPredatorDrag) == 0x150);
};
