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
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CCitadelProjectile;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd00
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Spinning_Blade : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x1f8]; // 0xae8
        // m_vecOutgoingHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecOutgoingHits;
        char m_vecOutgoingHits[0x18]; // 0xce0        
        // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelProjectile> m_hActiveProjectile;
        char m_hActiveProjectile[0x4]; // 0xcf8        
        [[maybe_unused]] std::uint8_t pad_0xcfc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Spinning_Blade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Spinning_Blade) == 0xd00);
};
