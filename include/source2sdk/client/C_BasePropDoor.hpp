#pragma once
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/DoorState_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe20
    // Has VTable
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
    // static metadata: MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
    #pragma pack(push, 1)
    class C_BasePropDoor : public client::C_DynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xde0[0x10]; // 0xde0
        // metadata: MNetworkEnable
        client::DoorState_t m_eDoorState; // 0xdf0        
        bool m_modelChanged; // 0xdf4        
        // metadata: MNetworkEnable
        bool m_bLocked; // 0xdf5        
        [[maybe_unused]] std::uint8_t pad_0xdf6[0x2]; // 0xdf6
        // metadata: MNetworkEnable
        Vector m_closedPosition; // 0xdf8        
        // metadata: MNetworkEnable
        QAngle m_closedAngles; // 0xe04        
        // metadata: MNetworkEnable
        // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePropDoor> m_hMaster;
        char m_hMaster[0x4]; // 0xe10        
        Vector m_vWhereToSetLightingOrigin; // 0xe14        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BasePropDoor because it is not a standard-layout class
    static_assert(sizeof(C_BasePropDoor) == 0xe20);
};
