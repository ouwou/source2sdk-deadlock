#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x148
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Mirage_Tornado_Lift : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x70]; // 0xc0
        Vector m_vecFloatDest; // 0x130        
        Vector m_vecStartingPos; // 0x13c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Mirage_Tornado_Lift because it is not a standard-layout class
    static_assert(sizeof(CModifier_Mirage_Tornado_Lift) == 0x148);
};
