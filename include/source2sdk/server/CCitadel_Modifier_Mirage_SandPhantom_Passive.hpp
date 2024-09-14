#pragma once
#include "source2sdk/server/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2a0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_SandPhantom_Passive : public server::CCitadel_Modifier_BaseBulletPreRollProc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x188[0x118];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Modifier_Mirage_SandPhantom_Passive) == 0x2a0);
};
