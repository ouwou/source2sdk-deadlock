#pragma once
#include "source2sdk/server/CCitadel_Modifier_Base_Buildup.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x228
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_IceBeam_Stacking_Slow : public server::CCitadel_Modifier_Base_Buildup
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd0[0x150]; // 0xd0
        float m_flCurrBuildup; // 0x220        
        [[maybe_unused]] std::uint8_t pad_0x224[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_IceBeam_Stacking_Slow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_IceBeam_Stacking_Slow) == 0x228);
};
