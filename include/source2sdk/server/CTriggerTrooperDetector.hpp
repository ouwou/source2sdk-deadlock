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
    // Size: 0x9a0
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerTrooperDetector : public server::CBaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x938[0x60]; // 0x938
        float m_flRadius; // 0x998        
        [[maybe_unused]] std::uint8_t pad_0x99c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerTrooperDetector because it is not a standard-layout class
    static_assert(sizeof(CTriggerTrooperDetector) == 0x9a0);
};
