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
    // Size: 0xd80
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
        [[maybe_unused]] std::uint8_t pad_0xbd8[0x8]; // 0xbd8
        entity2::CEntityIOOutput m_MotionEnabled; // 0xbe0        
        entity2::CEntityIOOutput m_OnAwakened; // 0xc08        
        entity2::CEntityIOOutput m_OnAwake; // 0xc30        
        entity2::CEntityIOOutput m_OnAsleep; // 0xc58        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xc80        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xca8        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xcd0        
        bool m_bForceNavIgnore; // 0xcf8        
        bool m_bNoNavmeshBlocker; // 0xcf9        
        bool m_bForceNpcExclude; // 0xcfa        
        [[maybe_unused]] std::uint8_t pad_0xcfb[0x1]; // 0xcfb
        float m_massScale; // 0xcfc        
        float m_inertiaScale; // 0xd00        
        float m_buoyancyScale; // 0xd04        
        int32_t m_damageType; // 0xd08        
        int32_t m_damageToEnableMotion; // 0xd0c        
        float m_flForceToEnableMotion; // 0xd10        
        bool m_bThrownByPlayer; // 0xd14        
        bool m_bDroppedByPlayer; // 0xd15        
        bool m_bTouchedByPlayer; // 0xd16        
        bool m_bFirstCollisionAfterLaunch; // 0xd17        
        int32_t m_iExploitableByPlayer; // 0xd18        
        bool m_bHasBeenAwakened; // 0xd1c        
        bool m_bIsOverrideProp; // 0xd1d        
        [[maybe_unused]] std::uint8_t pad_0xd1e[0x2]; // 0xd1e
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xd20        
        int32_t m_iInitialGlowState; // 0xd24        
        int32_t m_nGlowRange; // 0xd28        
        int32_t m_nGlowRangeMin; // 0xd2c        
        Color m_glowColor; // 0xd30        
        bool m_bShouldAutoConvertBackFromDebris; // 0xd34        
        bool m_bMuteImpactEffects; // 0xd35        
        [[maybe_unused]] std::uint8_t pad_0xd36[0x9]; // 0xd36
        bool m_bAcceptDamageFromHeldObjects; // 0xd3f        
        bool m_bEnableUseOutput; // 0xd40        
        [[maybe_unused]] std::uint8_t pad_0xd41[0x3]; // 0xd41
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xd44        
        CUtlSymbolLarge m_strItemClass[4]; // 0xd48        
        int32_t m_nItemCount[4]; // 0xd68        
        bool m_bRemovableForAmmoBalancing; // 0xd78        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xd79        
        [[maybe_unused]] std::uint8_t pad_0xd7a[0x6];
        
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
        // int32_t m_nNavObstacleType; // 0xd38
        // bool m_bUpdateNavWhenMoving; // 0xd3c
        // bool m_bForceNavObstacleCut; // 0xd3d
        // bool m_bAllowObstacleConvexHullMerging; // 0xd3e
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xd80);
};
