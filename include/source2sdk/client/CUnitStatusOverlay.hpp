#pragma once
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
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
    // Size: 0xaf0
    // Has VTable
    #pragma pack(push, 1)
    class CUnitStatusOverlay : public client::C_PointClientUIWorldPanel
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa90[0x40]; // 0xa90
        float m_flUIScale; // 0xad0        
        [[maybe_unused]] std::uint8_t pad_0xad4[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CUnitStatusOverlay because it is not a standard-layout class
    static_assert(sizeof(CUnitStatusOverlay) == 0xaf0);
};
