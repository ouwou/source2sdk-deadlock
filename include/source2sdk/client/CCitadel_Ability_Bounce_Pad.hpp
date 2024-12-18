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
    // Size: 0xdd0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_angFacing"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bounce_Pad : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vForward; // 0xc98        
        bool m_bShouldDeploy; // 0xca4        
        bool m_bAnglesSet; // 0xca5        
        bool m_bCanCancel; // 0xca6        
        [[maybe_unused]] std::uint8_t pad_0xca7[0x119]; // 0xca7
        // metadata: MNetworkEnable
        QAngle m_angFacing; // 0xdc0        
        [[maybe_unused]] std::uint8_t pad_0xdcc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bounce_Pad because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bounce_Pad) == 0xdd0);
};
