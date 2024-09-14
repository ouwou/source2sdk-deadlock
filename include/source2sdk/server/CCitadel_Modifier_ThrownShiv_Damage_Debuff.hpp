#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x170
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ThrownShiv_Damage_Debuff : public server::CCitadelModifier
    {
    public:
        int32_t m_nNumTicksRemaining; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ThrownShiv_Damage_Debuff because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ThrownShiv_Damage_Debuff) == 0x170);
};
