#pragma once
#include "source2sdk/client/CCitadel_Modifier_Invis.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x270
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ReefdwellerHarpoon_Latched : public client::CCitadel_Modifier_Invis
    {
    public:
        entity2::GameTime_t m_flStartSpotted; // 0x268        
        [[maybe_unused]] std::uint8_t pad_0x26c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ReefdwellerHarpoon_Latched because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ReefdwellerHarpoon_Latched) == 0x270);
};
