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
    // Size: 0x350
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Shadow_Step : public client::CCitadel_Modifier_Invis
    {
    public:
        bool m_bWasInvis; // 0x268        
        [[maybe_unused]] std::uint8_t pad_0x269[0x3]; // 0x269
        entity2::GameTime_t m_tInvisEndTime; // 0x26c        
        [[maybe_unused]] std::uint8_t pad_0x270[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Shadow_Step because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Shadow_Step) == 0x350);
};
