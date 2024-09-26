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
    // Size: 0xcb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelProjectile> m_hActiveProjectile"
    #pragma pack(push, 1)
    class CAbility_Mirage_Tornado : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vLastValidMovementPosition; // 0xae8        
        // metadata: MNetworkEnable
        // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelProjectile> m_hActiveProjectile;
        char m_hActiveProjectile[0x4]; // 0xaf4        
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_Tornado because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_Tornado) == 0xcb8);
};
