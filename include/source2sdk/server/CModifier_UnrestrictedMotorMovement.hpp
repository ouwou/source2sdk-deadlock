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
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_UnrestrictedMotorMovement : public server::CCitadelModifier
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    
    static_assert(sizeof(CModifier_UnrestrictedMotorMovement) == 0xc8);
};