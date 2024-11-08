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
    // Size: 0xb20
    // Has VTable
    #pragma pack(push, 1)
    class CUnitStatusOverlayOld : public client::CUnitStatusOverlay
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xac0[0x40]; // 0xac0
        float m_flUIScale; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CUnitStatusOverlayOld because it is not a standard-layout class
    static_assert(sizeof(CUnitStatusOverlayOld) == 0xb20);
};
