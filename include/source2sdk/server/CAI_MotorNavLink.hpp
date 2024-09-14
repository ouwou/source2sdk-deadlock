#pragma once
#include "source2sdk/server/CAI_MotorTransition.hpp"
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
    // Size: 0x78
    // Has VTable
    #pragma pack(push, 1)
    class CAI_MotorNavLink : public server::CAI_MotorTransition
    {
    public:
        int32_t m_nNavLinkActiveType; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4]; // 0x64
        CGlobalSymbol m_strNavLinkActiveMovement; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x70[0x8];
        
        // Datamap fields:
        // CHandle< CBaseEntity > m_hNavLinkAreaEntity; // 0x70
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorNavLink because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorNavLink) == 0x78);
};
