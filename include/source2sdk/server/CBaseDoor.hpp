#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/FuncDoorSpawnPos_t.hpp"
#include "source2sdk/server/locksound_t.hpp"
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
    // Size: 0xa48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsUsable"
    #pragma pack(push, 1)
    class CBaseDoor : public server::CBaseToggle
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x840[0x10]; // 0x840
        QAngle m_angMoveEntitySpace; // 0x850        
        Vector m_vecMoveDirParentSpace; // 0x85c        
        server::locksound_t m_ls; // 0x868        
        bool m_bForceClosed; // 0x888        
        bool m_bDoorGroup; // 0x889        
        bool m_bLocked; // 0x88a        
        bool m_bIgnoreDebris; // 0x88b        
        bool m_bNoNPCs; // 0x88c        
        [[maybe_unused]] std::uint8_t pad_0x88d[0x3]; // 0x88d
        server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x890        
        float m_flBlockDamage; // 0x894        
        CUtlSymbolLarge m_NoiseMoving; // 0x898        
        CUtlSymbolLarge m_NoiseArrived; // 0x8a0        
        CUtlSymbolLarge m_NoiseMovingClosed; // 0x8a8        
        CUtlSymbolLarge m_NoiseArrivedClosed; // 0x8b0        
        CUtlSymbolLarge m_ChainTarget; // 0x8b8        
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0x8c0        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0x8e8        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x910        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x938        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x960        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x988        
        entity2::CEntityIOOutput m_OnClose; // 0x9b0        
        entity2::CEntityIOOutput m_OnOpen; // 0x9d8        
        entity2::CEntityIOOutput m_OnLockedUse; // 0xa00        
        bool m_bLoopMoveSound; // 0xa28        
        [[maybe_unused]] std::uint8_t pad_0xa29[0x17]; // 0xa29
        bool m_bCreateNavObstacle; // 0xa40        
        bool m_isChaining; // 0xa41        
        // metadata: MNetworkEnable
        bool m_bIsUsable; // 0xa42        
        [[maybe_unused]] std::uint8_t pad_0xa43[0x5];
        
        // Datamap fields:
        // void m_nMovingSoundGUID; // 0xa2c
        //  m_ls.sLockedSound; // 0x870
        //  m_ls.sUnlockedSound; // 0x878
        // void InputOpen; // 0x0
        // void InputClose; // 0x0
        // void InputToggle; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetToggleState; // 0x0
        // bool InputSetNoNPCs; // 0x0
        // void CBaseDoorDoorTouch; // 0x0
        // void CBaseDoorDoorGoUp; // 0x0
        // void CBaseDoorDoorGoDown; // 0x0
        // void CBaseDoorDoorHitTop; // 0x0
        // void CBaseDoorDoorHitBottom; // 0x0
        // void CBaseDoorMovingSoundThink; // 0x0
        // void CBaseDoorCloseAreaPortalsThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseDoor because it is not a standard-layout class
    static_assert(sizeof(CBaseDoor) == 0xa48);
};
