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
    // Size: 0xc60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeam : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x150]; // 0xaf0
        bool m_bZoomed; // 0xc40        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xc41        
        [[maybe_unused]] std::uint8_t pad_0xc42[0x2]; // 0xc42
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0xc44        
        [[maybe_unused]] std::uint8_t pad_0xc50[0x4]; // 0xc50
        // metadata: MNetworkEnable
        QAngle m_angBeamAngles; // 0xc54        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeam) == 0xc60);
};
