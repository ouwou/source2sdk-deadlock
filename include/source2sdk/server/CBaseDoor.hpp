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
    // Size: 0x9f0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsUsable"
    #pragma pack(push, 1)
    class CBaseDoor : public server::CBaseToggle
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7e8[0x10]; // 0x7e8
        QAngle m_angMoveEntitySpace; // 0x7f8        
        Vector m_vecMoveDirParentSpace; // 0x804        
        server::locksound_t m_ls; // 0x810        
        bool m_bForceClosed; // 0x830        
        bool m_bDoorGroup; // 0x831        
        bool m_bLocked; // 0x832        
        bool m_bIgnoreDebris; // 0x833        
        server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x834        
        float m_flBlockDamage; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4]; // 0x83c
        CUtlSymbolLarge m_NoiseMoving; // 0x840        
        CUtlSymbolLarge m_NoiseArrived; // 0x848        
        CUtlSymbolLarge m_NoiseMovingClosed; // 0x850        
        CUtlSymbolLarge m_NoiseArrivedClosed; // 0x858        
        CUtlSymbolLarge m_ChainTarget; // 0x860        
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0x868        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0x890        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x8b8        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x8e0        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x908        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x930        
        entity2::CEntityIOOutput m_OnClose; // 0x958        
        entity2::CEntityIOOutput m_OnOpen; // 0x980        
        entity2::CEntityIOOutput m_OnLockedUse; // 0x9a8        
        bool m_bLoopMoveSound; // 0x9d0        
        [[maybe_unused]] std::uint8_t pad_0x9d1[0x17]; // 0x9d1
        bool m_bCreateNavObstacle; // 0x9e8        
        bool m_isChaining; // 0x9e9        
        // metadata: MNetworkEnable
        bool m_bIsUsable; // 0x9ea        
        [[maybe_unused]] std::uint8_t pad_0x9eb[0x5];
        
        // Datamap fields:
        // void m_nMovingSoundGUID; // 0x9d4
        //  m_ls.sLockedSound; // 0x818
        //  m_ls.sUnlockedSound; // 0x820
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
    static_assert(sizeof(CBaseDoor) == 0x9f0);
};
