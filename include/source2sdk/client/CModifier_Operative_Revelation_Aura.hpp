#pragma once
#include "source2sdk/client/CCitadelModifierAura.hpp"
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
    // Size: 0x160
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Operative_Revelation_Aura : public client::CCitadelModifierAura
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf0[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CModifier_Operative_Revelation_Aura) == 0x160);
};
