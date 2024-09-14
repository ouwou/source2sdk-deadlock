#pragma once
#include "source2sdk/server/CCitadel_Item_Bubble.hpp"
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
    // Size: 0xb10
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_Stasis_Bomb : public server::CCitadel_Item_Bubble
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Item_Stasis_Bomb) == 0xb10);
};
