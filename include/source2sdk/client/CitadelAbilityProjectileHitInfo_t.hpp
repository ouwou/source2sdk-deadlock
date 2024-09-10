#pragma once
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xe0
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CitadelAbilityProjectileHitInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xc8]; // 0x0
        client::C_BaseEntity* m_pOther; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xd0[0xc]; // 0xd0
        bool m_bIsTriggerTouch; // 0xdc        
        [[maybe_unused]] std::uint8_t pad_0xdd[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelAbilityProjectileHitInfo_t, m_pOther) == 0xc8);
    static_assert(offsetof(CitadelAbilityProjectileHitInfo_t, m_bIsTriggerTouch) == 0xdc);
    
    static_assert(sizeof(CitadelAbilityProjectileHitInfo_t) == 0xe0);
};
