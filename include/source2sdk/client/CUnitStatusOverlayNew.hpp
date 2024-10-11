#pragma once
#include "source2sdk/client/CUnitStatusOverlay.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xb30
    // Has VTable
    #pragma pack(push, 1)
    class CUnitStatusOverlayNew : public client::CUnitStatusOverlay
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaa0[0x68]; // 0xaa0
        float m_flUIScale; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x24];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CUnitStatusOverlayNew because it is not a standard-layout class
    static_assert(sizeof(CUnitStatusOverlayNew) == 0xb30);
};
