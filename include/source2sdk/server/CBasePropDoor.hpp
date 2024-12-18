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
    // Size: 0xf78
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
    // static metadata: MNetworkVarNames "bool m_bNoNPCs"
    // static metadata: MNetworkVarNames "Vector m_closedPosition"
    // static metadata: MNetworkVarNames "QAngle m_closedAngles"
    // static metadata: MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
    #pragma pack(push, 1)
    class CBasePropDoor : public server::CDynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xce8[0x10]; // 0xce8
        float m_flAutoReturnDelay; // 0xcf8        
        [[maybe_unused]] std::uint8_t pad_0xcfc[0x4]; // 0xcfc
        // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBasePropDoor>> m_hDoorList;
        char m_hDoorList[0x18]; // 0xd00        
        int32_t m_nHardwareType; // 0xd18        
        bool m_bNeedsHardware; // 0xd1c        
        [[maybe_unused]] std::uint8_t pad_0xd1d[0x3]; // 0xd1d
        // metadata: MNetworkEnable
        client::DoorState_t m_eDoorState; // 0xd20        
        // metadata: MNetworkEnable
        bool m_bLocked; // 0xd24        
        // metadata: MNetworkEnable
        bool m_bNoNPCs; // 0xd25        
        [[maybe_unused]] std::uint8_t pad_0xd26[0x2]; // 0xd26
        // metadata: MNetworkEnable
        Vector m_closedPosition; // 0xd28        
        // metadata: MNetworkEnable
        QAngle m_closedAngles; // 0xd34        
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBlocker;
        char m_hBlocker[0x4]; // 0xd40        
        bool m_bFirstBlocked; // 0xd44        
        [[maybe_unused]] std::uint8_t pad_0xd45[0x3]; // 0xd45
        server::locksound_t m_ls; // 0xd48        
        bool m_bForceClosed; // 0xd68        
        [[maybe_unused]] std::uint8_t pad_0xd69[0x3]; // 0xd69
        Vector m_vecLatchWorldPosition; // 0xd6c        
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0xd78        
        [[maybe_unused]] std::uint8_t pad_0xd7c[0xc]; // 0xd7c
        CUtlSymbolLarge m_SoundMoving; // 0xd88        
        CUtlSymbolLarge m_SoundOpen; // 0xd90        
        CUtlSymbolLarge m_SoundClose; // 0xd98        
        CUtlSymbolLarge m_SoundLock; // 0xda0        
        CUtlSymbolLarge m_SoundUnlock; // 0xda8        
        CUtlSymbolLarge m_SoundLatch; // 0xdb0        
        CUtlSymbolLarge m_SoundPound; // 0xdb8        
        CUtlSymbolLarge m_SoundJiggle; // 0xdc0        
        CUtlSymbolLarge m_SoundLockedAnim; // 0xdc8        
        int32_t m_numCloseAttempts; // 0xdd0        
        CUtlStringToken m_nPhysicsMaterial; // 0xdd4        
        CUtlSymbolLarge m_SlaveName; // 0xdd8        
        // metadata: MNetworkEnable
        // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePropDoor> m_hMaster;
        char m_hMaster[0x4]; // 0xde0        
        [[maybe_unused]] std::uint8_t pad_0xde4[0x4]; // 0xde4
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0xde8        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0xe10        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xe38        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xe60        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0xe88        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0xeb0        
        entity2::CEntityIOOutput m_OnClose; // 0xed8        
        entity2::CEntityIOOutput m_OnOpen; // 0xf00        
        entity2::CEntityIOOutput m_OnLockedUse; // 0xf28        
        entity2::CEntityIOOutput m_OnAjarOpen; // 0xf50        
        
        // Datamap fields:
        // void m_hSoundMoving; // 0xd7c
        //  m_ls.sLockedSound; // 0xd50
        //  m_ls.sUnlockedSound; // 0xd58
        // void InputOpen; // 0x0
        // CUtlSymbolLarge InputOpenAwayFrom; // 0x0
        // float InputOpenAwayFromActivator; // 0x0
        // void InputClose; // 0x0
        // void InputToggle; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // void InputPlayerOpen; // 0x0
        // void InputPlayerClose; // 0x0
        // bool InputSetNoNPCs; // 0x0
        // void CBasePropDoorDoorOpenMoveDone; // 0x0
        // void CBasePropDoorDoorCloseMoveDone; // 0x0
        // void CBasePropDoorDoorAutoCloseThink; // 0x0
        // void CBasePropDoorDisableAreaPortalThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePropDoor because it is not a standard-layout class
    static_assert(sizeof(CBasePropDoor) == 0xf78);
};
