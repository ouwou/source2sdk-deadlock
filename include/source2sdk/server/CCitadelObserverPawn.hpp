#pragma once
#include "source2sdk/server/CCitadelPlayerPawnBase.hpp"
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
    // Size: 0xc80
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_ObserverServices m_pObserverServices"
    // static metadata: MNetworkIncludeByName "m_pObserverServices"
    // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarTypeOverride "CCitadelObserver_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    #pragma pack(push, 1)
    class CCitadelObserverPawn : public server::CCitadelPlayerPawnBase
    {
    public:
        // Datamap fields:
        // CCitadelPlayer_ObserverServices m_pObserverServices; // 0xae8
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xb08
        // CCitadelObserver_MovementServices m_pMovementServices; // 0xb10
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadelObserverPawn) == 0xc80);
};
