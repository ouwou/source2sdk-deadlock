#pragma once
#include "source2sdk/client/CCitadelPlayerPawnBase.hpp"
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
    // Size: 0xf40
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
    class C_CitadelObserverPawn : public client::CCitadelPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf28[0x18];
        // Datamap fields:
        // CCitadelPlayer_ObserverServices m_pObserverServices; // 0xd88
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xda8
        // CCitadelObserver_MovementServices m_pMovementServices; // 0xdb0
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_CitadelObserverPawn) == 0xf40);
};
