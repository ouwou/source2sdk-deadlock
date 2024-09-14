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
    class CCitadel_Ability_Thumper_4;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x940
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_Cyclone : public server::CCitadelProjectile
    {
    public:
        // m_CycloneAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_Ability_Thumper_4> m_CycloneAbility;
        char m_CycloneAbility[0x4]; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x824[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_Cyclone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_Cyclone) == 0x940);
};
