#pragma once
#include "source2sdk/client/C_NPC_HeroCloneTrooper.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x14a8
    // Has VTable
    #pragma pack(push, 1)
    class C_NPC_HeroDecoy : public client::C_NPC_HeroCloneTrooper
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_NPC_HeroDecoy) == 0x14a8);
};
