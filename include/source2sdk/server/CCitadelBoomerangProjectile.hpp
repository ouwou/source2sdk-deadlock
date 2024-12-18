#pragma once
#include "source2sdk/server/CCitadelProjectile.hpp"
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
    // Size: 0x9c0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelBoomerangProjectile : public server::CCitadelProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x868[0x150]; // 0x868
        bool m_bReturning; // 0x9b8        
        [[maybe_unused]] std::uint8_t pad_0x9b9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBoomerangProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelBoomerangProjectile) == 0x9c0);
};
