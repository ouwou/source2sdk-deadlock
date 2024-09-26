#pragma once
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
    // Size: 0xb70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flUpFactor"
    // static metadata: MNetworkVarNames "float m_flBounceVelocity"
    #pragma pack(push, 1)
    class C_Citadel_Bounce_Pad : public client::CCitadelAnimatingModelEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flUpFactor; // 0xb58        
        // metadata: MNetworkEnable
        float m_flBounceVelocity; // 0xb5c        
        float m_flBarrelBounceVelocity; // 0xb60        
        float m_flBarrelUpFactor; // 0xb64        
        bool m_bSpeedOnLand; // 0xb68        
        [[maybe_unused]] std::uint8_t pad_0xb69[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Bounce_Pad because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Bounce_Pad) == 0xb70);
};
