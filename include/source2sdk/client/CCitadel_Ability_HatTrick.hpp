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
    // Size: 0xd28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
    #pragma pack(push, 1)
    class CCitadel_Ability_HatTrick : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelProjectile> m_hProjectile;
        char m_hProjectile[0x4]; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc7c[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HatTrick because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HatTrick) == 0xd28);
};
