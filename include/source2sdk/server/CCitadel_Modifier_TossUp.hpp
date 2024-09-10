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
    // Size: 0xe0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_TossUp : public server::CCitadelModifier
    {
    public:
        bool m_bForceApplied; // 0xc8        
        bool m_bLandedOnGround; // 0xc9        
        [[maybe_unused]] std::uint8_t pad_0xca[0x2]; // 0xca
        Vector m_vTossUpForce; // 0xcc        
        float m_flCurrentVelocityScale; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xdc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TossUp because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_TossUp) == 0xe0);
};
