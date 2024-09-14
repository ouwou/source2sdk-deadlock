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
    // Size: 0x888
    // Has VTable
    #pragma pack(push, 1)
    class CItemExplosiveBarrel : public server::CCitadelProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x820[0x68];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CItemExplosiveBarrel) == 0x888);
};
