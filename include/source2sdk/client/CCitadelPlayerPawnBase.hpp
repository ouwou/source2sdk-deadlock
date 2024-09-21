#pragma once
#include "source2sdk/client/C_BasePlayerPawn.hpp"
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
    // Size: 0xf20
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPlayerPawnBase : public client::C_BasePlayerPawn
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf08[0x18];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadelPlayerPawnBase) == 0xf20);
};
