#pragma once
#include "source2sdk/server/CMarkupVolumeTagged.hpp"
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
    // Size: 0x810
    // Has VTable
    #pragma pack(push, 1)
    class CMarkupVolumeWithRef : public server::CMarkupVolumeTagged
    {
    public:
        bool m_bUseRef; // 0x7f8        
        [[maybe_unused]] std::uint8_t pad_0x7f9[0x3]; // 0x7f9
        Vector m_vRefPos; // 0x7fc        
        float m_flRefDot; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x80c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeWithRef because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeWithRef) == 0x810);
};
