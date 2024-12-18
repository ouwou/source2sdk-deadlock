#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4f8
    // Has VTable
    #pragma pack(push, 1)
    class CAI_SpeechFilter : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        CUtlSymbolLarge m_iszSubject; // 0x4e8        
        float m_flIdleModifier; // 0x4f0        
        bool m_bNeverSayHello; // 0x4f4        
        bool m_bDisabled; // 0x4f5        
        [[maybe_unused]] std::uint8_t pad_0x4f6[0x2];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // float InputSetIdleModifier; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_SpeechFilter because it is not a standard-layout class
    static_assert(sizeof(CAI_SpeechFilter) == 0x4f8);
};
