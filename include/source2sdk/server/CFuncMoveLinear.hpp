#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/MoveLinearAuthoredPos_t.hpp"
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
    // Size: 0x8f0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecVelocity"
    // static metadata: MNetworkOverride "m_fFlags CBaseEntity"
    #pragma pack(push, 1)
    class CFuncMoveLinear : public server::CBaseToggle
    {
    public:
        server::MoveLinearAuthoredPos_t m_authoredPosition; // 0x848        
        QAngle m_angMoveEntitySpace; // 0x84c        
        Vector m_vecMoveDirParentSpace; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x864[0x4]; // 0x864
        CUtlSymbolLarge m_soundStart; // 0x868        
        CUtlSymbolLarge m_soundStop; // 0x870        
        CUtlSymbolLarge m_currentSound; // 0x878        
        float m_flBlockDamage; // 0x880        
        float m_flStartPosition; // 0x884        
        [[maybe_unused]] std::uint8_t pad_0x888[0x8]; // 0x888
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x890        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x8b8        
        bool m_bCreateMovableNavMesh; // 0x8e0        
        bool m_bCreateNavObstacle; // 0x8e1        
        [[maybe_unused]] std::uint8_t pad_0x8e2[0xe];
        
        // Datamap fields:
        // float m_flMoveDistance; // 0x7cc
        // bool movewithoutpushingblockers; // 0x7fffffff
        // void CFuncMoveLinearNavObstacleThink; // 0x0
        // void CFuncMoveLinearNavMovableThink; // 0x0
        // void InputOpen; // 0x0
        // void InputClose; // 0x0
        // float InputSetPosition; // 0x0
        // float InputSetSpeed; // 0x0
        // CUtlSymbolLarge InputTeleportToTarget; // 0x0
        // float InputResetPosition; // 0x0
        // float InputSetMoveDistanceFromStart; // 0x0
        // float InputSetMoveDistanceFromEnd; // 0x0
        // void CFuncMoveLinearStopMoveSound; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncMoveLinear because it is not a standard-layout class
    static_assert(sizeof(CFuncMoveLinear) == 0x8f0);
};
