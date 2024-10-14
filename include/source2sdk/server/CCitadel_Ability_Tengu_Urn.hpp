#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xbb8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_Urn : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vLaunchPosition; // 0xaf8        
        QAngle m_qLaunchAngle; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb10[0xa8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_Urn because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_Urn) == 0xbb8);
};
