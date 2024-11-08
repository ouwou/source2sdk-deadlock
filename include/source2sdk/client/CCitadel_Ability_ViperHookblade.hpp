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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xec8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_ViperHookblade : public client::C_CitadelBaseAbility
    {
    public:
        // m_vecOutgoingHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecOutgoingHitList;
        char m_vecOutgoingHitList[0x18]; // 0xca0        
        // m_vecReturningHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecReturningHitList;
        char m_vecReturningHitList[0x18]; // 0xcb8        
        [[maybe_unused]] std::uint8_t pad_0xcd0[0x1f8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ViperHookblade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ViperHookblade) == 0xec8);
};
