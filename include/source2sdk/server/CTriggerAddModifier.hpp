#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x948
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerAddModifier : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_strModifier; // 0x938        
        float m_flDuration; // 0x940        
        bool m_bMomentary; // 0x944        
        [[maybe_unused]] std::uint8_t pad_0x945[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerAddModifier because it is not a standard-layout class
    static_assert(sizeof(CTriggerAddModifier) == 0x948);
};
