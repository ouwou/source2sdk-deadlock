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
    // Size: 0x50
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CAI_LocalNavigatorBase : public client::CAI_Component
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x40[0x10];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CAI_LocalNavigatorBase) == 0x50);
};
