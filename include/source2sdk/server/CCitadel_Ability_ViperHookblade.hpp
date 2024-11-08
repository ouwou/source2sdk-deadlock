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
    // Size: 0xd28
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_ViperHookblade : public server::CCitadelBaseAbility
    {
    public:
        // m_vecOutgoingHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecOutgoingHitList;
        char m_vecOutgoingHitList[0x18]; // 0xb00        
        // m_vecReturningHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecReturningHitList;
        char m_vecReturningHitList[0x18]; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb30[0x1f8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ViperHookblade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ViperHookblade) == 0xd28);
};
