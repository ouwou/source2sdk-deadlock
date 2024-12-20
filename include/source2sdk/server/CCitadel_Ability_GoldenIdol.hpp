#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_BaseHeldItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_GoldenIdol : public server::CCitadel_Ability_BaseHeldItem
    {
    public:
        int32_t m_nGold; // 0xb38        
        float m_flAmberTime; // 0xb3c        
        float m_flSapphireTime; // 0xb40        
        entity2::GameTime_t m_tAbilityCreateTime; // 0xb44        
        entity2::GameTime_t m_tLastDamageTime; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb4c[0x4]; // 0xb4c
        Vector m_vHomePosition; // 0xb50        
        [[maybe_unused]] std::uint8_t pad_0xb5c[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdol because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GoldenIdol) == 0xbd0);
};
