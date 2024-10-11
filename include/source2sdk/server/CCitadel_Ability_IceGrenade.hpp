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
    // Size: 0xbe8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_IceGrenade : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vLaunchPosition; // 0xaf0        
        QAngle m_qLaunchAngle; // 0xafc        
        [[maybe_unused]] std::uint8_t pad_0xb08[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IceGrenade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IceGrenade) == 0xbe8);
};
