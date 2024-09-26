#pragma once
#include "source2sdk/server/CCitadel_Announcer_Base.hpp"
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
    // Size: 0xae8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Announcer : public server::CCitadel_Announcer_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad0[0x18];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Announcer) == 0xae8);
};
