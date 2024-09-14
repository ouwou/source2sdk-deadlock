#pragma once
#include "source2sdk/client/CGlowOverlay.hpp"
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
    // Size: 0xd8
    // Has VTable
    #pragma pack(push, 1)
    class C_SunGlowOverlay : public client::CGlowOverlay
    {
    public:
        bool m_bModulateByDot; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SunGlowOverlay because it is not a standard-layout class
    static_assert(sizeof(C_SunGlowOverlay) == 0xd8);
};
