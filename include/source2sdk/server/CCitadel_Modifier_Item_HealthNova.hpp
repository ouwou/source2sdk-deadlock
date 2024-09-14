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
    // Size: 0x100
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Item_HealthNova : public server::CCitadelModifier
    {
    public:
        float m_flAmountPerSecond; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Item_HealthNova because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Item_HealthNova) == 0x100);
};
