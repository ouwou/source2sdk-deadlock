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
    class CCitadelProjectile;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcb0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_MagicBolt : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x8]; // 0xb00
        // m_vecDeployedProjectiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CCitadelProjectile>> m_vecDeployedProjectiles;
        char m_vecDeployedProjectiles[0x18]; // 0xb08        
        int32_t m_iCurrentRedirects; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb24[0x18c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_MagicBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_MagicBolt) == 0xcb0);
};
