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
    // Size: 0xe10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeam : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc90[0x150]; // 0xc90
        bool m_bZoomed; // 0xde0        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xde1        
        [[maybe_unused]] std::uint8_t pad_0xde2[0x2]; // 0xde2
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0xde4        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnBebopBeamAnglesChanged"
        QAngle m_angBeamAngles; // 0xdf0        
        [[maybe_unused]] std::uint8_t pad_0xdfc[0xc]; // 0xdfc
        bool m_bNeedsBeamReset; // 0xe08        
        [[maybe_unused]] std::uint8_t pad_0xe09[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeam) == 0xe10);
};
