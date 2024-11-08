#pragma once
#include "source2sdk/client/AI_MovementHeadingBadZone_t.hpp"
#include "source2sdk/client/AI_MovementHeadingMode_t.hpp"
#include "source2sdk/client/AI_MovementHeadingSmoothingMode_t.hpp"
#include "source2sdk/client/AI_MovementHeadingUpdateCondition_t.hpp"
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
    // Size: 0x30
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AI_MovementHeadingSettings_t
    {
    public:
        client::AI_MovementHeadingMode_t m_eMode; // 0x0        
        client::AI_MovementHeadingSmoothingMode_t m_eSmoothingMode; // 0x4        
        client::AI_MovementHeadingUpdateCondition_t m_eLeftUpdateCondition; // 0x8        
        client::AI_MovementHeadingUpdateCondition_t m_eRighUpdateCondition; // 0xc        
        float m_flSpringSmoothingDuration; // 0x10        
        float m_flConstantSmoothingSpeed; // 0x14        
        // m_badZones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AI_MovementHeadingBadZone_t> m_badZones;
        char m_badZones[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_eMode) == 0x0);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_eSmoothingMode) == 0x4);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_eLeftUpdateCondition) == 0x8);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_eRighUpdateCondition) == 0xc);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_flSpringSmoothingDuration) == 0x10);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_flConstantSmoothingSpeed) == 0x14);
    static_assert(offsetof(AI_MovementHeadingSettings_t, m_badZones) == 0x18);
    
    static_assert(sizeof(AI_MovementHeadingSettings_t) == 0x30);
};
