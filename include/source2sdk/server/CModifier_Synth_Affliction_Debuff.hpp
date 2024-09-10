#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x170
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Synth_Affliction_Debuff : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0xa8];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    
    static_assert(sizeof(CModifier_Synth_Affliction_Debuff) == 0x170);
};
