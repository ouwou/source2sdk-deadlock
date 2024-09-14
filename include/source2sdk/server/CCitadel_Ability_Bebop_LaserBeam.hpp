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
    // Size: 0xc58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeam : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x150]; // 0xae8
        bool m_bZoomed; // 0xc38        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xc39        
        [[maybe_unused]] std::uint8_t pad_0xc3a[0x2]; // 0xc3a
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0xc3c        
        [[maybe_unused]] std::uint8_t pad_0xc48[0x4]; // 0xc48
        // metadata: MNetworkEnable
        QAngle m_angBeamAngles; // 0xc4c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeam) == 0xc58);
};
