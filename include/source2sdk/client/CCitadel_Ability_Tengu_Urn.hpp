#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd38
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_Urn : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vLaunchPosition; // 0xc78        
        QAngle m_qLaunchAngle; // 0xc84        
        [[maybe_unused]] std::uint8_t pad_0xc90[0xa8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_Urn because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_Urn) == 0xd38);
};
