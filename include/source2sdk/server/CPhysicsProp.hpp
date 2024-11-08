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
    // Size: 0xda0
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
        [[maybe_unused]] std::uint8_t pad_0xbf8[0x8]; // 0xbf8
        entity2::CEntityIOOutput m_MotionEnabled; // 0xc00        
        entity2::CEntityIOOutput m_OnAwakened; // 0xc28        
        entity2::CEntityIOOutput m_OnAwake; // 0xc50        
        entity2::CEntityIOOutput m_OnAsleep; // 0xc78        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xca0        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xcc8        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xcf0        
        bool m_bForceNavIgnore; // 0xd18        
        bool m_bNoNavmeshBlocker; // 0xd19        
        bool m_bForceNpcExclude; // 0xd1a        
        [[maybe_unused]] std::uint8_t pad_0xd1b[0x1]; // 0xd1b
        float m_massScale; // 0xd1c        
        float m_inertiaScale; // 0xd20        
        float m_buoyancyScale; // 0xd24        
        int32_t m_damageType; // 0xd28        
        int32_t m_damageToEnableMotion; // 0xd2c        
        float m_flForceToEnableMotion; // 0xd30        
        bool m_bThrownByPlayer; // 0xd34        
        bool m_bDroppedByPlayer; // 0xd35        
        bool m_bTouchedByPlayer; // 0xd36        
        bool m_bFirstCollisionAfterLaunch; // 0xd37        
        int32_t m_iExploitableByPlayer; // 0xd38        
        bool m_bHasBeenAwakened; // 0xd3c        
        bool m_bIsOverrideProp; // 0xd3d        
        [[maybe_unused]] std::uint8_t pad_0xd3e[0x2]; // 0xd3e
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xd40        
        int32_t m_iInitialGlowState; // 0xd44        
        int32_t m_nGlowRange; // 0xd48        
        int32_t m_nGlowRangeMin; // 0xd4c        
        Color m_glowColor; // 0xd50        
        bool m_bShouldAutoConvertBackFromDebris; // 0xd54        
        bool m_bMuteImpactEffects; // 0xd55        
        [[maybe_unused]] std::uint8_t pad_0xd56[0x9]; // 0xd56
        bool m_bAcceptDamageFromHeldObjects; // 0xd5f        
        bool m_bEnableUseOutput; // 0xd60        
        [[maybe_unused]] std::uint8_t pad_0xd61[0x3]; // 0xd61
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xd64        
        CUtlSymbolLarge m_strItemClass[4]; // 0xd68        
        int32_t m_nItemCount[4]; // 0xd88        
        bool m_bRemovableForAmmoBalancing; // 0xd98        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xd99        
        [[maybe_unused]] std::uint8_t pad_0xd9a[0x6];
        
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
        // int32_t m_nNavObstacleType; // 0xd58
        // bool m_bUpdateNavWhenMoving; // 0xd5c
        // bool m_bForceNavObstacleCut; // 0xd5d
        // bool m_bAllowObstacleConvexHullMerging; // 0xd5e
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xda0);
};
