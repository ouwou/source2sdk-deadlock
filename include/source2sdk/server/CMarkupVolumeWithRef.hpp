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
    // Size: 0x818
    // Has VTable
    #pragma pack(push, 1)
    class CMarkupVolumeWithRef : public server::CMarkupVolumeTagged
    {
    public:
        bool m_bUseRef; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x801[0x3]; // 0x801
        Vector m_vRefPos; // 0x804        
        float m_flRefDot; // 0x810        
        [[maybe_unused]] std::uint8_t pad_0x814[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeWithRef because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeWithRef) == 0x818);
};
