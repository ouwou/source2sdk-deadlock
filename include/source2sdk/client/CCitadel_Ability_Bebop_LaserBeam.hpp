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
    // Size: 0xe18
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeam : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x150]; // 0xc98
        bool m_bZoomed; // 0xde8        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xde9        
        [[maybe_unused]] std::uint8_t pad_0xdea[0x2]; // 0xdea
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0xdec        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnBebopBeamAnglesChanged"
        QAngle m_angBeamAngles; // 0xdf8        
        [[maybe_unused]] std::uint8_t pad_0xe04[0xc]; // 0xe04
        bool m_bNeedsBeamReset; // 0xe10        
        [[maybe_unused]] std::uint8_t pad_0xe11[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeam) == 0xe18);
};
