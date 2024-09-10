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
    // 
    // static metadata: MNetworkVarNames "QAngle m_angFacing"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bounce_Pad : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vForward; // 0xc60        
        bool m_bShouldDeploy; // 0xc6c        
        bool m_bAnglesSet; // 0xc6d        
        bool m_bCanCancel; // 0xc6e        
        [[maybe_unused]] std::uint8_t pad_0xc6f[0x119]; // 0xc6f
        // metadata: MNetworkEnable
        QAngle m_angFacing; // 0xd88        
        [[maybe_unused]] std::uint8_t pad_0xd94[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bounce_Pad because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Bounce_Pad) == 0xd98);
};
