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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x100
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Hero_Clone : public client::CCitadelModifier
    {
    public:
        bool m_bMimicOwner; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Hero_Clone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Hero_Clone) == 0x100);
};
