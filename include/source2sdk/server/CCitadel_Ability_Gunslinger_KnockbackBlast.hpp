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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xca8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Gunslinger_KnockbackBlast : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vecKnockbackDirection; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4]; // 0xb04
        // m_vecKnockbackedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecKnockbackedUnits;
        char m_vecKnockbackedUnits[0x18]; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb20[0x188];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_KnockbackBlast because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Gunslinger_KnockbackBlast) == 0xca8);
};
