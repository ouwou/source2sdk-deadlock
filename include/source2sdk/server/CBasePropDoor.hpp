#pragma once
#include "source2sdk/client/DoorState_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xee0
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "DoorState_t m_eDoorState"
    // static metadata: MNetworkVarNames "bool m_bLocked"
    // static metadata: MNetworkVarNames "Vector m_closedPosition"
    // static metadata: MNetworkVarNames "QAngle m_closedAngles"
    // static metadata: MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
    #pragma pack(push, 1)
    class CBasePropDoor : public server::CDynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0x10]; // 0xc50
        float m_flAutoReturnDelay; // 0xc60        
        [[maybe_unused]] std::uint8_t pad_0xc64[0x4]; // 0xc64
        // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBasePropDoor>> m_hDoorList;
        char m_hDoorList[0x18]; // 0xc68        
        int32_t m_nHardwareType; // 0xc80        
        bool m_bNeedsHardware; // 0xc84        
        [[maybe_unused]] std::uint8_t pad_0xc85[0x3]; // 0xc85
        // metadata: MNetworkEnable
        client::DoorState_t m_eDoorState; // 0xc88        
        // metadata: MNetworkEnable
        bool m_bLocked; // 0xc8c        
        [[maybe_unused]] std::uint8_t pad_0xc8d[0x3]; // 0xc8d
        // metadata: MNetworkEnable
        Vector m_closedPosition; // 0xc90        
        // metadata: MNetworkEnable
        QAngle m_closedAngles; // 0xc9c        
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBlocker;
        char m_hBlocker[0x4]; // 0xca8        
        bool m_bFirstBlocked; // 0xcac        
        [[maybe_unused]] std::uint8_t pad_0xcad[0x3]; // 0xcad
        server::locksound_t m_ls; // 0xcb0        
        bool m_bForceClosed; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd1[0x3]; // 0xcd1
        Vector m_vecLatchWorldPosition; // 0xcd4        
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce4[0xc]; // 0xce4
        CUtlSymbolLarge m_SoundMoving; // 0xcf0        
        CUtlSymbolLarge m_SoundOpen; // 0xcf8        
        CUtlSymbolLarge m_SoundClose; // 0xd00        
        CUtlSymbolLarge m_SoundLock; // 0xd08        
        CUtlSymbolLarge m_SoundUnlock; // 0xd10        
        CUtlSymbolLarge m_SoundLatch; // 0xd18        
        CUtlSymbolLarge m_SoundPound; // 0xd20        
        CUtlSymbolLarge m_SoundJiggle; // 0xd28        
        CUtlSymbolLarge m_SoundLockedAnim; // 0xd30        
        int32_t m_numCloseAttempts; // 0xd38        
        CUtlStringToken m_nPhysicsMaterial; // 0xd3c        
        CUtlSymbolLarge m_SlaveName; // 0xd40        
        // metadata: MNetworkEnable
        // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePropDoor> m_hMaster;
        char m_hMaster[0x4]; // 0xd48        
        [[maybe_unused]] std::uint8_t pad_0xd4c[0x4]; // 0xd4c
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0xd50        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0xd78        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xda0        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xdc8        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0xdf0        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0xe18        
        entity2::CEntityIOOutput m_OnClose; // 0xe40        
        entity2::CEntityIOOutput m_OnOpen; // 0xe68        
        entity2::CEntityIOOutput m_OnLockedUse; // 0xe90        
        entity2::CEntityIOOutput m_OnAjarOpen; // 0xeb8        
        
        // Datamap fields:
        // void m_hSoundMoving; // 0xce4
        //  m_ls.sLockedSound; // 0xcb8
        //  m_ls.sUnlockedSound; // 0xcc0
        // void InputOpen; // 0x0
        // CUtlSymbolLarge InputOpenAwayFrom; // 0x0
        // float InputOpenAwayFromActivator; // 0x0
        // void InputClose; // 0x0
        // void InputToggle; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // void InputPlayerOpen; // 0x0
        // void InputPlayerClose; // 0x0
        // void CBasePropDoorDoorOpenMoveDone; // 0x0
        // void CBasePropDoorDoorCloseMoveDone; // 0x0
        // void CBasePropDoorDoorAutoCloseThink; // 0x0
        // void CBasePropDoorDisableAreaPortalThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePropDoor because it is not a standard-layout class
    
    static_assert(sizeof(CBasePropDoor) == 0xee0);
};
