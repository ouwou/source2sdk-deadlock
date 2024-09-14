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
    // Size: 0xb98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
    #pragma pack(push, 1)
    class CCitadel_Ability_HatTrick : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelProjectile> m_hProjectile;
        char m_hProjectile[0x4]; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xaec[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HatTrick because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HatTrick) == 0xb98);
};
