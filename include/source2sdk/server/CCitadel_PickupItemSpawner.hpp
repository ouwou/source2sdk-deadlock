#pragma once
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    // Size: 0xa40
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_PickupItemSpawner : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa38[0x8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_PickupItemSpawner) == 0xa40);
};
