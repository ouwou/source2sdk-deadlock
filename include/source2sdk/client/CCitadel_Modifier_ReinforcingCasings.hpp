#pragma once
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_Base.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
    // Size: 0x170
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ReinforcingCasings : public client::CCitadel_Modifier_Intrinsic_Base
    {
    public:
        client::ShotID_t m_LastHitShotID; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ReinforcingCasings because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ReinforcingCasings) == 0x170);
};
