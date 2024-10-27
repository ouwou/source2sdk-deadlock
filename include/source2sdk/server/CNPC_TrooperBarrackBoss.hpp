#pragma once
#include "source2sdk/server/CNPC_TrooperBoss.hpp"
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
    // Size: 0x1ad8
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_TrooperBarrackBoss : public server::CNPC_TrooperBoss
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1ad0[0x8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNPC_TrooperBarrackBoss) == 0x1ad8);
};
