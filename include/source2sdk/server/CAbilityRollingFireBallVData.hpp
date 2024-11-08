#pragma once
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1578
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityRollingFireBallVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyStartGroup "Modifiers"
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flBallLifetime; // 0x1560        
        float m_flBallStepUpHeight; // 0x1564        
        float m_flBallDistAboveGround; // 0x1568        
        float m_flBallFloatDownRate; // 0x156c        
        float m_flBallSpeed; // 0x1570        
        float m_flBallTraceRadius; // 0x1574        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityRollingFireBallVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityRollingFireBallVData) == 0x1578);
};
