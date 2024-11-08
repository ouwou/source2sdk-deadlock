#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x9e0
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerFan : public server::CBaseTrigger
    {
    public:
        Vector m_vFanOrigin; // 0x990        
        Vector m_vFanEnd; // 0x99c        
        Vector m_vNoise; // 0x9a8        
        float m_flForce; // 0x9b4        
        float m_flRopeForceScale; // 0x9b8        
        float m_flPlayerForce; // 0x9bc        
        float m_flRampTime; // 0x9c0        
        bool m_bFalloff; // 0x9c4        
        bool m_bPushPlayer; // 0x9c5        
        bool m_bRampDown; // 0x9c6        
        bool m_bAddNoise; // 0x9c7        
        server::CountdownTimer m_RampTimer; // 0x9c8        
        
        // Datamap fields:
        // void CTriggerFanPushThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
    static_assert(sizeof(CTriggerFan) == 0x9e0);
};
