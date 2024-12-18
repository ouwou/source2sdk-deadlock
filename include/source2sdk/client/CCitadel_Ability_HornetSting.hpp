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
    // Size: 0xe40
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_HornetSting : public client::C_CitadelBaseAbility
    {
    public:
        int32_t m_BounceCount; // 0xc98        
        bool m_bHitHero; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xc9d[0x3]; // 0xc9d
        // m_vecValidBounceTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecValidBounceTargets;
        char m_vecValidBounceTargets[0x18]; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xcb8[0x188];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HornetSting because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HornetSting) == 0xe40);
};
