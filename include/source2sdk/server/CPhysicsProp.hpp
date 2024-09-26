#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp__CrateType_t.hpp"
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
    // Size: 0xd08
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
    class CPhysicsProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb60[0x8]; // 0xb60
        entity2::CEntityIOOutput m_MotionEnabled; // 0xb68        
        entity2::CEntityIOOutput m_OnAwakened; // 0xb90        
        entity2::CEntityIOOutput m_OnAwake; // 0xbb8        
        entity2::CEntityIOOutput m_OnAsleep; // 0xbe0        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xc08        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xc30        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xc58        
        bool m_bForceNavIgnore; // 0xc80        
        bool m_bNoNavmeshBlocker; // 0xc81        
        bool m_bForceNpcExclude; // 0xc82        
        [[maybe_unused]] std::uint8_t pad_0xc83[0x1]; // 0xc83
        float m_massScale; // 0xc84        
        float m_inertiaScale; // 0xc88        
        float m_buoyancyScale; // 0xc8c        
        int32_t m_damageType; // 0xc90        
        int32_t m_damageToEnableMotion; // 0xc94        
        float m_flForceToEnableMotion; // 0xc98        
        bool m_bThrownByPlayer; // 0xc9c        
        bool m_bDroppedByPlayer; // 0xc9d        
        bool m_bTouchedByPlayer; // 0xc9e        
        bool m_bFirstCollisionAfterLaunch; // 0xc9f        
        int32_t m_iExploitableByPlayer; // 0xca0        
        bool m_bHasBeenAwakened; // 0xca4        
        bool m_bIsOverrideProp; // 0xca5        
        [[maybe_unused]] std::uint8_t pad_0xca6[0x2]; // 0xca6
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xca8        
        int32_t m_iInitialGlowState; // 0xcac        
        int32_t m_nGlowRange; // 0xcb0        
        int32_t m_nGlowRangeMin; // 0xcb4        
        Color m_glowColor; // 0xcb8        
        bool m_bShouldAutoConvertBackFromDebris; // 0xcbc        
        bool m_bMuteImpactEffects; // 0xcbd        
        [[maybe_unused]] std::uint8_t pad_0xcbe[0x9]; // 0xcbe
        bool m_bAcceptDamageFromHeldObjects; // 0xcc7        
        bool m_bEnableUseOutput; // 0xcc8        
        [[maybe_unused]] std::uint8_t pad_0xcc9[0x3]; // 0xcc9
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xccc        
        CUtlSymbolLarge m_strItemClass[4]; // 0xcd0        
        int32_t m_nItemCount[4]; // 0xcf0        
        bool m_bRemovableForAmmoBalancing; // 0xd00        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xd01        
        [[maybe_unused]] std::uint8_t pad_0xd02[0x6];
        
        // Datamap fields:
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputWake; // 0x0
        // bool InputSetAutoConvertBackFromDebris; // 0x0
        // void InputSleep; // 0x0
        // void InputDisableFloating; // 0x0
        // void InputStartGlowing; // 0x0
        // void InputStopGlowing; // 0x0
        // Vector InputSetGlowOverride; // 0x0
        // int32_t InputSetGlowRange; // 0x0
        // float InputSetMass; // 0x0
        // void InputEnableGravity; // 0x0
        // void InputDisableGravity; // 0x0
        // void InputEnableDrag; // 0x0
        // void InputDisableDrag; // 0x0
        // void InputEnableCollisions; // 0x0
        // void InputDisableCollisions; // 0x0
        // bool forcemotiondisabled; // 0x7fffffff
        // bool phys_start_asleep; // 0x7fffffff
        // void CPhysicsPropClearFlagsThink; // 0x0
        // int32_t m_nNavObstacleType; // 0xcc0
        // bool m_bUpdateNavWhenMoving; // 0xcc4
        // bool m_bForceNavObstacleCut; // 0xcc5
        // bool m_bAllowObstacleConvexHullMerging; // 0xcc6
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xd08);
};
