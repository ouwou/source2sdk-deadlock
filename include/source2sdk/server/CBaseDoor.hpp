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
    // Size: 0xa50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsUsable"
    #pragma pack(push, 1)
    class CBaseDoor : public server::CBaseToggle
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x848[0x10]; // 0x848
        QAngle m_angMoveEntitySpace; // 0x858        
        Vector m_vecMoveDirParentSpace; // 0x864        
        server::locksound_t m_ls; // 0x870        
        bool m_bForceClosed; // 0x890        
        bool m_bDoorGroup; // 0x891        
        bool m_bLocked; // 0x892        
        bool m_bIgnoreDebris; // 0x893        
        server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x894        
        float m_flBlockDamage; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x89c[0x4]; // 0x89c
        CUtlSymbolLarge m_NoiseMoving; // 0x8a0        
        CUtlSymbolLarge m_NoiseArrived; // 0x8a8        
        CUtlSymbolLarge m_NoiseMovingClosed; // 0x8b0        
        CUtlSymbolLarge m_NoiseArrivedClosed; // 0x8b8        
        CUtlSymbolLarge m_ChainTarget; // 0x8c0        
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0x8c8        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0x8f0        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x918        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x940        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x968        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x990        
        entity2::CEntityIOOutput m_OnClose; // 0x9b8        
        entity2::CEntityIOOutput m_OnOpen; // 0x9e0        
        entity2::CEntityIOOutput m_OnLockedUse; // 0xa08        
        bool m_bLoopMoveSound; // 0xa30        
        [[maybe_unused]] std::uint8_t pad_0xa31[0x17]; // 0xa31
        bool m_bCreateNavObstacle; // 0xa48        
        bool m_isChaining; // 0xa49        
        // metadata: MNetworkEnable
        bool m_bIsUsable; // 0xa4a        
        [[maybe_unused]] std::uint8_t pad_0xa4b[0x5];
        
        // Datamap fields:
        // void m_nMovingSoundGUID; // 0xa34
        //  m_ls.sLockedSound; // 0x878
        //  m_ls.sUnlockedSound; // 0x880
        // void InputOpen; // 0x0
        // void InputClose; // 0x0
        // void InputToggle; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetToggleState; // 0x0
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
    static_assert(sizeof(CBaseDoor) == 0xa50);
};
