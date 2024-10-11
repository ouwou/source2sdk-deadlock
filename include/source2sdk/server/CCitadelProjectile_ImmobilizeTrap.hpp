#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xb08
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelProjectile_ImmobilizeTrap : public server::CCitadelProjectile
    {
    public:
        entity2::GameTime_t m_flStartTime; // 0x878        
        Vector m_vecStartPos; // 0x87c        
        Vector m_vecEndPos; // 0x888        
        entity2::GameTime_t m_flProjectileLandTime; // 0x894        
        [[maybe_unused]] std::uint8_t pad_0x898[0x270];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelProjectile_ImmobilizeTrap because it is not a standard-layout class
    static_assert(sizeof(CCitadelProjectile_ImmobilizeTrap) == 0xb08);
};
