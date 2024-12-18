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
    // Size: 0xce0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_MagicBolt : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x8]; // 0xaf8
        // m_vecDeployedProjectiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CCitadelProjectile>> m_vecDeployedProjectiles;
        char m_vecDeployedProjectiles[0x18]; // 0xb00        
        int32_t m_iCurrentRedirects; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb1c[0x1c4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_MagicBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_MagicBolt) == 0xce0);
};
