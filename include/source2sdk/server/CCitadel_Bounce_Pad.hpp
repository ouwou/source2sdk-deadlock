#pragma once
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flUpFactor"
    // static metadata: MNetworkVarNames "float m_flBounceVelocity"
    #pragma pack(push, 1)
    class CCitadel_Bounce_Pad : public server::CCitadelAnimatingModelEntity
    {
    public:
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbility;
        char m_hAbility[0x4]; // 0xb28        
        // metadata: MNetworkEnable
        float m_flUpFactor; // 0xb2c        
        // metadata: MNetworkEnable
        float m_flBounceVelocity; // 0xb30        
        float m_flBarrelBounceVelocity; // 0xb34        
        float m_flBarrelUpFactor; // 0xb38        
        bool m_bSpeedOnLand; // 0xb3c        
        [[maybe_unused]] std::uint8_t pad_0xb3d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Bounce_Pad because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Bounce_Pad) == 0xb40);
};
