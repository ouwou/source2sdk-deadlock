#pragma once
#include "source2sdk/client/AI_MovementHeadingBadZone_t.hpp"
#include "source2sdk/client/AI_MovementHeadingMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AI_MovementHeadingSettings_t
    {
    public:
        client::AI_MovementHeadingMode_t m_eMode; // 0x0        
        bool m_bUseBadZones; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        // m_badZones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AI_MovementHeadingBadZone_t> m_badZones;
        char m_badZones[0x18]; // 0x8        
        float m_flPredictionLookAhead; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_eMode) == 0x0);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_bUseBadZones) == 0x4);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_badZones) == 0x8);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_flPredictionLookAhead) == 0x20);
    
    static_assert(sizeof(AI_MovementHeadingSettings_t) == 0x28);
};
