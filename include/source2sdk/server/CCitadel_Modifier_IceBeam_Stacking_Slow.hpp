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
    // Size: 0x1f8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_IceBeam_Stacking_Slow : public server::CCitadel_Modifier_Base_Buildup
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd8[0x118]; // 0xd8
        float m_flCurrBuildup; // 0x1f0        
        [[maybe_unused]] std::uint8_t pad_0x1f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_IceBeam_Stacking_Slow because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_IceBeam_Stacking_Slow) == 0x1f8);
};
