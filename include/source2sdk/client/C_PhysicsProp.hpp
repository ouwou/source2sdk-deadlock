#pragma once
#include "source2sdk/client/C_BreakableProp.hpp"
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
    // Size: 0xcd8
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bAwake"
    #pragma pack(push, 1)
    class C_PhysicsProp : public client::C_BreakableProp
    {
    public:
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PhysicsProp because it is not a standard-layout class
    static_assert(sizeof(C_PhysicsProp) == 0xcd8);
};
