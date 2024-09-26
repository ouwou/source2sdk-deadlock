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
    // Size: 0xd98
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Wrecker_Ultimate : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc78[0x20]; // 0xc78
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnGrabBeamAnglesChanged"
        QAngle m_angBeamAngles; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xca4[0xc]; // 0xca4
        bool m_bNeedsBeamReset; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb1[0xe7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Wrecker_Ultimate because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Wrecker_Ultimate) == 0xd98);
};
