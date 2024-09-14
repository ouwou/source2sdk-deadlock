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
    // Size: 0xc20
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_angFacing"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bounce_Pad : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vForward; // 0xae8        
        bool m_bShouldDeploy; // 0xaf4        
        bool m_bAnglesSet; // 0xaf5        
        bool m_bCanCancel; // 0xaf6        
        [[maybe_unused]] std::uint8_t pad_0xaf7[0x119]; // 0xaf7
        // metadata: MNetworkEnable
        QAngle m_angFacing; // 0xc10        
        [[maybe_unused]] std::uint8_t pad_0xc1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bounce_Pad because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bounce_Pad) == 0xc20);
};
