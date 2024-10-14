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
    // Size: 0xc68
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeam : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x150]; // 0xaf8
        bool m_bZoomed; // 0xc48        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xc49        
        [[maybe_unused]] std::uint8_t pad_0xc4a[0x2]; // 0xc4a
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0xc4c        
        [[maybe_unused]] std::uint8_t pad_0xc58[0x4]; // 0xc58
        // metadata: MNetworkEnable
        QAngle m_angBeamAngles; // 0xc5c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeam) == 0xc68);
};
