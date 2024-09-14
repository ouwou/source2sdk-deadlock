#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicAutosave.hpp"
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
    class CLogicActiveAutosave : public server::CLogicAutosave
    {
    public:
        int32_t m_TriggerHitPoints; // 0x4e8        
        float m_flTimeToTrigger; // 0x4ec        
        entity2::GameTime_t m_flStartTime; // 0x4f0        
        float m_flDangerousTime; // 0x4f4        
        
        // Datamap fields:
        // void CLogicActiveAutosaveSaveThink; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicActiveAutosave because it is not a standard-layout class
    static_assert(sizeof(CLogicActiveAutosave) == 0x4f8);
};
