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
    // Size: 0xb00
    // Has VTable
    #pragma pack(push, 1)
    class CUnitStatusOverlayOld : public client::CUnitStatusOverlay
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaa0[0x40]; // 0xaa0
        float m_flUIScale; // 0xae0        
        [[maybe_unused]] std::uint8_t pad_0xae4[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CUnitStatusOverlayOld because it is not a standard-layout class
    static_assert(sizeof(CUnitStatusOverlayOld) == 0xb00);
};
