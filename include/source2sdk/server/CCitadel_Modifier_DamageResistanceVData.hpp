#pragma once
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x640
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_DamageResistanceVData : public server::CCitadelModifierVData
    {
    public:
        float m_flDamageResistancePerSecond; // 0x630        
        float m_flTickInterval; // 0x634        
        float m_flDamageResistanceBonusPerGameMinute; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_DamageResistanceVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_DamageResistanceVData) == 0x640);
};
