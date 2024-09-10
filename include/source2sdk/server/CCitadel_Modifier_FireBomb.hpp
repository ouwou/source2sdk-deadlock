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
    // Size: 0x158
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_FireBomb : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x70]; // 0xc8
        float m_flSideMoveSpeed; // 0x138        
        Vector m_vReturnPosition; // 0x13c        
        QAngle m_vReturnAngles; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x154[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_FireBomb because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_FireBomb) == 0x158);
};
