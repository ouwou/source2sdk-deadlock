#pragma once
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
    // Size: 0xba8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_GoldenIdol : public server::CCitadel_Ability_BaseHeldItem
    {
    public:
        int32_t m_nGold; // 0xb30        
        [[maybe_unused]] std::uint8_t pad_0xb34[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdol because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GoldenIdol) == 0xba8);
};
