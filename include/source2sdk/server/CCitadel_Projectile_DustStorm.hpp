#pragma once
#include "source2sdk/server/CCitadelProjectile.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadel_Ability_Dust_Storm;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9e8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_DustStorm : public server::CCitadelProjectile
    {
    public:
        int32_t m_cTicksNoMovement; // 0x820        
        // m_DustStormAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_Ability_Dust_Storm> m_DustStormAbility;
        char m_DustStormAbility[0x4]; // 0x824        
        [[maybe_unused]] std::uint8_t pad_0x828[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_DustStorm because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_DustStorm) == 0x9e8);
};
