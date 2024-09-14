#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x48
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Behavior : public client::CAI_Component
    {
    public:
        bool m_bActive; // 0x40        
        bool m_bOverrode; // 0x41        
        [[maybe_unused]] std::uint8_t pad_0x42[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Behavior because it is not a standard-layout class
    static_assert(sizeof(CAI_Behavior) == 0x48);
};
