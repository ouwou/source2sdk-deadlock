#pragma once
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/server/CAI_LocalNavigatorBase.hpp"
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
    // Size: 0x158
    // Has VTable
    #pragma pack(push, 1)
    class CAI_LocalNavigator : public server::CAI_LocalNavigatorBase
    {
    public:
        bool m_bLastWasClear; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0xef]; // 0x51
        client::CSimpleSimTimer m_FullDirectTimer; // 0x140        
        [[maybe_unused]] std::uint8_t pad_0x148[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_LocalNavigator because it is not a standard-layout class
    static_assert(sizeof(CAI_LocalNavigator) == 0x158);
};
