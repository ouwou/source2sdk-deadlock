#pragma once
#include "source2sdk/server/CCitadel_PointTalker_Base.hpp"
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
    // Size: 0xad8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_PointTalker : public server::CCitadel_PointTalker_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xac8[0x10];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_PointTalker) == 0xad8);
};
