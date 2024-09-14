#pragma once
#include "source2sdk/client/C_CitadelProjectile.hpp"
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
    // Size: 0xb98
    // Has VTable
    #pragma pack(push, 1)
    class C_CitadelProjectile_ImmobilizeTrap : public client::C_CitadelProjectile
    {
    public:
        bool m_bShouldDraw; // 0x8b8        
        [[maybe_unused]] std::uint8_t pad_0x8b9[0x2df];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelProjectile_ImmobilizeTrap because it is not a standard-layout class
    static_assert(sizeof(C_CitadelProjectile_ImmobilizeTrap) == 0xb98);
};
