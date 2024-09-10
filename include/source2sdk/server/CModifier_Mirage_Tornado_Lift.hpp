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
    // Size: 0x150
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Mirage_Tornado_Lift : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        Vector m_vecFloatDest; // 0x138        
        Vector m_vecStartingPos; // 0x144        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Mirage_Tornado_Lift because it is not a standard-layout class
    
    static_assert(sizeof(CModifier_Mirage_Tornado_Lift) == 0x150);
};
