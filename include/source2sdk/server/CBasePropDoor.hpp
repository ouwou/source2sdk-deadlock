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
    // Size: 0xf88
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
        [[maybe_unused]] std::uint8_t pad_0xcf8[0x10]; // 0xcf8
        float m_flAutoReturnDelay; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd0c[0x4]; // 0xd0c
        // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBasePropDoor>> m_hDoorList;
        char m_hDoorList[0x18]; // 0xd10        
        int32_t m_nHardwareType; // 0xd28        
        bool m_bNeedsHardware; // 0xd2c        
        [[maybe_unused]] std::uint8_t pad_0xd2d[0x3]; // 0xd2d
        // metadata: MNetworkEnable
        client::DoorState_t m_eDoorState; // 0xd30        
        // metadata: MNetworkEnable
        bool m_bLocked; // 0xd34        
        [[maybe_unused]] std::uint8_t pad_0xd35[0x3]; // 0xd35
        // metadata: MNetworkEnable
        Vector m_closedPosition; // 0xd38        
        // metadata: MNetworkEnable
        QAngle m_closedAngles; // 0xd44        
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBlocker;
        char m_hBlocker[0x4]; // 0xd50        
        bool m_bFirstBlocked; // 0xd54        
        [[maybe_unused]] std::uint8_t pad_0xd55[0x3]; // 0xd55
        server::locksound_t m_ls; // 0xd58        
        bool m_bForceClosed; // 0xd78        
        [[maybe_unused]] std::uint8_t pad_0xd79[0x3]; // 0xd79
        Vector m_vecLatchWorldPosition; // 0xd7c        
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0xd88        
        [[maybe_unused]] std::uint8_t pad_0xd8c[0xc]; // 0xd8c
        CUtlSymbolLarge m_SoundMoving; // 0xd98        
        CUtlSymbolLarge m_SoundOpen; // 0xda0        
        CUtlSymbolLarge m_SoundClose; // 0xda8        
        CUtlSymbolLarge m_SoundLock; // 0xdb0        
        CUtlSymbolLarge m_SoundUnlock; // 0xdb8        
        CUtlSymbolLarge m_SoundLatch; // 0xdc0        
        CUtlSymbolLarge m_SoundPound; // 0xdc8        
        CUtlSymbolLarge m_SoundJiggle; // 0xdd0        
        CUtlSymbolLarge m_SoundLockedAnim; // 0xdd8        
        int32_t m_numCloseAttempts; // 0xde0        
        CUtlStringToken m_nPhysicsMaterial; // 0xde4        
        CUtlSymbolLarge m_SlaveName; // 0xde8        
        // metadata: MNetworkEnable
        // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePropDoor> m_hMaster;
        char m_hMaster[0x4]; // 0xdf0        
        [[maybe_unused]] std::uint8_t pad_0xdf4[0x4]; // 0xdf4
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0xdf8        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0xe20        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xe48        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xe70        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0xe98        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0xec0        
        entity2::CEntityIOOutput m_OnClose; // 0xee8        
        entity2::CEntityIOOutput m_OnOpen; // 0xf10        
        entity2::CEntityIOOutput m_OnLockedUse; // 0xf38        
        entity2::CEntityIOOutput m_OnAjarOpen; // 0xf60        
        
        // Datamap fields:
        // void m_hSoundMoving; // 0xd8c
        //  m_ls.sLockedSound; // 0xd60
        //  m_ls.sUnlockedSound; // 0xd68
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
    static_assert(sizeof(CBasePropDoor) == 0xf88);
};
