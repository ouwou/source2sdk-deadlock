#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
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
    // Size: 0xb40
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkIncludeByName "m_nNextThinkTick"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerWeapon"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
    // static metadata: MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
    // static metadata: MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
    // static metadata: MNetworkVarNames "int32 m_iClip1"
    // static metadata: MNetworkVarNames "int32 m_iClip2"
    // static metadata: MNetworkVarNames "int m_pReserveAmmo"
    #pragma pack(push, 1)
    class C_BasePlayerWeapon : public client::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTick_t m_nNextPrimaryAttackTick; // 0xb08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        float m_flNextPrimaryAttackTickRatio; // 0xb0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTick_t m_nNextSecondaryAttackTick; // 0xb10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        float m_flNextSecondaryAttackTickRatio; // 0xb14        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iClip1; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int32_t m_iClip2; // 0xb1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int32_t m_pReserveAmmo[2]; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb28[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BasePlayerWeapon because it is not a standard-layout class
    static_assert(sizeof(C_BasePlayerWeapon) == 0xb40);
};
