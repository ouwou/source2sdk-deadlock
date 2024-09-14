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
    class CCitadel_Ability_Spinning_Blade;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb78
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Dust_Storm : public server::CCitadelBaseAbility
    {
    public:
        // m_hSpinningBladeAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_Ability_Spinning_Blade> m_hSpinningBladeAbility;
        char m_hSpinningBladeAbility[0x4]; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xaec[0x4]; // 0xaec
        // m_vTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vTargets;
        char m_vTargets[0x18]; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xb08[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Dust_Storm because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Dust_Storm) == 0xb78);
};
