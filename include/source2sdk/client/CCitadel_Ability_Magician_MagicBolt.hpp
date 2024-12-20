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
    class C_CitadelProjectile;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe80
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_MagicBolt : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x8]; // 0xc98
        // m_vecDeployedProjectiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_CitadelProjectile>> m_vecDeployedProjectiles;
        char m_vecDeployedProjectiles[0x18]; // 0xca0        
        int32_t m_iCurrentRedirects; // 0xcb8        
        [[maybe_unused]] std::uint8_t pad_0xcbc[0x1c4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_MagicBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_MagicBolt) == 0xe80);
};
