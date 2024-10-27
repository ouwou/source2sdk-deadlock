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
    // Size: 0x860
    // Has VTable
    #pragma pack(push, 1)
    class CProjectile_Rolling_FireBall : public server::CCitadelProjectile
    {
    public:
        bool m_bHitWorld; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x851[0x3]; // 0x851
        Vector m_vInitialDirection; // 0x854        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CProjectile_Rolling_FireBall because it is not a standard-layout class
    static_assert(sizeof(CProjectile_Rolling_FireBall) == 0x860);
};
