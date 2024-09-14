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
    // Size: 0x940
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerRemoveModifier : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_strModifier; // 0x938        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerRemoveModifier because it is not a standard-layout class
    static_assert(sizeof(CTriggerRemoveModifier) == 0x940);
};
