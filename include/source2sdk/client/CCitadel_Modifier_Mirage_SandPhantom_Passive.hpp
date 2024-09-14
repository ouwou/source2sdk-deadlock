#pragma once
#include "source2sdk/client/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2a0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_SandPhantom_Passive : public client::CCitadel_Modifier_BaseBulletPreRollProc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x188[0x118];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Modifier_Mirage_SandPhantom_Passive) == 0x2a0);
};
