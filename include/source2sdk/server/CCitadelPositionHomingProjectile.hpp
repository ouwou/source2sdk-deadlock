#pragma once
#include "source2sdk/server/CCitadelTrackedProjectile.hpp"
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
    // Size: 0x8b8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPositionHomingProjectile : public server::CCitadelTrackedProjectile
    {
    public:
        Vector m_vecHomingPosition; // 0x8a8        
        [[maybe_unused]] std::uint8_t pad_0x8b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPositionHomingProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelPositionHomingProjectile) == 0x8b8);
};
