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
    // Size: 0xc70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeam : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x150]; // 0xb00
        bool m_bZoomed; // 0xc50        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xc51        
        [[maybe_unused]] std::uint8_t pad_0xc52[0x2]; // 0xc52
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0xc54        
        [[maybe_unused]] std::uint8_t pad_0xc60[0x4]; // 0xc60
        // metadata: MNetworkEnable
        QAngle m_angBeamAngles; // 0xc64        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeam) == 0xc70);
};
