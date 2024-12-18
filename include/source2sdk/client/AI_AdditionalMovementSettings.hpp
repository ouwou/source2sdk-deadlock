#pragma once
#include "source2sdk/client/AI_MovementHeadingSettings_t.hpp"
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
    // Size: 0x80
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class AI_AdditionalMovementSettings
    {
    public:
        client::AI_MovementHeadingSettings_t m_heading; // 0x0        
        float m_flAcceleration; // 0x28        
        float m_flDeceleration; // 0x2c        
        CPiecewiseCurve m_decelerationCurve; // 0x30        
        float m_flMovementMaxPathEndDirectionAngleDifferenceForStop; // 0x70        
        // metadata: MPropertyDescription "What angle between the current move direction and the direction to the next waypoint will trigger a planted turn. Any value <= 0 will use the sharp angle from the vmdl movement settings."
        float m_flMovementPlantedTurnAngleThreshold; // 0x74        
        float m_flMaxIdleTurnScaleUp; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x7c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_AdditionalMovementSettings, m_heading) == 0x0);
    static_assert(offsetof(AI_AdditionalMovementSettings, m_flAcceleration) == 0x28);
    static_assert(offsetof(AI_AdditionalMovementSettings, m_flDeceleration) == 0x2c);
    static_assert(offsetof(AI_AdditionalMovementSettings, m_decelerationCurve) == 0x30);
    static_assert(offsetof(AI_AdditionalMovementSettings, m_flMovementMaxPathEndDirectionAngleDifferenceForStop) == 0x70);
    static_assert(offsetof(AI_AdditionalMovementSettings, m_flMovementPlantedTurnAngleThreshold) == 0x74);
    static_assert(offsetof(AI_AdditionalMovementSettings, m_flMaxIdleTurnScaleUp) == 0x78);
    
    static_assert(sizeof(AI_AdditionalMovementSettings) == 0x80);
};
